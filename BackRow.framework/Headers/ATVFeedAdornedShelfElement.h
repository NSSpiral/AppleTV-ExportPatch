/* Runtime dump - ATVFeedAdornedShelfElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedShelfElement.h>

@class ATVFeedActionButtonElement, ATVFeedElement, ATVFeedImageElement, BRMerchant;
@interface ATVFeedAdornedShelfElement : ATVFeedShelfElement
{
    ATVFeedImageElement * _backgroundImage;
    NSString * _slug;
    NSString * _title;
    ATVFeedImageElement * _titleImage;
    NSString * _subtitle;
    ATVFeedImageElement * _logoImage;
    ATVFeedActionButtonElement * _actionButton;
}

@property (retain, nonatomic) ATVFeedImageElement * backgroundImage;
@property (copy, nonatomic) NSString * slug;
@property (copy, nonatomic) NSString * title;
@property (retain, nonatomic) ATVFeedImageElement * titleImage;
@property (copy, nonatomic) NSString * subtitle;
@property (retain, nonatomic) ATVFeedImageElement * logoImage;
@property (retain, nonatomic) ATVFeedActionButtonElement * actionButton;

- (ATVFeedAdornedShelfElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)slug;
- (ATVFeedImageElement *)titleImage;
- (void)setSlug:(NSString *)arg0;
- (void)setTitleImage:(ATVFeedImageElement *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (ATVFeedImageElement *)backgroundImage;
- (NSString *)subtitle;
- (void)setBackgroundImage:(ATVFeedImageElement *)arg0;
- (void)setSubtitle:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setActionButton:(ATVFeedActionButtonElement *)arg0;
- (ATVFeedActionButtonElement *)actionButton;
- (ATVFeedImageElement *)logoImage;
- (void)setLogoImage:(ATVFeedImageElement *)arg0;

@end
