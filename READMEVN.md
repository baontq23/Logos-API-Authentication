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

# Cách sử dụng
## Bước 1. Đăng ký tài khoản trên hệ thống APIServer
[Vào bảng điều khiển](https://baontq.com/admin/index.php)
- Tiến hành tạo một gói mới trên hệ thống để nhận thông tin
- Hãy điền phiên bản và các trường yêu cầu. Một số dữ liệu có thể nhập ngẫu nhiên do chưa có. (ví dụ như mã sha1, link download, ...) 
- Sau khi tạo xong, ta nhập các thông tin vào APIConect.xm
<p align="center">
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/4.png"/>
	<br>
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/5.png"/>
</p>

## Bước 2. Cấu hình APIConect.xm
```obj-c
#import "Auth/APIKey.h"

static void didFinishLaunching(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef info) {
[APIClient setEmail:@"email@examble.com"];//email của bạn đăng ký trên hệ thống
[APIClient setDebid:0];//mã id của gói
[APIClient setDebVersion:@"lqmfa1.0"];//phiên bản của gói
[APIClient setDylibName:@"keytest"];// tên của dylib, xem trong MAKEFILE phần TWEAKNAME.

}

%ctor {
  CFNotificationCenterAddObserver(CFNotificationCenterGetLocalCenter(), NULL, &didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately);
}

```
## Bước 3. Sử dụng với các hàm yêu cầu phải mua mới có thể sử dụng (Ví dụ với FAHMenu)
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

## Kết quả 
<p align="center">
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/3.jpg"/>
	<br>
</p>

## Yêu cầu
- Đăng ký tài khoản [tại đây](https://baontq.com/admin/index.php)
- Dự án có phí nhưng trong thời gian thử nghiệm sẽ miễn phí trong thời gian và giới hạn nhất định
- Trong project phải có thư mục layout như template.
## Hướng dẫn bằng video
[Youtube](https://youtu.be/BNMgdwZNJcU)

## Credits
* [dogo](https://github.com/dogo)
  * For [SCLAlertView](https://github.com/dogo/SCLAlertView)
* [jdg](https://github.com/jdg)
  * For [MBProgressHUD](https://github.com/jdg/MBProgressHUD)
* [fahlnbg](https://github.com/fahlnbg)
  * For [FAHMenu-iOS-Mod-Menu](https://github.com/fahlnbg/FAHMenu-iOS-Mod-Menu)
