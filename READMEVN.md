# Logos-API-Authentication
[![APIKey](https://img.shields.io/badge/APIAuth-1.0-blue)](https://github.com/baontq23/Logos-API-Authentication/)
[![Vietnamese Guide](https://img.shields.io/badge/VietnameseGuide-1.0-green)](https://github.com/baontq23/Logos-API-Authentication/)
> Lib đơn giản thêm trình xác thực cho tweak của bạn
>> Có thể sử dụng trong các project Theos, dragon maker, etc..
-----
## Hình ảnh với FAHMenu
<p align="center">
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/1.png"/>
	<br>
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/2.png"/>
</p>

## Cách sử dụng trong objective-c
```obj-c
#import "Auth/APIKey.h"
//Phải khởi tạo đầu tiên để có dữ liệu gửi lên server
[APIClient setEmail:@"example@domain.com"]; //email register on website
[APIClient setDebid:0]; //id deb !important
[APIClient setDebVersion:@"lqmvn1.3"];// deb version (NSString)

void function(){
   //chức năng trả phí
   [APIClient paid:^{
       loadmenu(); //khoá hàm khởi tạo menu để yêu cầu xác thực 
       loadview(); //etc
       menuSetup();
   }];
}
void vipFuntion() {
  [APIClient vipPaid:^ { //khoá những chức năng yêu cầu bản vip hoặc admin
      //memory patcher 
      //admin funtion
  }];
}

```
## Ví dụ cách dùng với FAHMenu
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
[APIClient setEmail:@"example@domain.com"]; //email web server
[APIClient setDebid:0]; //id deb phải trùng trên web để phân biệt admin
[APIClient setDebVersion:@"lqmvn1.3"];// phiên bản của deb, nếu không trùng với server sẽ báo cho user cập nhật
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

## Yêu cầu
- Cài đặt libApiKey.deb (file deb trên repo hoặc ở Releases)
- Liên hệ với tôi để được kết nối với Server
- Dự án có phí nhưng trong thời gian thử nghiệm sẽ miễn phí trong thời gian và giới hạn nhất định

## Hướng dẫn bằng video
[Youtube](https://youtu.be/BNMgdwZNJcU)

## Credits
* [dogo](https://github.com/dogo)
  * For [SCLAlertView](https://github.com/dogo/SCLAlertView)
* [jdg](https://github.com/jdg)
  * For [MBProgressHUD](https://github.com/jdg/MBProgressHUD)
* [fahlnbg](https://github.com/fahlnbg)
  * For [FAHMenu-iOS-Mod-Menu](https://github.com/fahlnbg/FAHMenu-iOS-Mod-Menu)
