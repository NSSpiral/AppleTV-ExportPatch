/* Runtime dump - ICSJournal
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSJournal : ICSComponent

@property (retain) NSArray * attach;
@property (retain) NSArray * attendee;
@property int classification;
@property (retain) ICSDate * created;
@property (retain) NSString * description;
@property (retain) ICSDate * dtstamp;
@property (retain) ICSDate * dtstart;
@property (retain) NSArray * exdate;
@property (retain) NSArray * exrule;
@property (retain) ICSDate * last_modified;
@property (retain) ICSUserAddress * organizer;
@property (retain) NSArray * rdate;
@property (retain) ICSDate * recurrence_id;
@property (retain) NSArray * rrule;
@property unsigned int sequence;
@property int status;
@property (retain) NSString * summary;
@property (retain) NSString * uid;
@property (retain) NSURL * url;

+ (NSString *)name;

- (char)validate:(id *)arg0;

@end
