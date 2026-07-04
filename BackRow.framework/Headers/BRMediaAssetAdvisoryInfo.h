/* Runtime dump - BRMediaAssetAdvisoryInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRMediaAssetAdvisoryInfo : NSObject
{
    NSString * _ratingName;
    NSString * _ratingDescription;
}

@property (retain, nonatomic) NSString * ratingName;
@property (readonly, nonatomic) NSString * ratingDescription;

- (NSString *)ratingName;
- (BRMediaAssetAdvisoryInfo *)initWithRatingDescription:(NSString *)arg0;
- (void)setRatingName:(NSString *)arg0;
- (NSString *)description;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)ratingDescription;

@end
