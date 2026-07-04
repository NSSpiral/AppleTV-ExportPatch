/* Runtime dump - ATVFeedHeaderWithCountAndButtonsElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedHeaderElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedHeaderWithCountAndButtonsElement : ATVFeedHeaderElement
{
    unsigned int _count;
    NSArray * _buttons;
}

@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSArray * buttons;

- (ATVFeedHeaderWithCountAndButtonsElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (unsigned int)count;
- (void)setCount:(unsigned int)arg0;
- (void).cxx_destruct;
- (NSArray *)buttons;
- (void)setButtons:(NSArray *)arg0;

@end
