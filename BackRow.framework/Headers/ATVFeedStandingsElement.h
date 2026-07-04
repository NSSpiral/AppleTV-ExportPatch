/* Runtime dump - ATVFeedStandingsElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, ATVFeedHeaderElement, BRMerchant;
@interface ATVFeedStandingsElement : ATVFeedRootElement
{
    ATVFeedHeaderElement * _header;
    NSArray * _standingsItems;
}

@property (retain, nonatomic) ATVFeedHeaderElement * header;
@property (retain, nonatomic) NSArray * standingsItems;

- (ATVFeedStandingsElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSArray *)standingsItems;
- (void)setStandingsItems:(NSArray *)arg0;
- (void).cxx_destruct;
- (void)setHeader:(ATVFeedHeaderElement *)arg0;
- (ATVFeedHeaderElement *)header;

@end
