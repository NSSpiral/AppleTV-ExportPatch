/* Runtime dump - ATVFeedInterstitialElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedInterstitialElement : ATVFeedElement
{
    float _start;
    float _end;
}

@property (nonatomic) float start;
@property (nonatomic) float end;

- (ATVFeedInterstitialElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (float)start;
- (float)end;
- (void)setStart:(float)arg0;
- (void)setEnd:(float)arg0;

@end
