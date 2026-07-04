/* Runtime dump - ATVFeedImageTextImageMenuItemElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedMenuItemElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedImageTextImageMenuItemElement : ATVFeedMenuItemElement
{
    NSString * _imageSeparatorText;
    ATVFeedImageElement * _leftImage;
    ATVFeedImageElement * _rightImage;
}

@property (copy, nonatomic) NSString * imageSeparatorText;
@property (retain, nonatomic) ATVFeedImageElement * leftImage;
@property (retain, nonatomic) ATVFeedImageElement * rightImage;
@property (nonatomic) char dimmed;

- (ATVFeedImageTextImageMenuItemElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (ATVFeedImageElement *)rightImage;
- (void)setRightImage:(ATVFeedImageElement *)arg0;
- (NSString *)imageSeparatorText;
- (void)setImageSeparatorText:(NSString *)arg0;
- (void)setLeftImage:(ATVFeedImageElement *)arg0;
- (ATVFeedImageElement *)leftImage;
- (void).cxx_destruct;

@end
