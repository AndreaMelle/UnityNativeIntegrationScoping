
// The standard main in a native iOS App

//#import <UIKit/UIKit.h>
//#import "AppDelegate.h"
//
//int main(int argc, char * argv[]) {
//    @autoreleasepool {
//        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
//    }
//}

// The standard main + Unity hooks in a native + Unity iOS App

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

#include "RegisterMonoModules.h"
#include "RegisterFeatures.h"
#include <csignal>

static const int constsection = 0;

void UnityInitTrampoline();

int main(int argc, char * argv[])
{
    @autoreleasepool
    {
        UnityInitTrampoline();
        UnityParseCommandLine(argc, argv);
        RegisterMonoModules();
        NSLog(@"-> registered mono modules %p\n", &constsection);
        RegisterFeatures();
        std::signal(SIGPIPE, SIG_IGN);
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
    
    return 0;
}



