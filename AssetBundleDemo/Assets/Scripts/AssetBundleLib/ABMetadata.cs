using UnityEngine;
using System.Collections;
using System.IO;

namespace abl
{
    internal class ABMetadata
    {
        private static string mMetadataDir = Path.Combine(Application.persistentDataPath, "abmeta");

        public string bundlename;
        public string etag;
        public uint crc;
        public int version;

        public ABMetadata(string etagIn, uint crcIn, string bundlenameIn, int versionIn)
        {
            etag = etagIn;
            crc = crcIn;
            bundlename = bundlenameIn;
            version = versionIn;
        }

        /* File format
            bundlename
            etag
            crc
            version
        */

        public static bool TryReadMetadataForCachedAssetBundle(string bundlename, out ABMetadata abMeta)
        {
            abMeta = null;

            if (!Directory.Exists(mMetadataDir)) Directory.CreateDirectory(mMetadataDir);

            if (!File.Exists(Path.Combine(mMetadataDir, bundlename))) return false;

            using (System.IO.StreamReader file = new System.IO.StreamReader(Path.Combine(mMetadataDir, bundlename)))
            {
                return TryReadMetadataForCachedAssetBundle(file, out abMeta);
            }
        }

        public static bool TryReadMetadataForCachedAssetBundle(System.IO.StreamReader reader, out ABMetadata abMeta)
        {
            abMeta = null;

            if (reader == null) return false;

            string bundlenameIn = reader.ReadLine();
            if (bundlenameIn == null) return false;

            string etagIn = reader.ReadLine();
            if (etagIn == null) return false;

            string crcStringIn = reader.ReadLine();
            if (crcStringIn == null) return false;
            uint crcIn = 0;
            if (!uint.TryParse(crcStringIn, out crcIn)) return false;

            string versionStringIn = reader.ReadLine();
            if (versionStringIn == null) return false;
            int versionInt = 0;
            if (!int.TryParse(versionStringIn, out versionInt)) return false;

            abMeta = new ABMetadata(etagIn, crcIn, bundlenameIn, versionInt);

            return true;
        }

        public static void WriteMetadataForCachedAssetBundle(ABMetadata abMeta)
        {
            if (!Directory.Exists(mMetadataDir)) Directory.CreateDirectory(mMetadataDir);

            using (System.IO.StreamWriter file = new System.IO.StreamWriter(Path.Combine(mMetadataDir, abMeta.bundlename)))
            {
                file.WriteLine(abMeta.bundlename);
                file.WriteLine(abMeta.etag);
                file.WriteLine(abMeta.crc.ToString());
                file.WriteLine(abMeta.version.ToString());
            }
        }

    }
}

