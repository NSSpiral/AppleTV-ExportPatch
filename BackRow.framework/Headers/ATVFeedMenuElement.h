/* Runtime dump - ATVFeedMenuElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, ATVFeedInitialSelectionElement, BRMerchant;
@interface ATVFeedMenuElement : ATVFeedElement
{
    ATVFeedInitialSelectionElement * _initialSelection;
    NSArray * _sections;
    NSString * _onItemFocused;
}

@property (retain, nonatomic) ATVFeedInitialSelectionElement * initialSelection;
@property (retain, nonatomic) NSArray * sections;
@property (copy, nonatomic) NSString * onItemFocused;

- (ATVFeedMenuElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setInitialSelection:(ATVFeedInitialSelectionElement *)arg0;
- (ATVFeedInitialSelectionElement *)initialSelection;
- (NSString *)onItemFocused;
- (void)setOnItemFocused:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;

@end
