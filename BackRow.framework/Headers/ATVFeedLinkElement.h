/* Runtime dump - ATVFeedLinkElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedLinkElement : ATVFeedElement
{
    NSString * _url;
}

@property (copy, nonatomic) NSString * url;

- (ATVFeedLinkElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSString *)url;
- (void)setUrl:(NSString *)arg0;
- (void).cxx_destruct;

@end
