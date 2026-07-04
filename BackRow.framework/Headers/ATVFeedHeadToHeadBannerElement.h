/* Runtime dump - ATVFeedHeadToHeadBannerElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedHeadToHeadBannerElement : ATVFeedElement
{
    ATVFeedImageElement * _backgroundImage;
    ATVFeedImageElement * _leftImage;
    ATVFeedImageElement * _rightImage;
    NSString * _imageSeparatorText;
}

@property (retain, nonatomic) ATVFeedImageElement * backgroundImage;
@property (retain, nonatomic) ATVFeedImageElement * leftImage;
@property (retain, nonatomic) ATVFeedImageElement * rightImage;
@property (retain, nonatomic) NSString * imageSeparatorText;

- (ATVFeedHeadToHeadBannerElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (ATVFeedImageElement *)rightImage;
- (void)setRightImage:(ATVFeedImageElement *)arg0;
- (NSString *)imageSeparatorText;
- (void)setImageSeparatorText:(NSString *)arg0;
- (void)setLeftImage:(ATVFeedImageElement *)arg0;
- (ATVFeedImageElement *)leftImage;
- (ATVFeedImageElement *)backgroundImage;
- (void)setBackgroundImage:(ATVFeedImageElement *)arg0;
- (void).cxx_destruct;

@end
