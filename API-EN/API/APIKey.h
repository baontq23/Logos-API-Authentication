#import "UIKit/UIKit.h"

@interface APIClient : UIView
/**
 Lấy mã code của thiết bị, ví dụ iPhone11,2 = iPhone XS

 @return Model Code
 */
+ (NSString *)getDeviceCode;

/**
 Lấy ra username được người dùng cài đặt trên web.
 Bạn có thể đặt tên cho key để dễ nhận biết key này thuộc về ai bằng cách này

 @return Username
 */
+ (NSString *)getUserName;

/**
 Lấy lời nhắn bạn đặt trên server cho user này

 @return Device Message
 */
+ (NSString *)getDeviceMessage;

/**
 Lấy ra tên thật của thiết bị.
 Ví dụ: iPhone XS

 @return Device Model
 */
+ (NSString *)getDeviceModelName;

/**
 Lấy ra tên máy đặt trong cài đặt chung của thiết bị

 @return Device Name
 */
+ (NSString *)getDeviceName;

/**
 Lấy ra UDID của thiết bị

 @return UDID
 */
+ (NSString *)getUDID;

/**
 Lấy ra key đang sử dụng

 @return Key
 */
+ (NSString *)getKey;

/**
 Lấy ra loại key bằng chữ
 Trả về kiểu char nên các bạn có thể dễ dàng sử dụng với ImGui mà không cần ép kiểu
 Ví dụ: Admin Key, Normal Key

 @return Key type
 */

/**
 Lấy địa chỉ IP V4 của thiết bị

 @return IP Address
 */
+ (NSString *)getIPAddress;

+ (const char *)getKeyType;

/**
 Lấy ra thời gian còn lại của key

 @return x tháng, x tuần , x ngày, x giờ, x phút, x giây
 */
+ (NSString*)getDay;

/**
 Lấy ra level của key, hàm này để bạn có thể tự chế tên của loại key
 Kết quả trả về tương ứng loại key sau đây:
 0 = Admin key (Key to nhất nếu bạn có chức năng vip)
 1 = Key refund (Thu hồi key)
 4 = Key thường (Sẽ không thể sử dụng được các chức năng bạn đặt là VIP)

 @return Key code
 */
+ (NSInteger) getLevel;

/**
 Kiểm tra thiết bị có Jailbreak hay không. Kết quả có thể sai nếu bạn sử dụng các tinh chỉnh ẩn Jailbreak
 Trả về true nếu đã jailbreak và ngược lại
 @return Jailbreak Status
 */
+ (bool)jbStatus;

/**
 Truyền vào email đăng ký trên baontq.xyz
 
 @param email
 */
+ (void)setEmail:(NSString*)email_;

/**
 Truyền vào mã id của gói, xem trong danh sách package trên baontq.xyz
 Điền sai thông tin có thể khiến gói bạn bị văng
 
 @param Package ID
 */
+ (void)setDebid:(NSInteger)debid_;

/**
 Truyền vào phiên bản của gói nhằm quản lý và thông báo khi có phiên bản mới
 Điền sai thông tin có thể khiến gói bạn báo cập nhật không mong muốn
 
 @param Package Version
 */
+ (void)setDebVersion:(NSString*)version_;

/**
 Truyền vào tên file dylib mà bạn đặt trong MAKEFILE
 Xem phần TWEAK_NAME và truyền vào tương ứng
 Nhập không chính xác sẽ khiến gói không qua được bước xác thực tài nguyên
 
 @param Package dylib name
 */
+ (void)setDylibName:(NSString*)dylibname_;

/**
 Bật / tắt tính tăng đằng xuất key của gói
 Mặc định là FALSE (không cho phép)
 
 @param TRUE or FALSE
 */
+ (void)setLogoutAllowed:(BOOL) logoutAllow_;

/**
 Thay đổi thông báo khi vào gói theo ý thích của bạn
 
 @param text
 */
+(void)setAlertAfterLogin:(NSString*)alertText_;

/**
 Không cần quan tâm đến cái này này
 */
+ (instancetype)View;

/**
 Hàm làm mới lại thông tin, sau khi làm mới lại có thông báo góc trên cùng màn mình
 */
+ (void)reloadInfo;

/**
 Dùng để đăng xuất key ra khỏi thiết bị hiện tại
 */
+ (void)logout;

/**
 Truyền vào khối lệnh muốn bảo vệ và cần sử dụng key để sử dụng
 Tham số truyền vào là một khối lệnh cần bảo vệ
 Thường là các hàm viewDidLoad, loadView, các hàm khởi tạo ra tinh chỉnh

 @param Callback
 */
+ (void)paid:(void (^)(void))execute;

/**
 Tại thời điểm này hàm này hơi vô dụng nhưng cho vào cho đẹp
 Khối lệnh được bao bọc bởi hàm này sẽ được thực hiện kể cả chưa nhập key
 
 @param Callback
 */
+ (void)free:(void (^)(void))execute;

/**
 Truyền vào một khối lệnh yêu cầu key vip mới có thể sử dụng, khi sử dụng sẽ kiểm tra key hiện tại có thuộc key vip không

 @param Callback
 */
+ (void)vipPaid:(void (^)(void))execute;

@end
