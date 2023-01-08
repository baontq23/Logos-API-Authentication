# Logos API Authentication

Logos API Authentication is a validator for tweaks.

[![APIKey](https://img.shields.io/badge/APIAuth-5.0-blue)](https://github.com/baontq23/Logos-API-Authentication/)
[![Vietnamese Guide](https://img.shields.io/badge/VietnameseGuide-1.0-green)](https://github.com/baontq23/Logos-API-Authentication/blob/main/READMEVN.md)

## Preview

|                                            Login                                            |                                            Login success                                            |
| :-----------------------------------------------------------------------------------------: | :-------------------------------------------------------------------------------------------------: |
| ![](https://raw.githubusercontent.com/baontq23/Logos-API-Authentication/main/img/enter.png) | ![](https://raw.githubusercontent.com/baontq23/Logos-API-Authentication/main/img/login-success.png) |

|                                            Update                                            |                                            Expired                                            |
| :------------------------------------------------------------------------------------------: | :-------------------------------------------------------------------------------------------: |
| ![](https://raw.githubusercontent.com/baontq23/Logos-API-Authentication/main/img/update.png) | ![](https://raw.githubusercontent.com/baontq23/Logos-API-Authentication/main/img/expired.png) |

Dashboard
:-------------------------:
![](https://raw.githubusercontent.com/baontq23/Logos-API-Authentication/main/img/dashboard.png)

## Installation

### Client

Clone or Download this Repo. Then simply drag the folder `API-EN` or `API-VI` to your project and rename folder to `API`.

### Server

Register account and create package on [APIServer](https://v3.baontq.xyz)

## Setup API

Start by adding the following to your project

```Objective-C
#import "API/APIKey.h"
```

### Makefile config (theos)

```make
#Edit TWEAK_NAME and remove @@
@@TWEAK_NAME@@_LDFLAGS += API/libAPIClient.a

```

### API Integration

```Objective-C
#import "API/APIKey.h"
[NSObject setGetRealUDID:YES]; //Get real UDID if you want
[NSObject setToken:@"TOKEN"]; //Enter token from dashboard

void function(){
   //paid
   [NSObject paid:^{
        //load menu
        loadview(); //etc
        menuSetup();

	//Optional
    	NSLog(@"APIData - Key: %@", [NSObject getKey]);
	NSLog(@"APIData - UDID: %@", [NSObject getUDID]);
	NSLog(@"APIData - Expiry date: %@", [NSObject getExpiryDate]);
 	NSLog(@"APIData - Device model: %@", [NSObject getDeviceModel]);

   }];
}

```

## Extra Customizations

See more in APIKey.h

## Video Guide

[Youtube](https://youtu.be/N-WAY4RTKp4)

### Author

Created by [Bao Nguyen](https://baontq.dev).
