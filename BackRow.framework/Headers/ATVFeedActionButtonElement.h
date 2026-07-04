/* Runtime dump - ATVFeedActionButtonElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedActionButtonElement : ATVFeedElement
{
    NSString * _title;
    NSString * _subtitle;
    ATVFeedImageElement * _image;
    ATVFeedImageElement * _focusedImage;
    NSString * _badge;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * subtitle;
@property (retain, nonatomic) ATVFeedImageElement * image;
@property (retain, nonatomic) ATVFeedImageElement * focusedImage;
@property (retain, nonatomic) NSString * badge;

- (ATVFeedActionButtonElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (ATVFeedImageElement *)focusedImage;
- (void)setFocusedImage:(ATVFeedImageElement *)arg0;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (ATVFeedImageElement *)image;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setBadge:(NSString *)arg0;
- (NSString *)badge;

@end
