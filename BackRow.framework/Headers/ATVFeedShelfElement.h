/* Runtime dump - ATVFeedShelfElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedShelfElement : ATVFeedElement
{
    char _center;
    int _columnCount;
    NSArray * _sections;
    NSString * _onItemFocused;
    UIColor * _selectionColor;
}

@property (nonatomic) int columnCount;
@property (nonatomic) char center;
@property (retain, nonatomic) NSArray * sections;
@property (copy, nonatomic) NSString * onItemFocused;
@property (copy, nonatomic) UIColor * selectionColor;

- (ATVFeedShelfElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)onItemFocused;
- (void)setOnItemFocused:(NSString *)arg0;
- (char)center;
- (void)setCenter:(char)arg0;
- (UIColor *)selectionColor;
- (void)setSelectionColor:(UIColor *)arg0;
- (int)columnCount;
- (void)setColumnCount:(int)arg0;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;

@end
