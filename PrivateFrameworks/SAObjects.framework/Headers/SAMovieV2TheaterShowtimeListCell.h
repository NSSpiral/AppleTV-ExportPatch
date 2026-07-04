/* Runtime dump - SAMovieV2TheaterShowtimeListCell
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2TheaterShowtimeListCell : SADomainObject

@property (nonatomic) char bookable;
@property (copy, nonatomic) NSArray * displayableShowtimes;
@property (retain, nonatomic) SADistance * relativeDistance;
@property (retain, nonatomic) SAMovieV2ShowtimeSnippet * showtimeSnippet;
@property (copy, nonatomic) NSString * theaterName;

+ (NSObject *)theaterShowtimeListCell;
+ (NSDictionary *)theaterShowtimeListCellWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSArray *)displayableShowtimes;
- (void)setDisplayableShowtimes:(NSArray *)arg0;
- (char)bookable;
- (void)setBookable:(char)arg0;
- (SADistance *)relativeDistance;
- (void)setRelativeDistance:(SADistance *)arg0;
- (SAMovieV2ShowtimeSnippet *)showtimeSnippet;
- (void)setShowtimeSnippet:(SAMovieV2ShowtimeSnippet *)arg0;
- (NSString *)theaterName;
- (void)setTheaterName:(NSString *)arg0;

@end
