/* Runtime dump - SAMovieMovieTheaterShowtimes
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * movieShowtimes;
@property (copy, nonatomic) NSArray * showtimes;
@property (retain, nonatomic) SALocalSearchBusiness2 * theater;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAMovieMovieTheaterShowtimes *)movieTheaterShowtimes;
+ (NSDictionary *)movieTheaterShowtimesWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)movieShowtimes;
- (void)setMovieShowtimes:(NSArray *)arg0;
- (NSArray *)showtimes;
- (void)setShowtimes:(NSArray *)arg0;
- (SALocalSearchBusiness2 *)theater;
- (void)setTheater:(SALocalSearchBusiness2 *)arg0;

@end
