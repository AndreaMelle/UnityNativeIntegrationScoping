#import "UnityController.h"
#import "VuforiaRenderDelegate.h"

// Unity native rendering callback plugin mechanism is only supported
// from version 4.5 onwards
#if UNITY_VERSION>434

// Exported methods for native rendering callback
extern "C" void VuforiaRenderEvent(int marker);

#endif

@interface UnityController()
{
    
}

- (void)shouldAttachRenderDelegate;

@end

@implementation UnityController


- (void)shouldAttachRenderDelegate
{
    self.renderDelegate = [[VuforiaRenderDelegate alloc] init];
    
    // Unity native rendering callback plugin mechanism is only supported
    // from version 4.5 onwards
#if UNITY_VERSION>434
    UnityRegisterRenderingPlugin(NULL, &VuforiaRenderEvent);
#endif
}
@end
