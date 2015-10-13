using UnityEngine;
using System.Collections;

namespace abl
{
    internal class ABReference
    {
        public string bundlename;
        public AssetBundle bundle = null;
        public int version;
        public string fullUrl;

        public ABReference(string nameIn, string strUrlIn, int intVersionIn)
        {
            bundlename = nameIn;
            fullUrl = strUrlIn;
            version = intVersionIn;
        }
    };
}
