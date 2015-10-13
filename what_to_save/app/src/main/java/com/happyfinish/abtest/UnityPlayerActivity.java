package com.happyfinish.abtest;

import com.unity3d.player.*;
import android.app.Activity;
import android.content.Intent;
import android.content.res.Configuration;
import android.graphics.PixelFormat;
import android.os.Bundle;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;

public class UnityPlayerActivity extends Activity
{
	private static UnityPlayerActivity sActivity;

	protected UnityPlayer mUnityPlayer; // don't change the name of this variable; referenced from native code

	protected String mInteropGameObjectName;
	protected boolean mHasRequestedScene = false;

	// Setup activity layout
	@Override protected void onCreate (Bundle savedInstanceState)
	{
		sActivity = this;

		requestWindowFeature(Window.FEATURE_NO_TITLE);
		super.onCreate(savedInstanceState);

		getWindow().setFormat(PixelFormat.RGBX_8888); // <--- This makes xperia play happy

		mUnityPlayer = new UnityPlayer(this);
		if (mUnityPlayer.getSettings().getBoolean("hide_status_bar", true))
		{
			getWindow ().setFlags (WindowManager.LayoutParams.FLAG_FULLSCREEN,
			                       WindowManager.LayoutParams.FLAG_FULLSCREEN);
		}

		setContentView(mUnityPlayer);
		mUnityPlayer.requestFocus();

		// will load the empty scene now...

	}

	public static UnityPlayerActivity getActivity()
	{
		return sActivity;
	}

	// will be called from Unity side
	public void onUnityInit(String unityGameObjectName)
	{
		mInteropGameObjectName = unityGameObjectName;
		Log.d("Interop GameObject name", mInteropGameObjectName);

		if(!mHasRequestedScene)
		{
			mHasRequestedScene = true;
			String scene = "dummy";
			if(this.getIntent().hasExtra("scene"))
			{
				scene = this.getIntent().getExtras().getString("scene");
			}
			Log.d("scene from create", scene);
			UnityPlayer.UnitySendMessage(mInteropGameObjectName, "RequestSceneFromNative", scene);
		}
	}

	public void onUnitySceneUnloaded(String scenename)
	{
		Log.d("Scene unloaded", scenename);
	}

	public void onUnitySceneLoaded(String scenename)
	{
		Log.d("scene loaded", scenename);
	}

	@Override
	protected void onNewIntent(Intent intent)
	{

	}

	// Quit Unity
	@Override protected void onDestroy ()
	{
		mUnityPlayer.quit();
		super.onDestroy();
	}

	// Pause Unity
	@Override protected void onPause()
	{
		super.onPause();
		mUnityPlayer.pause();
	}

	// Resume Unity
	@Override protected void onResume()
	{
		super.onResume();
		mUnityPlayer.resume();
	}

	// This ensures the layout will be correct.
	@Override public void onConfigurationChanged(Configuration newConfig)
	{
		super.onConfigurationChanged(newConfig);
		mUnityPlayer.configurationChanged(newConfig);
	}

	// Notify Unity of the focus change.
	@Override public void onWindowFocusChanged(boolean hasFocus)
	{
		super.onWindowFocusChanged(hasFocus);
		mUnityPlayer.windowFocusChanged(hasFocus);
	}

	// For some reason the multiple keyevent type is not supported by the ndk.
	// Force event injection by overriding dispatchKeyEvent().
	@Override public boolean dispatchKeyEvent(KeyEvent event)
	{
		if(event.getAction() == KeyEvent.KEYCODE_BACK)
		{
			//finish();
			return true; //super.onKeyUp(keyCode, event);
		}

		if (event.getAction() == KeyEvent.ACTION_MULTIPLE)
			return mUnityPlayer.injectEvent(event);
		return super.dispatchKeyEvent(event);
	}

	// Pass any events not handled by (unfocused) views straight to UnityPlayer
	@Override public boolean onKeyUp(int keyCode, KeyEvent event)     {
		if(keyCode == KeyEvent.KEYCODE_BACK)
		{
			this.finish();
			return true; //super.onKeyUp(keyCode, event);
		}

		return mUnityPlayer.injectEvent(event);
	}

	@Override public boolean onKeyDown(int keyCode, KeyEvent event) {
		if(keyCode == KeyEvent.KEYCODE_BACK)
		{
			//finish();
			return true; //super.onKeyDown(keyCode, event);
		}
		return mUnityPlayer.injectEvent(event);
	}
	@Override public boolean onTouchEvent(MotionEvent event)          { return mUnityPlayer.injectEvent(event); }
	/*API12*/ public boolean onGenericMotionEvent(MotionEvent event)  { return mUnityPlayer.injectEvent(event); }
}
