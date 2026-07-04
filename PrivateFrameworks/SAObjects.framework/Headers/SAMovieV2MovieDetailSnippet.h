/* Runtime dump - SAMovieV2MovieDetailSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2MovieDetailSnippet : SAUISnippet

@property (copy, nonatomic) NSArray * actors;
@property (copy, nonatomic) NSNumber * availableOnItunesForPurchase;
@property (copy, nonatomic) NSNumber * availableOnItunesForRent;
@property (copy, nonatomic) NSArray * directors;
@property (copy, nonatomic) NSArray * genres;
@property (copy, nonatomic) NSURL * hiresTrailerUri;
@property (copy, nonatomic) NSURL * iTunesUri;
@property (nonatomic) char is3d;
@property (copy, nonatomic) NSURL * lowresTrailerUri;
@property (copy, nonatomic) NSURL * movieIdentifier;
@property (retain, nonatomic) SAMovieV2ReviewListSnippet * movieReviewListSnippet;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSNumber * playTrailer;
@property (copy, nonatomic) NSArray * posterImages;
@property (copy, nonatomic) NSNumber * qualityRating;
@property (copy, nonatomic) NSString * rating;
@property (nonatomic) int runtimeInMinutes;
@property (retain, nonatomic) SAMovieV2ShowtimeSnippet * showtimeSnippet;
@property (copy, nonatomic) NSArray * studios;
@property (copy, nonatomic) NSString * synopsis;
@property (retain, nonatomic) SAMovieV2TheaterShowtimeListSnippet * theaterShowtimeListSnippet;
@property (copy, nonatomic) NSString * theaterShowtimeSearchRegionDescription;
@property (copy, nonatomic) NSDate * theatricalReleaseDate;

+ (SAMovieV2MovieDetailSnippet *)movieDetailSnippet;
+ (NSDictionary *)movieDetailSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)rating;
- (void)setRating:(NSString *)arg0;
- (NSArray *)directors;
- (void)setDirectors:(NSArray *)arg0;
- (NSString *)encodedClassName;
- (NSArray *)posterImages;
- (void)setPosterImages:(NSArray *)arg0;
- (NSNumber *)qualityRating;
- (void)setQualityRating:(NSNumber *)arg0;
- (NSDate *)theatricalReleaseDate;
- (void)setTheatricalReleaseDate:(NSDate *)arg0;
- (NSURL *)iTunesUri;
- (void)setITunesUri:(NSURL *)arg0;
- (SAMovieV2TheaterShowtimeListSnippet *)theaterShowtimeListSnippet;
- (NSArray *)actors;
- (void)setActors:(NSArray *)arg0;
- (NSArray *)genres;
- (void)setGenres:(NSArray *)arg0;
- (char)is3d;
- (void)setIs3d:(char)arg0;
- (int)runtimeInMinutes;
- (void)setRuntimeInMinutes:(int)arg0;
- (NSArray *)studios;
- (void)setStudios:(NSArray *)arg0;
- (NSString *)synopsis;
- (void)setSynopsis:(NSString *)arg0;
- (NSString *)theaterShowtimeSearchRegionDescription;
- (void)setTheaterShowtimeSearchRegionDescription:(NSString *)arg0;
- (NSNumber *)playTrailer;
- (void)setPlayTrailer:(NSNumber *)arg0;
- (SAMovieV2ShowtimeSnippet *)showtimeSnippet;
- (void)setShowtimeSnippet:(SAMovieV2ShowtimeSnippet *)arg0;
- (void)setTheaterShowtimeListSnippet:(SAMovieV2TheaterShowtimeListSnippet *)arg0;
- (NSNumber *)availableOnItunesForPurchase;
- (void)setAvailableOnItunesForPurchase:(NSNumber *)arg0;
- (NSNumber *)availableOnItunesForRent;
- (void)setAvailableOnItunesForRent:(NSNumber *)arg0;
- (NSURL *)hiresTrailerUri;
- (void)setHiresTrailerUri:(NSURL *)arg0;
- (NSURL *)lowresTrailerUri;
- (void)setLowresTrailerUri:(NSURL *)arg0;
- (NSURL *)movieIdentifier;
- (void)setMovieIdentifier:(NSURL *)arg0;
- (SAMovieV2ReviewListSnippet *)movieReviewListSnippet;
- (void)setMovieReviewListSnippet:(SAMovieV2ReviewListSnippet *)arg0;

@end
