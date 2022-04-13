
#import "UIKit/UIKit.h"
#import <Foundation/Foundation.h>
#import "KittyMemory/MemoryPatch.hpp"
#import "SCLAlertView/SCLAlertView.h"
#import "Obfuscate.h"
#import "JRMemory.framework/Headers/MemScan.h"



@interface FAHMenu : UIView <UITextFieldDelegate>
- (id)init;
- (void)initMenu;

- (void)setTitle:(NSString*)title_;
- (void)setIconMenu:(NSString*)iconMenu_;
- (void)setCredits:(NSString*)credits_;
- (void)setMainColor:(UIColor*)mainColor_;

- (void)showPopup:(NSString *)title_ description:(NSString *)description_;
- (void)showPopupQuit:(NSString *)description_;

- (void)addToggleMemoryItem:(NSString *)title_ range:(std::initializer_list<uint64_t>)range_ search:(NSArray *)search_ ;
- (void)addToggleOffsetItem:(NSString *)title_ offsets:(std::initializer_list<uint64_t>)offsets_ bytes:(std::initializer_list<std::string>)bytes_ ;
- (void)addTextfieldItem:(NSString *)title_;   
- (void)addSliderItem:(NSString *)title_ minValue:(float)minValue_ maxValue:(float)maxValue_;
- (void)addIndexItem:(NSString *)title_ item:(NSArray *)itemArray_;

- (BOOL)isItemOn:(NSString *)itemName;
- (float)getSliderValue:(NSString *)itemName;
- (NSString *)getTextfieldValue:(NSString *)itemName;
- (float)getIndexValue:(NSString *)itemName;
- (void)getPatch:(NSString*)pass;
@end



@interface UIPatch : NSObject
+(void)setFrameworkName:(const char *)name_ ;
+(const char *)getFrameworkName ;
@end