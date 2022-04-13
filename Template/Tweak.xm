#import "baseicon.h"
#import "FAHMenu/Macros.h"
#import "FAHMenu/APIKey.h"



void setup(){


	[menu addToggleOffsetItem:@"Tessssst" offsets:{ENCRYPTOFFSET("0x3962580")} bytes:{ENCRYPTHEX("0x340080D2")}];



}
static void didFinishLaunching(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef info) {
[APIClient setEmail:@"example@gmail.com"];
[APIClient setDebid:0];
[APIClient setDebVersion:@"lqm2.0"];
[APIClient setDylibName:@"keytest"];
[UIPatch setFrameworkName:"UnityFramework"];

timer(2){ 	
	

	[menu setTitle:@"Load menu without install lib"];
	[menu setIconMenu:MenuIcon];
	[menu setMainColor:[UIColor redColor]];
	[menu setCredits:@"APIClient Mod Menu by Bao Nguyen!"];
[APIClient paid:^{
	[menu initMenu];
setup();

 }];
 });
}


%ctor {
  CFNotificationCenterAddObserver(CFNotificationCenterGetLocalCenter(), NULL, &didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately);
}
