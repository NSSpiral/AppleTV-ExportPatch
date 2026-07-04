/* Runtime dump - ATVFeedShowcaseElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedInitialSelectionElement, BRMerchant;
@interface ATVFeedShowcaseElement : ATVFeedElement
{
    char _locking;
    NSArray * _items;
    ATVFeedInitialSelectionElement * _initialSelection;
    NSString * _onItemFocused;
}

@property (copy, nonatomic) NSArray * items;
@property (retain, nonatomic) ATVFeedInitialSelectionElement * initialSelection;
@property (nonatomic) char locking;
@property (copy, nonatomic) NSString * onItemFocused;

- (ATVFeedShowcaseElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setInitialSelection:(ATVFeedInitialSelectionElement *)arg0;
- (ATVFeedInitialSelectionElement *)initialSelection;
- (NSString *)onItemFocused;
- (void)setOnItemFocused:(NSString *)arg0;
- (void)setLocking:(char)arg0;
- (char)isLocking;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (void).cxx_destruct;

@end
