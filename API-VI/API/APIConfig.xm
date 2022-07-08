#import "APIKey.h"

static void didFinishLaunching(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef info) {
[APIClient setEmail:@"admin@gmail.com"];
[APIClient setDebid:0];//package id
[APIClient setDebVersion:@"//Package Version"];
[APIClient setDylibName:@"Dylib file name"];

//Custom
[APIClient setLogoutAllowed:TRUE];

}

%ctor {
  CFNotificationCenterAddObserver(CFNotificationCenterGetLocalCenter(), NULL, &didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately);
}
