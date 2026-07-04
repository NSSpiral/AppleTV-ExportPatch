/* Runtime dump - ATVFeedMediaBrowserElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, ATVFeedHeaderWithCountAndButtonsElement, ATVFeedInitialSelectionElement, BRMerchant;
@interface ATVFeedMediaBrowserElement : ATVFeedRootElement
{
    ATVFeedHeaderWithCountAndButtonsElement * _header;
    ATVFeedInitialSelectionElement * _initialSelection;
    NSArray * _items;
    NSString * _gridLayout;
}

@property (retain, nonatomic) ATVFeedHeaderWithCountAndButtonsElement * header;
@property (retain, nonatomic) ATVFeedInitialSelectionElement * initialSelection;
@property (retain, nonatomic) NSArray * items;
@property (retain, nonatomic) NSString * gridLayout;

- (ATVFeedMediaBrowserElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setInitialSelection:(ATVFeedInitialSelectionElement *)arg0;
- (ATVFeedInitialSelectionElement *)initialSelection;
- (NSString *)gridLayout;
- (void)setGridLayout:(NSString *)arg0;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (void).cxx_destruct;
- (void)setHeader:(ATVFeedHeaderWithCountAndButtonsElement *)arg0;
- (ATVFeedHeaderWithCountAndButtonsElement *)header;

@end
