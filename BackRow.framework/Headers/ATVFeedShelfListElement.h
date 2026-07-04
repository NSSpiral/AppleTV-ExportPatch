/* Runtime dump - ATVFeedShelfListElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, ATVFeedHeaderElement, ATVFeedMenuElement, ATVFeedShelfElement, BRMerchant;
@interface ATVFeedShelfListElement : ATVFeedRootElement
{
    ATVFeedHeaderElement * _header;
    ATVFeedShelfElement * _centerShelf;
    ATVFeedMenuElement * _menu;
}

@property (retain, nonatomic) ATVFeedHeaderElement * header;
@property (retain, nonatomic) ATVFeedShelfElement * centerShelf;
@property (retain, nonatomic) ATVFeedMenuElement * menu;

- (ATVFeedShelfListElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (ATVFeedShelfElement *)centerShelf;
- (void)setCenterShelf:(ATVFeedShelfElement *)arg0;
- (void).cxx_destruct;
- (ATVFeedMenuElement *)menu;
- (void)setMenu:(ATVFeedMenuElement *)arg0;
- (void)setHeader:(ATVFeedHeaderElement *)arg0;
- (ATVFeedHeaderElement *)header;

@end
