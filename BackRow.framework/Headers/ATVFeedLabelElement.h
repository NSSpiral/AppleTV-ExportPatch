/* Runtime dump - ATVFeedLabelElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedLabelElement : ATVFeedElement
{
    NSString * _label;
    NSDictionary * _styleKeyValues;
}

@property (copy, nonatomic) NSString * label;
@property (readonly, retain, nonatomic) UIColor * labelColor;
@property (retain, nonatomic) NSDictionary * styleKeyValues;

- (ATVFeedLabelElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSDictionary *)styleKeyValues;
- (void)setStyleKeyValues:(NSDictionary *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_destruct;
- (UIColor *)labelColor;

@end
