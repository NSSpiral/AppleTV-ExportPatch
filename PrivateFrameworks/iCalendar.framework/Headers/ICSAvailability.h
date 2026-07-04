/* Runtime dump - ICSAvailability
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSAvailability : ICSComponent

@property (retain) ICSDate * created;
@property (retain) NSString * uid;
@property (retain) ICSDate * dtstamp;
@property (retain) ICSDuration * duration;
@property (retain) ICSDate * dtstart;
@property (retain) ICSDate * dtend;
@property (retain) ICSDate * last_modified;
@property unsigned int sequence;
@property (retain) ICSUserAddress * organizer;
@property (retain) NSString * summary;
@property (retain) NSURL * url;

+ (NSString *)name;

@end
