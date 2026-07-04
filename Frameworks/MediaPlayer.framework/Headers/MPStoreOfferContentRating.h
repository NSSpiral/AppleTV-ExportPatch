/* Runtime dump - MPStoreOfferContentRating
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOfferContentRating : NSObject <NSCoding>
{
    NSDictionary * _dictionary;
    int _ratingLevel;
    NSString * _ratingDescription;
    NSString * _ratingLabel;
    unsigned int _ratingSystem;
}

@property (readonly, nonatomic) char restrictedContent;
@property (readonly, nonatomic) char explicitContent;
@property (readonly, nonatomic) char restrictedPurchase;
@property (readonly, nonatomic) id mediaPropertyContentRatingValue;
@property (nonatomic) int ratingLevel;
@property (copy, nonatomic) NSString * ratingLabel;
@property (nonatomic) unsigned int ratingSystem;
@property (copy, nonatomic) NSString * ratingDescription;

+ (unsigned int)ratingSystemFromString:(NSString *)arg0;
+ (char)supportsSecureCoding;

- (char)isRestrictedPurchase;
- (char)isRestrictedContent;
- (id)mediaPropertyContentRatingValue;
- (char)_isRatingSystemForApps:(unsigned int)arg0;
- (char)_isRatingSystemForMovies:(unsigned int)arg0;
- (char)_isRatingSystemForTV:(unsigned int)arg0;
- (char)_isRatingSystemForMusic:(unsigned int)arg0;
- (int)ratingLevel;
- (void)setRatingLevel:(int)arg0;
- (MPStoreOfferContentRating *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPStoreOfferContentRating *)initWithDictionary:(NSDictionary *)arg0;
- (MPStoreOfferContentRating *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (unsigned int)ratingSystem;
- (NSString *)ratingLabel;
- (NSString *)ratingDescription;
- (void)setRatingDescription:(NSString *)arg0;
- (void)setRatingLabel:(NSString *)arg0;
- (void)setRatingSystem:(unsigned int)arg0;
- (char)isExplicitContent;

@end
