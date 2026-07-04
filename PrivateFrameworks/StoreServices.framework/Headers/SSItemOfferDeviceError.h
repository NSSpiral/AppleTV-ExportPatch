/* Runtime dump - SSItemOfferDeviceError
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemOfferDeviceError : NSObject
{
    NSString * _localizedMessage;
    NSString * _localizedTitle;
    NSString * _localizedURLTitle;
    NSURL * _url;
}

@property (readonly, nonatomic) NSString * localizedMessage;
@property (readonly, nonatomic) NSString * localizedTitle;
@property (readonly, nonatomic) NSString * localizedURLTitle;
@property (readonly, nonatomic) NSURL * URL;

- (void)dealloc;
- (NSURL *)URL;
- (NSString *)localizedTitle;
- (NSString *)_initWithMessage:(NSString *)arg0 title:(NSString *)arg1 URLTitle:(NSString *)arg2 URL:(NSURL *)arg3;
- (NSString *)localizedMessage;
- (NSString *)localizedURLTitle;

@end
