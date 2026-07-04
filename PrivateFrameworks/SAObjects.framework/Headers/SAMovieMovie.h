/* Runtime dump - SAMovieMovie
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieMovie : SADomainObject

@property (copy, nonatomic) NSArray * actors;
@property (copy, nonatomic) NSArray * directors;
@property (copy, nonatomic) NSArray * genres;
@property (copy, nonatomic) NSURL * hiResTrailerUri;
@property (copy, nonatomic) NSURL * iTunesUri;
@property (nonatomic) char is3d;
@property (copy, nonatomic) NSNumber * isAvailableOnItunesForPurchase;
@property (copy, nonatomic) NSNumber * isAvailableOnItunesForRent;
@property (copy, nonatomic) NSURL * lowResTrailerUri;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSArray * posterImages;
@property (copy, nonatomic) NSURL * posterUri;
@property (copy, nonatomic) NSNumber * qualityRating;
@property (copy, nonatomic) NSString * rating;
@property (retain, nonatomic) SALocalSearchReviewList * reviews;
@property (copy, nonatomic) NSURL * rottenTomatoesUri;
@property (nonatomic) int runtimeInMinutes;
@property (copy, nonatomic) NSArray * studios;
@property (copy, nonatomic) NSString * synopsis;
@property (copy, nonatomic) NSString * theaterShowtimeSearchRegionDescription;
@property (copy, nonatomic) NSArray * theaterShowtimes;
@property (copy, nonatomic) NSDate * theatricalReleaseDate;

+ (MIPMovie *)movie;
+ (NSDictionary *)movieWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setReviews:(SALocalSearchReviewList *)arg0;
- (SALocalSearchReviewList *)reviews;
- (NSString *)rating;
- (void)setRating:(NSString *)arg0;
- (NSArray *)directors;
- (void)setDirectors:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSArray *)posterImages;
- (void)setPosterImages:(NSArray *)arg0;
- (NSNumber *)qualityRating;
- (void)setQualityRating:(NSNumber *)arg0;
- (NSDate *)theatricalReleaseDate;
- (void)setTheatricalReleaseDate:(NSDate *)arg0;
- (NSURL *)iTunesUri;
- (void)setITunesUri:(NSURL *)arg0;
- (NSArray *)actors;
- (void)setActors:(NSArray *)arg0;
- (NSArray *)genres;
- (void)setGenres:(NSArray *)arg0;
- (NSURL *)hiResTrailerUri;
- (void)setHiResTrailerUri:(NSURL *)arg0;
- (char)is3d;
- (void)setIs3d:(char)arg0;
- (NSNumber *)isAvailableOnItunesForPurchase;
- (void)setIsAvailableOnItunesForPurchase:(NSNumber *)arg0;
- (NSNumber *)isAvailableOnItunesForRent;
- (void)setIsAvailableOnItunesForRent:(NSNumber *)arg0;
- (NSURL *)lowResTrailerUri;
- (void)setLowResTrailerUri:(NSURL *)arg0;
- (NSURL *)posterUri;
- (void)setPosterUri:(NSURL *)arg0;
- (NSURL *)rottenTomatoesUri;
- (void)setRottenTomatoesUri:(NSURL *)arg0;
- (int)runtimeInMinutes;
- (void)setRuntimeInMinutes:(int)arg0;
- (NSArray *)studios;
- (void)setStudios:(NSArray *)arg0;
- (NSString *)synopsis;
- (void)setSynopsis:(NSString *)arg0;
- (NSString *)theaterShowtimeSearchRegionDescription;
- (void)setTheaterShowtimeSearchRegionDescription:(NSString *)arg0;
- (NSArray *)theaterShowtimes;
- (void)setTheaterShowtimes:(NSArray *)arg0;

@end
