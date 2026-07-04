/* Runtime dump - ICSTodo
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTodo : ICSComponent

@property (retain) NSArray * attach;
@property (retain) NSArray * attendee;
@property int classification;
@property (retain, nonatomic) ICSDate * completed;
@property (nonatomic) int percentComplete;
@property (retain) ICSDate * created;
@property (retain) NSString * description;
@property (retain) ICSDate * dtstamp;
@property (retain) ICSDate * dtstart;
@property (retain, nonatomic) ICSDate * due;
@property (retain) ICSDuration * duration;
@property (retain) NSArray * exdate;
@property (retain) NSArray * exrule;
@property (retain) ICSDate * last_modified;
@property (retain) NSString * location;
@property (retain) ICSUserAddress * organizer;
@property unsigned int priority;
@property (retain) NSArray * rdate;
@property (retain) ICSDate * recurrence_id;
@property (retain) NSArray * rrule;
@property unsigned int sequence;
@property int status;
@property (retain) NSString * summary;
@property (retain) NSString * uid;
@property (retain) NSURL * url;
@property (retain) NSString * x_apple_ews_changekey;
@property (retain) NSString * x_apple_ews_itemid;
@property char x_apple_ews_needsserverconfirmation;
@property (retain) NSString * x_apple_ews_permission;
@property (nonatomic) unsigned int x_apple_sort_order;
@property (retain) ICSStructuredLocation * x_apple_structured_location;
@property (retain) NSArray * conferences;
@property (retain, nonatomic) NSArray * x_apple_activity;

+ (NSString *)name;

- (ICSDate *)due;
- (ICSDate *)completed;
- (void)setCompleted:(ICSDate *)arg0;
- (NSArray *)x_apple_activity;
- (unsigned int)x_apple_sort_order;
- (void)setX_apple_activity:(NSArray *)arg0;
- (void)setDue:(ICSDate *)arg0;
- (void)setX_apple_sort_order:(unsigned int)arg0;
- (int)percentComplete;
- (void)setPercentComplete:(int)arg0;
- (char)validate:(id *)arg0;
- (NSString *)propertiesToIncludeForChecksumVersion:(int)arg0;
- (void)fixComponent;

@end
