#import "UIKit/UIKit.h"
#include <substrate.h>

#pragma once

@interface APIClient : UIView
+ (void)setEmail:(NSString*)email_;
+ (void)setDebid:(NSInteger)debid_;
+ (void)setDebVersion:(NSString*)version_;
+ (void)setDylibName:(NSString*)dylibname_;//xem trong MAKEFILE xem đặt tên như nào
+ (NSString *)getUserName;
+ (NSString *)getDeviceMessage;
+ (NSString *)getUUID;
+ (NSString *)getKey;
+ (NSString *)getDeviceModel;
+ (const char *)getKeyType;
+ (NSString*)getDay;
+ (int) getidKey;
+ (instancetype)View;
+ (void)reloadInfo;
+ (void)paid:(void (^)(void))execute; //
+ (void)free:(void (^)(void))execute; //
+ (void)vipPaid:(void (^)(void))execute; //
@end
