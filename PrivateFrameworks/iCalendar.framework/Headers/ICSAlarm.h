/* Runtime dump - ICSAlarm
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSAlarm : ICSComponent

@property (nonatomic) int action;
@property (retain, nonatomic) ICSDateTimeUTCValue * acknowledged;
@property (retain) NSArray * attach;
@property (retain) NSArray * attendee;
@property (retain) NSString * description;
@property (retain) NSString * summary;
@property (retain) ICSTrigger * trigger;
@property (retain) NSString * uid;
@property (retain, nonatomic) NSString * relatedTo;
@property (retain, nonatomic) NSData * bookmark;
@property (retain, nonatomic) NSString * x_wr_alarmuid;
@property (retain, nonatomic) NSString * x_apple_proximity;
@property (nonatomic) char x_apple_default_alarm;
@property (nonatomic) char x_apple_local_default_alarm;
@property (nonatomic) char x_apple_travel_default_alarm;
@property (retain) ICSStructuredLocation * x_apple_structured_location;

+ (NSString *)name;
+ (int)actionFromICSString:(NSString *)arg0;
+ (NSObject *)ICSStringFromAction:(int)arg0;
+ (id)parseableDocumentFromICS:(id)arg0;
+ (ICSAlarm *)createNoneAlarm;

- (void)setX_wr_alarmuid:(NSString *)arg0;
- (void)setX_apple_proximity:(NSString *)arg0;
- (void)setX_apple_default_alarm:(char)arg0;
- (void)setAcknowledged:(ICSDateTimeUTCValue *)arg0;
- (void)setRelatedTo:(NSString *)arg0;
- (NSString *)x_wr_alarmuid;
- (NSString *)x_apple_proximity;
- (ICSDateTimeUTCValue *)acknowledged;
- (char)x_apple_default_alarm;
- (NSString *)relatedTo;
- (int)action;
- (void)setAction:(int)arg0;
- (NSData *)bookmark;
- (void)setBookmark:(NSData *)arg0;
- (void)fixAlarm;
- (char)isNoneAlarm;
- (void)setX_apple_travel_default_alarm:(char)arg0;
- (char)x_apple_travel_default_alarm;
- (void)setX_apple_local_default_alarm:(char)arg0;
- (char)x_apple_local_default_alarm;

@end
