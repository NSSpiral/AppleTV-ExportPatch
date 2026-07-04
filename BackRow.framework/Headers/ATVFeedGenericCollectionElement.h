/* Runtime dump - ATVFeedGenericCollectionElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, ATVFeedHeaderElement, ATVFeedMenuElement, BRMerchant;
@interface ATVFeedGenericCollectionElement : ATVFeedRootElement
{
    ATVFeedHeaderElement * _header;
    ATVFeedElement * _preview;
    ATVFeedMenuElement * _menu;
    NSString * _listDescription;
}

@property (retain, nonatomic) ATVFeedHeaderElement * header;
@property (retain, nonatomic) ATVFeedElement * preview;
@property (retain, nonatomic) ATVFeedMenuElement * menu;
@property (retain, nonatomic) NSString * listDescription;

- (ATVFeedGenericCollectionElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setPreview:(ATVFeedElement *)arg0;
- (ATVFeedElement *)preview;
- (NSString *)listDescription;
- (void)setListDescription:(NSString *)arg0;
- (void).cxx_destruct;
- (ATVFeedMenuElement *)menu;
- (void)setMenu:(ATVFeedMenuElement *)arg0;
- (void)setHeader:(ATVFeedHeaderElement *)arg0;
- (ATVFeedHeaderElement *)header;

@end
