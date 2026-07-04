/* Runtime dump - ATVFeedDividerElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedHeaderElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedDividerElement : ATVFeedHeaderElement
{
    NSString * _alignment;
}

@property (copy, nonatomic) NSString * alignment;

- (ATVFeedDividerElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setAlignment:(NSString *)arg0;
- (NSString *)alignment;
- (void).cxx_destruct;

@end
