//
//  APIClient.h
//  APIClient
//
//  Created by Bao Nguyen on 01/09/2023.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface APIClient : NSObject
- (void) paid:(void (^)(void))execute;
- (void) setToken:(NSString*)token;
- (void) setLanguage:(NSString*)language;
- (id)getPackageDataWithKey:(NSString*)key;
- (NSString*) getKey;
- (NSString*) getExpiryDate;
- (NSString*) getUDID;
- (NSString*) getDeviceModel;
- (NSString*) getLoginIP;
- (NSString*) getPackageName;
+ (instancetype) sharedAPIClient;
@end

NS_ASSUME_NONNULL_END

