#!/bin/sh

echo "\n"

function print_error () {
  echo $'\e[31m'$1$'\e[39m'
}

function print_success () {
  echo $'\e[32m'$1$'\e[39m'
}

if [ -z "$1" ]; then
    print_error "No XCode project directory supplied"
    exit 1
fi

UNITY_XCODE_DIR=$1

if [ ! -d "$UNITY_XCODE_DIR" ]; then
  print_error "Unity XCode project directory not found."
  exit 1
fi

if [ ! -d "$UNITY_XCODE_DIR"/*.xcodeproj ]; then
  print_error "$UNITY_XCODE_DIR does not contain a valid XCode project."
  exit 1
fi

STUB_DIR="$UNITY_XCODE_DIR/../../../../stubs"

if [ ! -d "$STUB_DIR" ]; then
  print_error "No stubs directory found. $STUB_DIR"
  exit 1
fi

EXTRACT_TARGET_DIR="$UNITY_XCODE_DIR/../__extracted"

if [ -d "$EXTRACT_TARGET_DIR" ]; then
  rm -rf $EXTRACT_TARGET_DIR
  echo "Removed existing target directory:\n$EXTRACT_TARGET_DIR\n"
fi

mkdir $EXTRACT_TARGET_DIR
echo "Created empty directory:\n$EXTRACT_TARGET_DIR\n"
echo "Extracting...\n"

mkdir "$EXTRACT_TARGET_DIR/UnityComponent"

# Copy file from Unity xcode project to extract dir

cp -fr "$UNITY_XCODE_DIR/Classes" "$EXTRACT_TARGET_DIR/UnityComponent"
cp -fr "$UNITY_XCODE_DIR/Data" "$EXTRACT_TARGET_DIR/UnityComponent"

# Frameworks dir not needed, apparently QCARWrapper.bundle is OSX only
# cp -fr "$UNITY_XCODE_DIR/Frameworks" "$EXTRACT_TARGET_DIR/UnityComponent"

cp -fr "$UNITY_XCODE_DIR/Libraries" "$EXTRACT_TARGET_DIR/UnityComponent"

# This is not needed, but I am not sure why. Probably a cache used by Unity when compiling
# cp -fr "$UNITY_XCODE_DIR/Temp" "$EXTRACT_TARGET_DIR/UnityComponent"

cp -f "$UNITY_XCODE_DIR/MapFileParser" "$EXTRACT_TARGET_DIR/UnityComponent"
cp -f "$UNITY_XCODE_DIR/MapFileParser.sh" "$EXTRACT_TARGET_DIR/UnityComponent"

# Delete unused files

rm -f "$EXTRACT_TARGET_DIR/UnityComponent/Classes/main.mm"
rm -f "$EXTRACT_TARGET_DIR/UnityComponent/Classes/UI/SplashScreen.mm"
rm -f "$EXTRACT_TARGET_DIR/UnityComponent/Libraries/Plugins/iOS/VuforiaNativeRendererController.mm"

# Replace files from stub directory

cp -fr "$STUB_DIR/ios/Classes/UnityAppController.h" "$EXTRACT_TARGET_DIR/UnityComponent/Classes"
cp -fr "$STUB_DIR/ios/Classes/UnityAppController.mm" "$EXTRACT_TARGET_DIR/UnityComponent/Classes"
cp -fr "$STUB_DIR/ios/Classes/UI/UnityAppController+ViewHandling.mm" "$EXTRACT_TARGET_DIR/UnityComponent/Classes/UI"
cp -fr "$STUB_DIR/ios/Classes/UI/UnityViewControllerBase.h" "$EXTRACT_TARGET_DIR/UnityComponent/Classes/UI"
cp -fr "$STUB_DIR/ios/Classes/UI/UnityViewControllerBase.mm" "$EXTRACT_TARGET_DIR/UnityComponent/Classes/UI"

### List of additional files/dirs to copy to $(EXTRACT_TARGET_DIR)
### (NOTE: if this are edited in the master xcode project, update them in the stub folder first!!)

cp -fr "$STUB_DIR/ios/Interop" "$EXTRACT_TARGET_DIR/UnityComponent/Interop"

print_success "Extraction completed.\n"
