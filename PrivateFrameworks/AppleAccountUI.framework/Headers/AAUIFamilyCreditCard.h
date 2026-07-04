/* Runtime dump - AAUIFamilyCreditCard
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilyCreditCard : NSObject
{
    NSDate * _expirationDate;
    NSString * _lastFourDigits;
    NSString * _type;
    NSString * _usageNotice;
    NSString * _providerDescription;
    NSURL * _imageURL;
    UIImage * _image;
}

@property (copy, nonatomic) NSDate * expirationDate;
@property (copy, nonatomic) NSString * lastFourDigits;
@property (copy, nonatomic) NSString * type;
@property (copy, nonatomic) NSString * usageNotice;
@property (copy, nonatomic) NSString * providerDescription;
@property (copy, nonatomic) NSURL * imageURL;
@property (retain, nonatomic) UIImage * image;

- (void)setImage:(UIImage *)arg0;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (UIImage *)image;
- (void).cxx_destruct;
- (NSString *)lastFourDigits;
- (void)setLastFourDigits:(NSString *)arg0;
- (NSString *)usageNotice;
- (void)setUsageNotice:(NSString *)arg0;
- (NSString *)providerDescription;
- (void)setProviderDescription:(NSString *)arg0;
- (void)setExpirationDate:(NSDate *)arg0;
- (void)setImageURL:(NSURL *)arg0;
- (NSURL *)imageURL;
- (NSDate *)expirationDate;

@end
