/* Runtime dump - ATVFeedBannerHeaderElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, ATVFeedMediaBadgesElement, BRMerchant;
@interface ATVFeedBannerHeaderElement : ATVFeedElement
{
    ATVFeedImageElement * _backgroundImage;
    ATVFeedImageElement * _decoratorImage;
    ATVFeedImageElement * _image;
    NSString * _title;
    NSString * _subtitle;
    NSArray * _buttons;
    NSString * _footer;
    NSString * _rating;
    NSString * _summary;
    ATVFeedMediaBadgesElement * _mediaBadges;
    NSString * _horizontalAlignment;
}

@property (readonly, nonatomic) ATVFeedImageElement * backgroundImage;
@property (readonly, nonatomic) ATVFeedImageElement * decoratorImage;
@property (readonly, nonatomic) ATVFeedImageElement * image;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * subtitle;
@property (readonly, copy, nonatomic) NSArray * buttons;
@property (readonly, copy, nonatomic) NSString * footer;
@property (readonly, copy, nonatomic) NSString * rating;
@property (readonly, copy, nonatomic) NSString * summary;
@property (retain, nonatomic) ATVFeedMediaBadgesElement * mediaBadges;
@property (readonly, copy, nonatomic) NSString * horizontalAlignment;

- (ATVFeedBannerHeaderElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setMediaBadges:(ATVFeedMediaBadgesElement *)arg0;
- (ATVFeedMediaBadgesElement *)mediaBadges;
- (ATVFeedImageElement *)decoratorImage;
- (NSString *)title;
- (ATVFeedImageElement *)image;
- (ATVFeedImageElement *)backgroundImage;
- (NSString *)subtitle;
- (void).cxx_destruct;
- (NSArray *)buttons;
- (NSString *)rating;
- (NSString *)horizontalAlignment;
- (NSString *)footer;
- (NSString *)summary;

@end
