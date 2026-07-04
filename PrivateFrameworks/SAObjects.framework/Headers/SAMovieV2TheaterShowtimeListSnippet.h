/* Runtime dump - SAMovieV2TheaterShowtimeListSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2TheaterShowtimeListSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieV2MovieDetailSnippet * movieDetailSnippet;
@property (copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSArray * theaterShowtimeListCells;
@property (copy, nonatomic) NSString * title;

+ (SAMovieV2TheaterShowtimeListSnippet *)theaterShowtimeListSnippet;
+ (NSDictionary *)theaterShowtimeListSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (NSString *)encodedClassName;
- (SAMovieV2MovieDetailSnippet *)movieDetailSnippet;
- (void)setMovieDetailSnippet:(SAMovieV2MovieDetailSnippet *)arg0;
- (NSArray *)theaterShowtimeListCells;
- (void)setTheaterShowtimeListCells:(NSArray *)arg0;

@end
