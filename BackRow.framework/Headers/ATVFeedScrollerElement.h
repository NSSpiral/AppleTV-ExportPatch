/* Runtime dump - ATVFeedScrollerElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, ATVFeedHeaderElement, BRMerchant;
@interface ATVFeedScrollerElement : ATVFeedRootElement
{
    char _fixedHeader;
    int _topSpacerHeight;
    int _bottomSpacerHeight;
    ATVFeedHeaderElement * _header;
    NSArray * _scrollerItems;
}

@property (nonatomic) char fixedHeader;
@property (nonatomic) int topSpacerHeight;
@property (nonatomic) int bottomSpacerHeight;
@property (retain, nonatomic) ATVFeedHeaderElement * header;
@property (retain, nonatomic) NSArray * scrollerItems;

- (ATVFeedScrollerElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (int)topSpacerHeight;
- (NSArray *)scrollerItems;
- (int)bottomSpacerHeight;
- (char)fixedHeader;
- (void)setFixedHeader:(char)arg0;
- (void)setTopSpacerHeight:(int)arg0;
- (void)setBottomSpacerHeight:(int)arg0;
- (void)setScrollerItems:(NSArray *)arg0;
- (void).cxx_destruct;
- (void)setHeader:(ATVFeedHeaderElement *)arg0;
- (ATVFeedHeaderElement *)header;

@end
