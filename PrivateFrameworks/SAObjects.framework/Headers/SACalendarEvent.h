/* Runtime dump - SACalendarEvent
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarEvent : SADomainObject

@property (copy, nonatomic) NSArray * alerts;
@property (nonatomic) char allDay;
@property (copy, nonatomic) NSArray * attendees;
@property (copy, nonatomic) NSURL * calendarId;
@property (copy, nonatomic) NSURL * calendarPunchoutURI;
@property (copy, nonatomic) NSDate * endDate;
@property (copy, nonatomic) NSNumber * includeRecurrences;
@property (copy, nonatomic) NSString * location;
@property (copy, nonatomic) NSString * notes;
@property (copy, nonatomic) NSNumber * readOnly;
@property (copy, nonatomic) NSArray * recurrences;
@property (copy, nonatomic) NSDate * startDate;
@property (copy, nonatomic) NSString * timeZoneId;
@property (copy, nonatomic) NSString * title;

+ (UIEvent *)event;
+ (NSDictionary *)eventWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSArray *)attendees;
- (NSString *)notes;
- (void)setNotes:(NSString *)arg0;
- (void)setAttendees:(NSArray *)arg0;
- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)location;
- (NSNumber *)readOnly;
- (void)setAllDay:(char)arg0;
- (char)allDay;
- (void)setReadOnly:(NSNumber *)arg0;
- (void)setLocation:(NSString *)arg0;
- (void)setStartDate:(NSDate *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSArray *)alerts;
- (void)setAlerts:(NSArray *)arg0;
- (NSURL *)calendarId;
- (void)setCalendarId:(NSURL *)arg0;
- (NSURL *)calendarPunchoutURI;
- (void)setCalendarPunchoutURI:(NSURL *)arg0;
- (NSNumber *)includeRecurrences;
- (void)setIncludeRecurrences:(NSNumber *)arg0;
- (NSArray *)recurrences;
- (void)setRecurrences:(NSArray *)arg0;
- (NSString *)timeZoneId;
- (void)setTimeZoneId:(NSString *)arg0;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
