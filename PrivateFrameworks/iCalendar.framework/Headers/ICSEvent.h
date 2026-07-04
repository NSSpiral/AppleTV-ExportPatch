/* Runtime dump - ICSEvent
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSEvent : ICSComponent

@property (retain) NSArray * attach;
@property (retain) NSArray * attendee;
@property int classification;
@property (retain) ICSDate * created;
@property (retain) NSString * description;
@property (retain) ICSDate * dtend;
@property (retain) ICSDate * dtstamp;
@property (retain) ICSDate * dtstart;
@property (readonly) char isAllDay;
@property (retain) ICSDuration * duration;
@property (retain) NSArray * exdate;
@property (retain) NSArray * exrule;
@property (retain) ICSDate * last_modified;
@property (retain) NSString * location;
@property (retain) ICSUserAddress * organizer;
@property unsigned int sequence;
@property (retain) NSArray * rdate;
@property (retain) ICSDate * recurrence_id;
@property (retain) NSArray * rrule;
@property int status;
@property (retain) NSString * summary;
@property (nonatomic) int transp;
@property (retain) NSString * uid;
@property (retain) NSURL * url;
@property (retain) NSString * x_apple_dropbox;
@property (retain) NSString * x_apple_ews_changekey;
@property (retain) NSString * x_apple_ews_itemid;
@property char x_apple_ews_needsserverconfirmation;
@property (retain) NSString * x_apple_ews_permission;
@property (nonatomic) int x_apple_ews_busystatus;
@property (nonatomic) char x_apple_dontschedule;
@property char x_apple_ignore_on_restore;
@property (nonatomic) char x_apple_needs_reply;
@property (nonatomic) char x_wr_itipalreadysent;
@property (nonatomic) char x_wr_itipstatusattendeeml;
@property (nonatomic) char x_wr_itipstatusml;
@property (nonatomic) char x_wr_rsvpneeded;
@property (retain, nonatomic) NSArray * x_calendarserver_attendee_comment;
@property (retain, nonatomic) NSString * x_calendarserver_private_comment;
@property (retain) ICSStructuredLocation * x_apple_structured_location;
@property (retain) NSArray * conferences;
@property (retain) ICSStructuredLocation * x_apple_travel_start;
@property (retain) ICSTravelDuration * x_apple_travel_duration;
@property (retain) ICSTravelAdvisoryBehavior * x_apple_travel_advisory_behavior;
@property char forcedAllDay;

+ (NSString *)name;

- (int)transp;
- (NSString *)x_calendarserver_private_comment;
- (NSArray *)x_calendarserver_attendee_comment;
- (void)setX_apple_needs_reply:(char)arg0;
- (void)setTransp:(int)arg0;
- (void)setX_calendarserver_private_comment:(NSString *)arg0;
- (char)validate:(id *)arg0;
- (NSString *)propertiesToIncludeForChecksumVersion:(int)arg0;
- (NSString *)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg0;
- (void)fixComponent;
- (void)setX_calendarserver_attendee_comment:(NSArray *)arg0;
- (void)setX_apple_dontschedule:(char)arg0;
- (char)x_apple_dontschedule;
- (char)x_apple_needs_reply;
- (void)setX_wr_itipalreadysent:(char)arg0;
- (char)x_wr_itipalreadysent;
- (void)setX_wr_itipstatusattendeeml:(char)arg0;
- (char)x_wr_itipstatusattendeeml;
- (void)setX_wr_itipstatusml:(char)arg0;
- (char)x_wr_itipstatusml;
- (void)setX_wr_rsvpneeded:(char)arg0;
- (char)x_wr_rsvpneeded;
- (int)x_apple_ews_busystatus;
- (void)setX_apple_ews_busystatus:(int)arg0;
- (char)isDefaultAlarmDeleted;

@end
