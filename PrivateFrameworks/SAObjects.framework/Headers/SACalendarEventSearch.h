/* Runtime dump - SACalendarEventSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarEventSearch : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL * targetAppId;
@property (copy, nonatomic) NSDate * endDate;
@property (copy, nonatomic) NSURL * eventId;
@property (retain, nonatomic) NSNumber * limit;
@property (copy, nonatomic) NSString * location;
@property (copy, nonatomic) NSString * notes;
@property (copy, nonatomic) NSArray * participants;
@property (copy, nonatomic) NSDate * startDate;
@property (copy, nonatomic) NSString * timeZoneId;
@property (copy, nonatomic) NSString * title;

+ (SACalendarEventSearch *)eventSearch;
+ (NSDictionary *)eventSearchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)notes;
- (void)setNotes:(NSString *)arg0;
- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)location;
- (NSArray *)participants;
- (void)setParticipants:(NSArray *)arg0;
- (NSURL *)eventId;
- (void)setEventId:(NSURL *)arg0;
- (NSNumber *)limit;
- (void)setLimit:(NSNumber *)arg0;
- (void)setLocation:(NSString *)arg0;
- (void)setStartDate:(NSDate *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSString *)timeZoneId;
- (void)setTimeZoneId:(NSString *)arg0;
- (NSURL *)targetAppId;
- (void)setTargetAppId:(NSURL *)arg0;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
