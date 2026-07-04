/* Runtime dump - SAMovieShowtime
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieShowtime : AceObject <SAAceSerializable>

@property (retain, nonatomic) SAUIAppPunchOut * buyTicketsPunchout;
@property (copy, nonatomic) NSNumber * childTicketQuantity;
@property (nonatomic) char is3d;
@property (nonatomic) char isImax;
@property (copy, nonatomic) NSNumber * regularTicketQuantity;
@property (copy, nonatomic) NSNumber * seniorTicketQuantity;
@property (retain, nonatomic) SACalendar * showtime;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SACalendar *)showtime;
+ (NSDictionary *)showtimeWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)is3d;
- (void)setIs3d:(char)arg0;
- (SACalendar *)showtime;
- (SAUIAppPunchOut *)buyTicketsPunchout;
- (void)setBuyTicketsPunchout:(SAUIAppPunchOut *)arg0;
- (NSNumber *)childTicketQuantity;
- (void)setChildTicketQuantity:(NSNumber *)arg0;
- (char)isImax;
- (void)setIsImax:(char)arg0;
- (NSNumber *)regularTicketQuantity;
- (void)setRegularTicketQuantity:(NSNumber *)arg0;
- (NSNumber *)seniorTicketQuantity;
- (void)setSeniorTicketQuantity:(NSNumber *)arg0;
- (void)setShowtime:(SACalendar *)arg0;

@end
