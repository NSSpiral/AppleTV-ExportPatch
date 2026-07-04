/* Runtime dump - ICSUserAddress
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSUserAddress : ICSProperty

@property (nonatomic) char rsvp;
@property (retain, nonatomic) NSString * cn;
@property (nonatomic) int cutype;
@property (retain, nonatomic) NSString * dir;
@property (nonatomic) int partstat;
@property (nonatomic) int schedulestatus;
@property (nonatomic) int scheduleagent;
@property (nonatomic) int scheduleforcesend;
@property (nonatomic) int role;
@property (retain, nonatomic) ICSDateValue * partstatModified;
@property (nonatomic) char x_apple_self_invited;
@property (retain, nonatomic) NSString * email;

+ (int)roleFromICSString:(NSString *)arg0;
+ (int)calendarUserFromICSString:(NSString *)arg0;
+ (int)participationStatusFromICSString:(NSString *)arg0;
+ (int)scheduleStatusFromICSString:(NSString *)arg0;
+ (int)scheduleAgentFromICSString:(NSString *)arg0;
+ (int)scheduleForceSendFromICSString:(NSString *)arg0;
+ (ICSUserAddress *)URLForNoMail;
+ (ICSUserAddress *)ICSStringFromCalendarUser:(int)arg0;
+ (ICSUserAddress *)ICSStringFromParticipationStatus:(int)arg0;
+ (ICSUserAddress *)ICSStringFromScheduleAgent:(int)arg0;
+ (ICSUserAddress *)ICSStringFromScheduleStatus:(int)arg0;
+ (ICSUserAddress *)ICSStringFromScheduleForceSend:(int)arg0;
+ (NSString *)ICSStringFromRole:(int)arg0;

- (NSString *)cn;
- (int)cutype;
- (int)partstat;
- (int)scheduleagent;
- (char)rsvp;
- (ICSDateValue *)partstatModified;
- (void)setEmail:(NSString *)arg0;
- (void)setCn:(NSString *)arg0;
- (void)setCutype:(int)arg0;
- (void)setPartstat:(int)arg0;
- (void)setRole:(int)arg0;
- (void)setScheduleagent:(int)arg0;
- (void)setRsvp:(char)arg0;
- (void)setPartstatModified:(ICSDateValue *)arg0;
- (ICSUserAddress *)initWithURL:(NSString *)arg0;
- (void)setURL:(NSString *)arg0;
- (NSString *)displayName;
- (NSString *)emailAddress;
- (ICSUserAddress *)initWithEmailAddress:(NSString *)arg0;
- (char)hasEmailAddress;
- (int)role;
- (NSString *)email;
- (NSString *)dir;
- (void)setDir:(NSString *)arg0;
- (id)propertiesToObscure;
- (id)parametersToObscure;
- (char)shouldObscureValue;
- (void)fixAddress;
- (char)isEmailAddress;
- (char)isHTTPAddress;
- (char)isHTTPSAddress;
- (void)setSchedulestatus:(int)arg0;
- (int)schedulestatus;
- (void)setScheduleforcesend:(int)arg0;
- (int)scheduleforcesend;
- (void)setX_apple_self_invited:(char)arg0;
- (char)x_apple_self_invited;
- (void)setX_calendarserver_email:(id)arg0;
- (id)x_calendarserver_email;

@end
