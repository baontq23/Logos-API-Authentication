# Logos API Authentication

Logos API Authentication is a validator for tweaks.

[![APIKey](https://img.shields.io/badge/APIAuth-6.0.1-blue)](https://github.com/baontq23/Logos-API-Authentication/)
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

Clone or Download this Repo. Then simply drag the folder `API` to your project.

### Server

Register account and create package on [APIServer](https://authtool.app)

## Setup API

Start by adding the following to your project

```Objective-C
#import "API/APIClient.h"
```

### Makefile config (theos)

```make
#Edit TWEAK_NAME and remove @@
@@TWEAK_NAME@@_LDFLAGS += API/libAPIClient.a

```

### API Integration

```Objective-C
#import "APIClient.h"

void function(){
    apiclient_set_token("TOKEN");
   //paid
    apiclient_paid(^{
        //load menu
        //init();

    });
}

```

## Extra Customizations

See more in APIClient.h

## Guide

[Youtube](https://youtu.be/N-WAY4RTKp4)

### Author

Created by [Bao Nguyen](https://github.com/baontq23).
