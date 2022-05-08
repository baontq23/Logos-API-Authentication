#import "FAHMenu/APIKey.h"

static void didFinishLaunching(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef info) {
[APIClient setEmail:@"email@domain.com"];
[APIClient setDebid:0];
[APIClient setDebVersion:@"lqmfa1.0"];
[APIClient setDylibName:@"keytest"];//Xem trong MAKEFILE Tweakname

}

%ctor {
  CFNotificationCenterAddObserver(CFNotificationCenterGetLocalCenter(), NULL, &didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately);
}
