# Logos-API-Authentication
[![APIKey](https://img.shields.io/badge/APIAuth-3.0-blue)](https://github.com/baontq23/Logos-API-Authentication/)
[![Vietnamese Guide](https://img.shields.io/badge/VietnameseGuide-1.0-green)](https://github.com/baontq23/Logos-API-Authentication/blob/main/READMEVN.md)
> Simple lib authentication with objective c. For internal use
>> Theos, dragon maker, etc..
-----
## Example project with FAHMenu
<p align="center">
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/1.png"/>
	<br>
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/2.png"/>
</p>

# Example Useage objective-c
```obj-c
#import "Auth/APIKey.h"
void function(){
   //paid 
   [APIClient paid:^{
       //load menu
       loadview(); //etc
       menuSetup();
   }];
}
void vipFuntion() {
  [APIClient vipPaid:^ {
      //memory patcher 
      //admin funtion
  }];
}

```
# How to use
## Step 1. Register or login APIServer
[Dashboard](https://baontq.com/admin/index.php)
<p align="center">
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/4.png"/>
	<br>
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/5.png"/>
</p>

## Step 2. Config APIConect.xm
```obj-c
#import "Auth/APIKey.h"

static void didFinishLaunching(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef info) {
[APIClient setEmail:@"email@examble.com"];//your email on server
[APIClient setDebid:0];//your package id
[APIClient setDebVersion:@"lqmfa1.0"];//package version
[APIClient setDylibName:@"keytest"];// dylib name on MAKEFILE

}

%ctor {
  CFNotificationCenterAddObserver(CFNotificationCenterGetLocalCenter(), NULL, &didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately);
}

```
## Step 3. Setup functions (Example with FAHMenu)
```obj-c
#import "baseicon.h"
#import "FAHMenu/Macros.h"
#import "Auth/APIKey.h"

void setup(){
	[menu addToggleOffsetItem:@"Test" offsets:{ENCRYPTOFFSET("0x3962580")} bytes:{ENCRYPTHEX("0x340080D2")}];
	[APIClient vipPaid:^{
	[menu addToggleOffsetItem:@"Test" offsets:{ENCRYPTOFFSET("0x3962580")} bytes:{ENCRYPTHEX("0x340080D2")}]; //vip funtion
	}];
}


static void didFinishLaunching(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef info) {
[UIPatch setFrameworkName:"UnityFramework"];

timer(2){ 	
	[menu setTitle:@"@@APPNAME@@ Mod Menu"];
	[menu setIconMenu:MenuIcon];
	[menu setMainColor:[UIColor redColor]];
	[menu setCredits:@"@@APPNAME@@ Mod Menu by @@USER@@!"];
	[APIClient paid:^{ //normal paid
	[menu initMenu];
	setup();
	}];
	
 });
}

%ctor {
  CFNotificationCenterAddObserver(CFNotificationCenterGetLocalCenter(), NULL, &didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately);
}
```
## Result 
<p align="center">
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/3.jpg"/>
	<br>
</p>

## Video Guide
[Youtube](https://youtu.be/BNMgdwZNJcU)

## Requirement
- Register account on [Dashboard](https://baontq.com/admin/index.php)
- layout folder (like template)
## Credits
* [dogo](https://github.com/dogo)
  * For [SCLAlertView](https://github.com/dogo/SCLAlertView)
* [jdg](https://github.com/jdg)
  * For [MBProgressHUD](https://github.com/jdg/MBProgressHUD)
* [fahlnbg](https://github.com/fahlnbg)
  * For [FAHMenu-iOS-Mod-Menu](https://github.com/fahlnbg/FAHMenu-iOS-Mod-Menu)
