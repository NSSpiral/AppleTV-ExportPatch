/* Runtime dump - SAMovieV2MovieListCell
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2MovieListCell : SADomainObject

@property (copy, nonatomic) NSArray * displayableShowtimes;
@property (retain, nonatomic) SAMovieV2MovieDetailSnippet * movieDetailSnippet;
@property (copy, nonatomic) NSString * movieName;
@property (copy, nonatomic) NSArray * posterImages;
@property (copy, nonatomic) NSNumber * qualityRating;
@property (copy, nonatomic) NSString * rating;
@property (copy, nonatomic) NSDate * theatricalReleaseDate;

+ (NSObject *)movieListCell;
+ (NSDictionary *)movieListCellWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)rating;
- (void)setRating:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSArray *)displayableShowtimes;
- (void)setDisplayableShowtimes:(NSArray *)arg0;
- (SAMovieV2MovieDetailSnippet *)movieDetailSnippet;
- (void)setMovieDetailSnippet:(SAMovieV2MovieDetailSnippet *)arg0;
- (NSString *)movieName;
- (void)setMovieName:(NSString *)arg0;
- (NSArray *)posterImages;
- (void)setPosterImages:(NSArray *)arg0;
- (NSNumber *)qualityRating;
- (void)setQualityRating:(NSNumber *)arg0;
- (NSDate *)theatricalReleaseDate;
- (void)setTheatricalReleaseDate:(NSDate *)arg0;

@end
