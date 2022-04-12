# Logos-API-Authentication
[![APIKey](https://img.shields.io/badge/APIAuth-1.0-blue)](https://github.com/baontq23/Logos-API-Authentication/)

-----
## Example project with FAHMenu

## Example Useage objective-c
```obj-c
#import "Auth/APIKey.h"
//initialize first
[APIClient setEmail:@"example@domain.com"]; //email register on website
[APIClient setDebid:0]; //id deb !important
[APIClient setDebVersion:@"lqmvn1.3"];// deb version (NSString)

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

## Requirement
- Install libApiKey.deb
