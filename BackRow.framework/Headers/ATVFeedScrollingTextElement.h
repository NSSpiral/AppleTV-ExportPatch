/* Runtime dump - ATVFeedScrollingTextElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedScrollingTextElement : ATVFeedRootElement
{
    NSString * _title;
    NSString * _text;
    NSArray * _buttons;
    int _initialSelection;
}

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * text;
@property (retain, nonatomic) NSArray * buttons;
@property (nonatomic) int initialSelection;

- (ATVFeedScrollingTextElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setInitialSelection:(int)arg0;
- (int)initialSelection;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void).cxx_destruct;
- (NSArray *)buttons;
- (void)setButtons:(NSArray *)arg0;

@end
