/* Runtime dump - ATVFeedSubScrollerElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedHeaderElement, BRMerchant;
@interface ATVFeedSubScrollerElement : ATVFeedElement
{
    ATVFeedHeaderElement * _header;
    NSArray * _scrollerItems;
}

@property (retain, nonatomic) ATVFeedHeaderElement * header;
@property (retain, nonatomic) NSArray * scrollerItems;

- (ATVFeedSubScrollerElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSArray *)scrollerItems;
- (void)setScrollerItems:(NSArray *)arg0;
- (void).cxx_destruct;
- (void)setHeader:(ATVFeedHeaderElement *)arg0;
- (ATVFeedHeaderElement *)header;

@end
