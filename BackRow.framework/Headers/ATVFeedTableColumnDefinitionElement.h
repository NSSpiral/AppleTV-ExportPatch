/* Runtime dump - ATVFeedTableColumnDefinitionElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedTableColumnDefinitionElement : ATVFeedElement
{
    NSString * _title;
    NSString * _alignment;
    int _width;
    NSDictionary * _styleKeyValues;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * alignment;
@property (nonatomic) int width;
@property (readonly, retain, nonatomic) UIColor * titleColor;
@property (retain, nonatomic) NSDictionary * styleKeyValues;

- (ATVFeedTableColumnDefinitionElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSDictionary *)styleKeyValues;
- (void)setStyleKeyValues:(NSDictionary *)arg0;
- (void)setAlignment:(NSString *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (int)width;
- (NSString *)alignment;
- (UIColor *)titleColor;
- (void)setWidth:(int)arg0;
- (void).cxx_destruct;

@end
