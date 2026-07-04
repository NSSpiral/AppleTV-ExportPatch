/* Runtime dump - MLContentRating
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLContentRating : NSObject <NSCopying>
{
    NSMutableDictionary * _dictionary;
}

@property (copy, nonatomic) NSString * ratingDescription;
@property (copy, nonatomic) NSString * ratingLabel;
@property (retain, nonatomic) NSNumber * ratingRank;
@property (copy, nonatomic) NSString * ratingSystem;

- (MLContentRating *)init;
- (MLContentRating *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (MLContentRating *)initWithStringRepresentation:(NSDictionary *)arg0;
- (NSDictionary *)copyStringRepresentation;
- (void)_setValueCopy:(id)arg0 forKey:(NSString *)arg1;
- (void)_setValue:(NSValue *)arg0 forKey:(NSString *)arg1;
- (MLContentRating *)initWithContentRatingDictionary:(NSDictionary *)arg0;
- (NSString *)ratingSystem;
- (NSString *)ratingLabel;
- (NSNumber *)ratingRank;
- (NSString *)ratingDescription;
- (void)setRatingDescription:(NSString *)arg0;
- (void)setRatingLabel:(NSString *)arg0;
- (void)setRatingRank:(NSNumber *)arg0;
- (void)setRatingSystem:(NSString *)arg0;

@end
