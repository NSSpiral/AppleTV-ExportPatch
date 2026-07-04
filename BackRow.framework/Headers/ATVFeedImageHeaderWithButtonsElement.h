/* Runtime dump - ATVFeedImageHeaderWithButtonsElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedHeaderElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedImageHeaderWithButtonsElement : ATVFeedHeaderElement
{
    NSArray * _buttons;
}

@property (retain, nonatomic) NSArray * buttons;

- (ATVFeedImageHeaderWithButtonsElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void).cxx_destruct;
- (NSArray *)buttons;
- (void)setButtons:(NSArray *)arg0;

@end
