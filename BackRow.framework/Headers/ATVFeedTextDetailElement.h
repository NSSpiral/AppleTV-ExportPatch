/* Runtime dump - ATVFeedTextDetailElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedTextDetailElement : ATVFeedElement
{
    NSArray * _columns;
    NSString * _buttonText;
    UIColor * _backgroundColor;
}

@property (retain, nonatomic) NSArray * columns;
@property (copy, nonatomic) NSString * buttonText;
@property (retain, nonatomic) UIColor * backgroundColor;

- (ATVFeedTextDetailElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)buttonText;
- (void)setButtonText:(NSString *)arg0;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIColor *)backgroundColor;
- (void).cxx_destruct;
- (NSArray *)columns;
- (void)setColumns:(NSArray *)arg0;

@end
