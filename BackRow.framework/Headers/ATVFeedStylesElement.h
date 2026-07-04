/* Runtime dump - ATVFeedStylesElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedStylesElement : ATVFeedElement
{
    NSDictionary * _styleKeyValues;
}

@property (readonly, copy, nonatomic) NSDictionary * styleKeyValues;

- (ATVFeedStylesElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSDictionary *)styleKeyValues;
- (void).cxx_destruct;

@end
