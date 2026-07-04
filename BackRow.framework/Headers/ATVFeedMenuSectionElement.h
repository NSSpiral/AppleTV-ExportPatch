/* Runtime dump - ATVFeedMenuSectionElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedHeaderElement, BRMerchant;
@interface ATVFeedMenuSectionElement : ATVFeedElement
{
    ATVFeedHeaderElement * _header;
    NSArray * _menuItems;
}

@property (retain, nonatomic) ATVFeedHeaderElement * header;
@property (retain, nonatomic) NSArray * menuItems;

- (ATVFeedMenuSectionElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setMenuItems:(NSArray *)arg0;
- (NSArray *)menuItems;
- (void).cxx_destruct;
- (void)setHeader:(ATVFeedHeaderElement *)arg0;
- (ATVFeedHeaderElement *)header;

@end
