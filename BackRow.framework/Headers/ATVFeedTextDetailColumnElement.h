/* Runtime dump - ATVFeedTextDetailColumnElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedTextDetailColumnElement : ATVFeedElement
{
    NSString * _title;
    UIColor * _titleColor;
    NSArray * _sections;
}

@property (copy, nonatomic) NSString * title;
@property (retain, nonatomic) UIColor * titleColor;
@property (retain, nonatomic) NSArray * sections;

- (ATVFeedTextDetailColumnElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (UIColor *)titleColor;
- (void)setTitleColor:(UIColor *)arg0;
- (void).cxx_destruct;
- (void)setSections:(NSArray *)arg0;
- (NSArray *)sections;

@end
