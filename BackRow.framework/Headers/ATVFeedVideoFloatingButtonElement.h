/* Runtime dump - ATVFeedVideoFloatingButtonElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedVideoFloatingButtonElement : ATVFeedElement
{
    NSString * _title;
    NSString * _onSelectAction;
    NSString * _onPlayAction;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * onSelectAction;
@property (copy, nonatomic) NSString * onPlayAction;

- (ATVFeedVideoFloatingButtonElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)onSelectAction;
- (void)setOnSelectAction:(NSString *)arg0;
- (NSString *)onPlayAction;
- (void)setOnPlayAction:(NSString *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (void).cxx_destruct;

@end
