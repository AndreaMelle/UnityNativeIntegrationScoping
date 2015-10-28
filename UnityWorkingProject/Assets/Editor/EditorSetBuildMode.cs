using UnityEngine;
using UnityEditor;
using System.IO;
using System.Diagnostics;
using System.Collections.Generic;

public class EditorSetBuildMode
{
    private static List<BuildTargetGroup> mTargetGroups = new List<BuildTargetGroup>()
    {
        BuildTargetGroup.Standalone,
        BuildTargetGroup.iOS,
        BuildTargetGroup.Android,
        BuildTargetGroup.GLESEmu
    };

    private static string mStandaloneDefine = "IS_STANDALONE";
    private static string mNativeIntegrationDefine = "IS_NATIVEINTEGRATION";

    [MenuItem("Set Build Mode/Standalone")]
    static void SetBuildModeStandalone()
    {
        swapDefines(mNativeIntegrationDefine, mStandaloneDefine);
    }

    [MenuItem("Set Build Mode/Native Integration")]
    static void SetBuildModeNativeIntegration()
    {
        swapDefines(mStandaloneDefine, mNativeIntegrationDefine);
    }

    private static void swapDefines(string previous, string current)
    {
        foreach (BuildTargetGroup tg in mTargetGroups)
        {
            string defines = PlayerSettings.GetScriptingDefineSymbolsForGroup(tg);
            string newDefines = defines;

            if (defines.Contains(previous))
            {
                newDefines = defines.Replace(previous, "");
            }

            if (!newDefines.Contains(current))
            {
                newDefines = newDefines + ";" + current;
            }

            PlayerSettings.SetScriptingDefineSymbolsForGroup(tg, newDefines);
        }
    }

}
