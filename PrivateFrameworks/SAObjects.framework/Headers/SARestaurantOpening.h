/* Runtime dump - SARestaurantOpening
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARestaurantOpening : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSURL * bookingId;
@property (retain, nonatomic) SAUIAppPunchOut * makeReservationPunchOut;
@property (copy, nonatomic) NSNumber * partySize;
@property (retain, nonatomic) SACalendar * timeSlot;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SARestaurantOpening *)opening;
+ (NSDictionary *)openingWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSURL *)bookingId;
- (void)setBookingId:(NSURL *)arg0;
- (SAUIAppPunchOut *)makeReservationPunchOut;
- (void)setMakeReservationPunchOut:(SAUIAppPunchOut *)arg0;
- (NSNumber *)partySize;
- (void)setPartySize:(NSNumber *)arg0;
- (SACalendar *)timeSlot;
- (void)setTimeSlot:(SACalendar *)arg0;

@end
