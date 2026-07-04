/* Runtime dump - ATVFeedSuperShowcasePosterAdornmentElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedSuperShowcasePosterAdornmentElement : ATVFeedElement
{
    NSString * _slug;
    NSString * _title;
    ATVFeedImageElement * _titleImage;
    NSString * _body;
    ATVFeedImageElement * _logoImage;
    NSString * _actionText;
    NSString * _actionTextAlignment;
    NSString * _justification;
}

@property (copy, nonatomic) NSString * slug;
@property (copy, nonatomic) NSString * title;
@property (retain, nonatomic) ATVFeedImageElement * titleImage;
@property (copy, nonatomic) NSString * body;
@property (retain, nonatomic) ATVFeedImageElement * logoImage;
@property (retain, nonatomic) NSString * actionText;
@property (copy, nonatomic) NSString * actionTextAlignment;
@property (copy, nonatomic) NSString * justification;

- (ATVFeedSuperShowcasePosterAdornmentElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)slug;
- (ATVFeedImageElement *)titleImage;
- (void)setSlug:(NSString *)arg0;
- (void)setTitleImage:(ATVFeedImageElement *)arg0;
- (NSString *)actionTextAlignment;
- (void)setActionTextAlignment:(NSString *)arg0;
- (NSString *)actionText;
- (void)setActionText:(NSString *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)body;
- (void).cxx_destruct;
- (void)setBody:(NSString *)arg0;
- (ATVFeedImageElement *)logoImage;
- (void)setLogoImage:(ATVFeedImageElement *)arg0;
- (NSString *)justification;
- (void)setJustification:(NSString *)arg0;

@end
