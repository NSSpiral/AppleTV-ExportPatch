/* Runtime dump - SSItemContentRating
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying>
{
    NSMutableDictionary * _dictionary;
}

@property (readonly, nonatomic) char explicitContent;
@property (nonatomic) int rank;
@property (copy, nonatomic) NSString * ratingDescription;
@property (copy, nonatomic) NSString * ratingLabel;
@property (nonatomic) int ratingSystem;
@property (readonly, nonatomic) char restricted;
@property (nonatomic) char shouldHideWhenRestricted;
@property (readonly, nonatomic) NSDictionary * contentRatingDictionary;
@property (readonly, nonatomic) SSItemArtworkImage * ratingSystemLogo;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (int)ratingSystemFromString:(NSString *)arg0;
+ (SSItemContentRating *)stringForRatingSystem:(int)arg0;

- (char)_isRatingSystemForApps:(int)arg0;
- (char)_isRatingSystemForMovies:(int)arg0;
- (char)_isRatingSystemForTV:(int)arg0;
- (char)_isRatingSystemForMusic:(int)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSItemContentRating *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSItemContentRating *)init;
- (SSItemContentRating *)initWithDictionary:(NSMutableDictionary *)arg0;
- (SSItemContentRating *)copyWithZone:(struct _NSZone *)arg0;
- (void)_setValue:(NSValue *)arg0 forProperty:(NSString *)arg1;
- (void *)valueForProperty:(NSString *)arg0;
- (int)rank;
- (int)ratingSystem;
- (NSString *)ratingLabel;
- (NSString *)ratingDescription;
- (void)setRatingDescription:(NSString *)arg0;
- (void)setRatingLabel:(NSString *)arg0;
- (void)setRatingSystem:(int)arg0;
- (char)isExplicitContent;
- (void)setRank:(int)arg0;
- (NSDictionary *)contentRatingDictionary;
- (char)isRestricted;
- (void)_setValueCopy:(id)arg0 forProperty:(NSString *)arg1;
- (void)setShouldHideWhenRestricted:(char)arg0;
- (char)shouldHideWhenRestricted;
- (SSItemArtworkImage *)ratingSystemLogo;

@end
