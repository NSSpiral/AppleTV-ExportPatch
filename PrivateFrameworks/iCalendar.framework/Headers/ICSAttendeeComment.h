/* Runtime dump - ICSAttendeeComment
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSAttendeeComment : ICSProperty

@property (retain, nonatomic) NSString * x_calendarserver_attendee_ref;
@property (retain, nonatomic) ICSDateValue * x_calendarserver_dtstamp;

- (NSString *)x_calendarserver_attendee_ref;
- (void)setComment:(MSASComment *)arg0;
- (id)parametersToObscure;
- (char)shouldObscureValue;
- (ICSAttendeeComment *)initWithComment:(MSASComment *)arg0;
- (void)setX_calendarserver_attendee_ref:(NSString *)arg0;
- (void)setX_calendarserver_dtstamp:(ICSDateValue *)arg0;
- (ICSDateValue *)x_calendarserver_dtstamp;

@end
