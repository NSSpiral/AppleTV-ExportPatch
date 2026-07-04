/* Runtime dump - ATVFeedInterstitialGroupElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedInterstitialGroupElement : ATVFeedRootElement
{
    NSArray * _interstitials;
    ATVXMLElement * _xml;
}

@property (retain, nonatomic) NSArray * interstitials;
@property (readonly, retain, nonatomic) ATVXMLElement * xml;

- (ATVFeedInterstitialGroupElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (ATVXMLElement *)xml;
- (void)setInterstitials:(NSArray *)arg0;
- (NSArray *)interstitials;
- (void).cxx_destruct;

@end
