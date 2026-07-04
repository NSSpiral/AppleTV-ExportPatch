/* Runtime dump - ATVFeedRottenTomatoesRatingElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedRottenTomatoesRatingElement : ATVFeedElement
{
    NSString * _freshness;
    float _ratingPercentage;
    NSDictionary * _styleKeyValues;
}

@property (retain, nonatomic) NSString * freshness;
@property (nonatomic) float ratingPercentage;
@property (readonly, retain, nonatomic) UIColor * labelColor;
@property (retain, nonatomic) NSDictionary * styleKeyValues;

- (ATVFeedRottenTomatoesRatingElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSDictionary *)styleKeyValues;
- (void)setStyleKeyValues:(NSDictionary *)arg0;
- (void)setRatingPercentage:(float)arg0;
- (float)ratingPercentage;
- (void)setFreshness:(NSString *)arg0;
- (NSString *)freshness;
- (void).cxx_destruct;
- (UIColor *)labelColor;

@end
