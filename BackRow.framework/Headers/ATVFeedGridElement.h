/* Runtime dump - ATVFeedGridElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedGridElement : ATVFeedElement
{
    int _columnCount;
    int _defaultSelection;
    NSArray * _gridItems;
    NSString * _onItemFocused;
}

@property (nonatomic) int columnCount;
@property (nonatomic) int defaultSelection;
@property (retain, nonatomic) NSArray * gridItems;
@property (copy, nonatomic) NSString * onItemFocused;

- (ATVFeedGridElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)onItemFocused;
- (NSArray *)gridItems;
- (void)setOnItemFocused:(NSString *)arg0;
- (void)setDefaultSelection:(int)arg0;
- (void)setGridItems:(NSArray *)arg0;
- (int)defaultSelection;
- (int)columnCount;
- (void)setColumnCount:(int)arg0;
- (void).cxx_destruct;

@end
