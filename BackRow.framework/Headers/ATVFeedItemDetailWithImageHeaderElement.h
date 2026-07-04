/* Runtime dump - ATVFeedItemDetailWithImageHeaderElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedItemDetailElement.h>

@class ATVFeedElement, ATVFeedHeaderElement, BRMerchant;
@interface ATVFeedItemDetailWithImageHeaderElement : ATVFeedItemDetailElement
{
    NSString * _layout;
    ATVFeedHeaderElement * _imageHeader;
    NSArray * _userRatings;
    NSString * _posterAlignment;
}

@property (retain, nonatomic) NSString * layout;
@property (retain, nonatomic) ATVFeedHeaderElement * imageHeader;
@property (copy, nonatomic) NSArray * userRatings;
@property (retain, nonatomic) NSString * posterAlignment;
@property (readonly, retain, nonatomic) UIColor * titleColor;
@property (readonly, retain, nonatomic) UIColor * subtitleColor;

- (ATVFeedItemDetailWithImageHeaderElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)_stylesForKeyPath:(NSString *)arg0;
- (NSString *)posterAlignment;
- (void)setPosterAlignment:(NSString *)arg0;
- (ATVFeedHeaderElement *)imageHeader;
- (UIColor *)subtitleColor;
- (NSArray *)userRatings;
- (void)setImageHeader:(ATVFeedHeaderElement *)arg0;
- (void)setUserRatings:(NSArray *)arg0;
- (NSString *)layout;
- (void)setLayout:(NSString *)arg0;
- (UIColor *)titleColor;
- (void).cxx_destruct;

@end
