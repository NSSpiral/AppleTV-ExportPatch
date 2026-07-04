/* Runtime dump - ATVFeedHeaderElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedHeaderElement : ATVFeedElement
{
    NSString * _title;
    NSString * _subtitle;
    ATVFeedImageElement * _image;
    NSString * _horizontalAlignment;
    NSString * _titleAlignment;
    NSString * _uberImageSourceID;
    NSNumber * _uberImageCrossfadeDuration;
    NSNumber * _gradientVerticalOffet;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * subtitle;
@property (retain, nonatomic) ATVFeedImageElement * image;
@property (copy, nonatomic) NSString * horizontalAlignment;
@property (copy, nonatomic) NSString * titleAlignment;
@property (copy, nonatomic) NSString * uberImageSourceID;
@property (retain, nonatomic) NSNumber * uberImageCrossfadeDuration;
@property (retain, nonatomic) NSNumber * gradientVerticalOffet;

- (ATVFeedHeaderElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setUberImageSourceID:(NSString *)arg0;
- (void)setGradientVerticalOffet:(NSNumber *)arg0;
- (void)setUberImageCrossfadeDuration:(NSNumber *)arg0;
- (NSString *)uberImageSourceID;
- (NSNumber *)uberImageCrossfadeDuration;
- (NSNumber *)gradientVerticalOffet;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (ATVFeedImageElement *)image;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setTitleAlignment:(NSString *)arg0;
- (NSString *)titleAlignment;
- (NSString *)horizontalAlignment;
- (void)setHorizontalAlignment:(NSString *)arg0;

@end
