#import "APIKey.h"

static void didFinishLaunching(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef info) {
[APIClient setEmail:@"dhckgaj13@gmail.com"];
[APIClient setDebid:246];//package id
[APIClient setDebVersion:@"lq1"];
[APIClient setDylibName:@"libAPIKey"];

//Custom
[APIClient setLogoutAllowed:TRUE];

}

%ctor {
  CFNotificationCenterAddObserver(CFNotificationCenterGetLocalCenter(), NULL, &didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately);
}
