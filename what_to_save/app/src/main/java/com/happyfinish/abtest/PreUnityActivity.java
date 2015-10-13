package com.happyfinish.abtest;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

/**
 * Created by andreamelle on 13/10/2015.
 */
public class PreUnityActivity extends Activity implements View.OnClickListener {
    Button goToUnityScene1;
    Button goToUnityScene2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_preunity);

        goToUnityScene1 = (Button)findViewById(R.id.gotoscene1_button);
        goToUnityScene2 = (Button)findViewById(R.id.gotoscene2_button);

        goToUnityScene1.setOnClickListener(this);
        goToUnityScene2.setOnClickListener(this);

    }

    @Override
    public void onClick(View v) {
        Intent gotoUnityIntent = new Intent(this, UnityPlayerActivity.class);
        switch (v.getId()) {
            case R.id.gotoscene1_button:
                gotoUnityIntent.putExtra("scene", "scene1");
                break;
            case R.id.gotoscene2_button:
                gotoUnityIntent.putExtra("scene", "scene2");
                break;
            default:
                break;
        }

        startActivity(gotoUnityIntent);
    }
}
