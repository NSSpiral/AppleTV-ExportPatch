/* Runtime dump - ATVFeedMetadataTitleHeaderElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedHeaderElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedMetadataTitleHeaderElement : ATVFeedHeaderElement
{
    NSString * _rating;
}

@property (copy, nonatomic) NSString * rating;

- (ATVFeedMetadataTitleHeaderElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void).cxx_destruct;
- (NSString *)rating;
- (void)setRating:(NSString *)arg0;

@end
