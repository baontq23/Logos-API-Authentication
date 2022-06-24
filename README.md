Logos API Authentication
============

Logos API Authentication is a validator for tweaks.

[![APIKey](https://img.shields.io/badge/APIAuth-4.0-blue)](https://github.com/baontq23/Logos-API-Authentication/)
[![Vietnamese Guide](https://img.shields.io/badge/VietnameseGuide-1.0-green)](https://github.com/baontq23/Logos-API-Authentication/blob/main/READMEVN.md)

## Demo
Authentication field - Light             |  Authentication field - Dark  
:-------------------------:|:-------------------------:
![](https://raw.githubusercontent.com/baontq23/Logos-API-Authentication/main/img/enter-key-popup-light.PNG)  |  ![](https://raw.githubusercontent.com/baontq23/Logos-API-Authentication/main/img/enter-key-popup-dark.PNG)

Update Popup - Light             |  Update Popup - Dark  
:-------------------------:|:-------------------------:
![](https://raw.githubusercontent.com/baontq23/Logos-API-Authentication/main/img/update-noti-light.PNG)  |  ![](https://raw.githubusercontent.com/baontq23/Logos-API-Authentication/main/img/update-noti-dark.PNG)

Starter
:-------------------------:
![](https://raw.githubusercontent.com/baontq23/Logos-API-Authentication/main/img/starter.PNG)

## Installation

### Client

Clone or Download this Repo. Then simply drag the folder ```API``` to your project.

### Server

[Dashboard](https://baontq.com/admin/index.php)
<p align="center">
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/4.png"/>
	<br>
	<img src="https://github.com/baontq23/Logos-API-Authentication/blob/main/img/5.png"/>
</p>

## Adding API

Start by adding the following to your project

```Objective-C
#import "FCAlertView.h"
```

### API Integration

```Objective-C
#import "API/APIKey.h"
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

#### API Config

```Objective-C
//APIConfig.xm
#import "APIKey.h"

static void didFinishLaunching(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef info) {
[APIClient setEmail:@"email@domain.com"];
[APIClient setDebid:0];
[APIClient setDebVersion:@"debversion"];
[APIClient setDylibName:@"dylibfilename"];

//You can add some functions, see more in APIKey.h
[APIClient setLogoutAllowed:TRUE];

}

%ctor {
  CFNotificationCenterAddObserver(CFNotificationCenterGetLocalCenter(), NULL, &didFinishLaunching, (CFStringRef)UIApplicationDidFinishLaunchingNotification, NULL, CFNotificationSuspensionBehaviorDeliverImmediately);
}

```            

### Allow users to log out key

Add to APIConfig.xm

```Objective-C
[APIClient setLogoutAllowed:TRUE];
```

### Message on successful login

```Objective-C
[APIClient setAlertAfterLogin:@"//message"];
```

## Extra Customizations 

See more in APIKey.h

## Video Guide
[Youtube](https://youtu.be/BNMgdwZNJcU)

### Author

Created by [Bao Nguyen](https://baontq.dev).

Credit for the Beautiful AlertView [FCAlertView](https://github.com/nimati/FCAlertView).

Credit for the Beautiful AlertView [SCLAlertView](https://github.com/dogo/SCLAlertView).
