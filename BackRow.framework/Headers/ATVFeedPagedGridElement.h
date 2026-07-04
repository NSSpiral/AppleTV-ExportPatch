/* Runtime dump - ATVFeedPagedGridElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedPagedGridElement : ATVFeedElement
{
    NSArray * _grids;
}

@property (retain, nonatomic) NSArray * grids;

- (ATVFeedPagedGridElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSArray *)grids;
- (void)setGrids:(NSArray *)arg0;
- (void).cxx_destruct;

@end
