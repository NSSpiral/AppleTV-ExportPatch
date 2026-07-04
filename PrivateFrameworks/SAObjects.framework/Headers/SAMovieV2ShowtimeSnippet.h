/* Runtime dump - SAMovieV2ShowtimeSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2ShowtimeSnippet : SAUISnippet

@property (retain, nonatomic) SAUIImageResource * attributionLogo;
@property (copy, nonatomic) NSString * movieName;
@property (copy, nonatomic) NSArray * showtimes;
@property (retain, nonatomic) SALocalSearchBusiness2 * theater;
@property (copy, nonatomic) NSString * theaterName;

+ (SAMovieV2ShowtimeSnippet *)showtimeSnippet;
+ (NSDictionary *)showtimeSnippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)movieName;
- (void)setMovieName:(NSString *)arg0;
- (NSArray *)showtimes;
- (void)setShowtimes:(NSArray *)arg0;
- (SALocalSearchBusiness2 *)theater;
- (void)setTheater:(SALocalSearchBusiness2 *)arg0;
- (NSString *)theaterName;
- (void)setTheaterName:(NSString *)arg0;
- (SAUIImageResource *)attributionLogo;
- (void)setAttributionLogo:(SAUIImageResource *)arg0;

@end
