/* Runtime dump - SAMovieV2TheaterListCell
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2TheaterListCell : SADomainObject

@property (retain, nonatomic) SADistance * relativeDistance;
@property (copy, nonatomic) NSString * theaterAddress;
@property (copy, nonatomic) NSString * theaterName;
@property (retain, nonatomic) SAMovieV2MovieListSnippet * theaterShowtimeListSnippet;

+ (NSObject *)theaterListCell;
+ (NSDictionary *)theaterListCellWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SAMovieV2MovieListSnippet *)theaterShowtimeListSnippet;
- (SADistance *)relativeDistance;
- (void)setRelativeDistance:(SADistance *)arg0;
- (NSString *)theaterName;
- (void)setTheaterName:(NSString *)arg0;
- (NSString *)theaterAddress;
- (void)setTheaterAddress:(NSString *)arg0;
- (void)setTheaterShowtimeListSnippet:(SAMovieV2MovieListSnippet *)arg0;

@end
