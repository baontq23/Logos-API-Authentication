#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <Metal/Metal.h>

NS_ASSUME_NONNULL_BEGIN

@interface APIClient : NSObject
- (void) paid:(void (^)(void))execute;
- (void) setToken:(NSString*)token;
- (void) setGetRealUDID:(bool)isRealUDID;
- (NSString*) getKey;
- (NSString*) getExpiryDate;
- (NSString*) getUDID;
- (NSString*) getDeviceModel;

@end

NS_ASSUME_NONNULL_END

