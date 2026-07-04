/* Runtime dump - ATVFeedOverlayElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedOverlayElement : ATVFeedElement
{
    NSString * _titleColor;
    NSString * _subtitleColor;
    NSString * _backgroundColor;
    ATVFeedImageElement * _backgroundImage;
    ATVFeedImageElement * _image;
    ATVFeedImageElement * _badge;
    NSString * _position;
    NSString * _size;
    NSString * _subtitle;
    NSString * _textAlignment;
    NSString * _title;
}

@property (copy, nonatomic) NSString * titleColor;
@property (copy, nonatomic) NSString * subtitleColor;
@property (copy, nonatomic) NSString * backgroundColor;
@property (retain, nonatomic) ATVFeedImageElement * backgroundImage;
@property (retain, nonatomic) ATVFeedImageElement * image;
@property (retain, nonatomic) ATVFeedImageElement * badge;
@property (copy, nonatomic) NSString * position;
@property (copy, nonatomic) NSString * size;
@property (copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSString * textAlignment;
@property (copy, nonatomic) NSString * title;

- (ATVFeedOverlayElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)subtitleColor;
- (float)sizeAsPercentage;
- (void)setSubtitleColor:(NSString *)arg0;
- (NSString *)size;
- (void)setImage:(ATVFeedImageElement *)arg0;
- (void)setBackgroundColor:(NSString *)arg0;
- (NSString *)backgroundColor;
- (void)setTitle:(NSString *)arg0;
- (void)setTextAlignment:(NSString *)arg0;
- (NSString *)title;
- (ATVFeedImageElement *)image;
- (void)setSize:(NSString *)arg0;
- (void)setPosition:(NSString *)arg0;
- (NSString *)position;
- (ATVFeedImageElement *)backgroundImage;
- (NSString *)textAlignment;
- (NSString *)subtitle;
- (void)setBackgroundImage:(ATVFeedImageElement *)arg0;
- (void)setSubtitle:(NSString *)arg0;
- (NSString *)titleColor;
- (void)setTitleColor:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setBadge:(ATVFeedImageElement *)arg0;
- (ATVFeedImageElement *)badge;

@end
