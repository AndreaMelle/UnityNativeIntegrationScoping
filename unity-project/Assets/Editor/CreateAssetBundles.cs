using UnityEngine;
using UnityEditor;
using System.IO;
using System.Diagnostics;
using System;
using System.Net;

public class CreateAssetBundles
{
    private static string mAssetBundlesOutputDir = "AssetBundles";

    private static string miOSOutputDir = "ios";
    private static string mAndroidOutputDir = "android";

    private static string mMacOutputFolder = "mac";
    private static string mWinOutputFolder = "win";
    private static string m32OutputFolder = "x86";
    private static string m64OutputFolder = "x64";
    private static string mUniversalOutputFolder = "universal";
    //private static string mStagingS3Bucket = "assetbundlesdemo";

    private static string mMetadataDir = Path.Combine(Application.persistentDataPath, "abmeta");

    [MenuItem("AssetBundles/Clear Output Dir")]
    static void ClearAssetBundleOutputDir()
    {
        System.IO.DirectoryInfo downloadedMessageInfo = new DirectoryInfo(mAssetBundlesOutputDir);

        foreach (FileInfo file in downloadedMessageInfo.GetFiles())
        {
            file.Delete();
        }
        foreach (DirectoryInfo dir in downloadedMessageInfo.GetDirectories())
        {
            dir.Delete(true);
        }

        Directory.Delete(mAssetBundlesOutputDir, true);

        UnityEngine.Debug.Log("Clearing dir: " + mAssetBundlesOutputDir);
    }

    [MenuItem("AssetBundles/Clear Cache")]
    static void ClearAssetBundleCache()
    {
        Caching.CleanCache();

        System.IO.DirectoryInfo downloadedMessageInfo = new DirectoryInfo(mMetadataDir);

        foreach (FileInfo file in downloadedMessageInfo.GetFiles())
        {
            file.Delete();
        }
        foreach (DirectoryInfo dir in downloadedMessageInfo.GetDirectories())
        {
            dir.Delete(true);
        }

        Directory.Delete(mMetadataDir, true);

        UnityEngine.Debug.Log("Clearing dir: " + mMetadataDir);
    }

    [MenuItem("AssetBundles/Build")]
    static void BuildAllAssetBundles()
    {
        if(!EditorUtility.DisplayDialog("Build AssetBundles",
            "This command will rebuild all asset bundles if needed.", "Ok", "Cancel"))
        {
            return;
        }

        if(!Directory.Exists(mAssetBundlesOutputDir)) Directory.CreateDirectory(mAssetBundlesOutputDir);

        string iOSOutputDirFull = Path.Combine(mAssetBundlesOutputDir, miOSOutputDir);
        string androidOutputDirFull = Path.Combine(mAssetBundlesOutputDir, mAndroidOutputDir);

        string mac32OutputDirFull = Path.Combine(Path.Combine(mAssetBundlesOutputDir, mMacOutputFolder), m32OutputFolder);
        string mac64OutputDirFull = Path.Combine(Path.Combine(mAssetBundlesOutputDir, mMacOutputFolder), m64OutputFolder);
        string universalOutputDirFull = Path.Combine(Path.Combine(mAssetBundlesOutputDir, mMacOutputFolder), mUniversalOutputFolder);

        string win32OutputDirFull = Path.Combine(Path.Combine(mAssetBundlesOutputDir, mWinOutputFolder), m32OutputFolder);
        string win64OutputDirFull = Path.Combine(Path.Combine(mAssetBundlesOutputDir, mWinOutputFolder), m64OutputFolder);

        if (!Directory.Exists(iOSOutputDirFull)) Directory.CreateDirectory(iOSOutputDirFull);
        if (!Directory.Exists(androidOutputDirFull)) Directory.CreateDirectory(androidOutputDirFull);

        if (!Directory.Exists(mac32OutputDirFull)) Directory.CreateDirectory(mac32OutputDirFull);
        if (!Directory.Exists(mac64OutputDirFull)) Directory.CreateDirectory(mac64OutputDirFull);
        if (!Directory.Exists(universalOutputDirFull)) Directory.CreateDirectory(universalOutputDirFull);

        if (!Directory.Exists(win32OutputDirFull)) Directory.CreateDirectory(win32OutputDirFull);
        if (!Directory.Exists(win64OutputDirFull)) Directory.CreateDirectory(win64OutputDirFull);

        BuildPipeline.BuildAssetBundles(iOSOutputDirFull, BuildAssetBundleOptions.None, BuildTarget.iOS);

        BuildPipeline.BuildAssetBundles(androidOutputDirFull, BuildAssetBundleOptions.None, BuildTarget.Android);

        BuildPipeline.BuildAssetBundles(mac32OutputDirFull, BuildAssetBundleOptions.None, BuildTarget.StandaloneOSXIntel);
        BuildPipeline.BuildAssetBundles(mac64OutputDirFull, BuildAssetBundleOptions.None, BuildTarget.StandaloneOSXIntel64);
        BuildPipeline.BuildAssetBundles(universalOutputDirFull, BuildAssetBundleOptions.None, BuildTarget.StandaloneOSXUniversal);

        BuildPipeline.BuildAssetBundles(win32OutputDirFull, BuildAssetBundleOptions.None, BuildTarget.StandaloneWindows);
        BuildPipeline.BuildAssetBundles(win64OutputDirFull, BuildAssetBundleOptions.None, BuildTarget.StandaloneWindows64);
    }

//	[MenuItem("AssetBundles/Upload to S3 (staging)")]
//	static void UploadAllAssetBundles()
//	{
//		ServicePointManager.ServerCertificateValidationCallback = (p1, p2, p3, p4) => true;
//
//		string pathToScript = "";
//#if UNITY_EDITOR && UNITY_EDITOR_WIN
//		pathToScript = "./../support-scripts/asset-bundles-sync.bat";
//#elif UNITY_EDITOR && UNITY_EDITOR_OSX
//		pathToScript = "./../support-scripts/asset-bundles-sync.sh";
//#endif
//
//
//		if(!File.Exists(pathToScript))
//		{
//			UnityEngine.Debug.LogError("Could not find script " + pathToScript);
//		}
//
//		float fakeProgress = 0;
//		EditorUtility.DisplayProgressBar("AWS Upload", "Aws Upload", fakeProgress);
//
//		Process process;
//
//		try
//		{
//			process = new Process();
//			process.EnableRaisingEvents = false;
//			process.StartInfo.FileName = pathToScript;
//			process.StartInfo.Arguments = mAssetBundlesOutputDir + " " + mStagingS3Bucket;
//			process.StartInfo.UseShellExecute = false;
//			process.StartInfo.RedirectStandardOutput = true;
//			process.StartInfo.RedirectStandardInput = true;
//			process.StartInfo.RedirectStandardError = true;
//
//			process.OutputDataReceived += new DataReceivedEventHandler(( object sender, DataReceivedEventArgs eventArgs ) => {
//				UnityEngine.Debug.Log( eventArgs.Data );
//			});
//
//			process.ErrorDataReceived += new DataReceivedEventHandler(( object sender, DataReceivedEventArgs eventArgs ) => {
//				UnityEngine.Debug.LogError( eventArgs.Data );
//			});
//
//			process.Start();
//			process.BeginOutputReadLine();
//		}
//		catch( Exception e )
//		{
//			UnityEngine.Debug.LogError( "Unable to launch script: " + e.Message );
//		}
//		
//		fakeProgress = 1.0f;
//		EditorUtility.DisplayProgressBar("AWS Upload", "Aws Upload", fakeProgress);
//		EditorUtility.ClearProgressBar();
//	}
}
