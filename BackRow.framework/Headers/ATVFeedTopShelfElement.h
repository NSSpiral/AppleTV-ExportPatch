/* Runtime dump - ATVFeedTopShelfElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedTopShelfElement : ATVFeedRootElement
{
    int _columnCount;
    int _refreshIntervalSec;
    NSArray * _sections;
}

@property (nonatomic) int columnCount;
@property (nonatomic) int refreshIntervalSec;
@property (retain, nonatomic) NSArray * sections;

- (ATVFeedTopShelfElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setRefreshIntervalSec:(int)arg0;
- (int)refreshIntervalSec;
- (int)columnCount;
- (void)setColumnCount:(int)arg0;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;

@end
