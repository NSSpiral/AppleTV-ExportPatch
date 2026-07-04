/* Runtime dump - ATVFeedStarRatingElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedStarRatingElement : ATVFeedElement
{
    char _hasUserSetRating;
    float _ratingPercentage;
    NSString * _rightLabel;
    NSDictionary * _styleKeyValues;
}

@property (nonatomic) float ratingPercentage;
@property (copy, nonatomic) NSString * rightLabel;
@property (nonatomic) char hasUserSetRating;
@property (readonly, retain, nonatomic) UIColor * labelColor;
@property (retain, nonatomic) NSDictionary * styleKeyValues;

- (ATVFeedStarRatingElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (NSDictionary *)styleKeyValues;
- (void)setStyleKeyValues:(NSDictionary *)arg0;
- (void)setRatingPercentage:(float)arg0;
- (void)setRightLabel:(NSString *)arg0;
- (void)setHasUserSetRating:(char)arg0;
- (float)ratingPercentage;
- (char)hasUserSetRating;
- (NSString *)rightLabel;
- (void).cxx_destruct;
- (UIColor *)labelColor;

@end
