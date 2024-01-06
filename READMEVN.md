# Logos API Authentication

Logos API Authentication là một trình xác thực cho tinh chỉnh iOS.

[![APIKey](https://img.shields.io/badge/APIAuth-5.3.0-blue)](https://github.com/baontq23/Logos-API-Authentication/)
[![Vietnamese Guide](https://img.shields.io/badge/VietnameseGuide-2.0-green)](https://github.com/baontq23/Logos-API-Authentication/blob/main/READMEVN.md)

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

## Cài đặt

### Client

Tải xuống các tập tin trong repo. Kéo thư mục `API-EN` hoặc `API-VI` vào trong project của bạn và đổi tên nó thành `API`.

### Server

Đăng ký tài khoản và tạo gói tại [APIServer](https://v3.baontq.xyz)

## Thiết lập API

Bắt đầu bằng cách thêm phần này vào project của bạn

```Objective-C
#import "API/APIKey.h"
```

### Cấu hình Makefile (theos)

```make
#Chỉnh sửa TWEAK_NAME và xoá bỏ @@
@@TWEAK_NAME@@_LDFLAGS += API/libAPIClient.a

```

### Tích hợp API

```Objective-C
#import "APIClient.h"

void function(){
    APIClient *API = [[APIClient alloc] init];
    [API setToken:@"TOKEN"]; //Điền token lấy từ dashboard
    [API setLanguage:@"vi"]; //vi hoặc en
   //bọc hàm cần được bảo vệ
    [API paid:^{
        //load menu
        loadview(); //etc
        menuSetup();

        //Các thông tin có thể tích hợp nên menu của bạn nếu cần
        NSLog(@"APIData - Key: %@", [API getKey]); //Trả về key hiện tại
        NSLog(@"APIData - UDID: %@", [API getUDID]); //Trả về UDID của máy
        NSLog(@"APIData - Expiry date: %@", [API getExpiryDate]); //Trả về ngày hết hạn
        NSLog(@"APIData - Device model: %@", [API getDeviceModel]); //Trả về kiểu thiết bị

   }];
}

```

## Các tuỳ chỉnh khác

Xem thêm tại APIKey.h

## Video hướng dẫn

[Youtube](https://youtu.be/N-WAY4RTKp4)

### Author

Created by [Bao Nguyen](https://baontq.dev).
