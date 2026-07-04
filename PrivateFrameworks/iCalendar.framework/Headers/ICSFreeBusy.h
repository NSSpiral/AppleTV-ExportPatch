/* Runtime dump - ICSFreeBusy
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSFreeBusy : ICSComponent

@property (retain) NSArray * attendee;
@property (retain) ICSDate * created;
@property (retain) ICSDate * dtend;
@property (retain) ICSDate * dtstamp;
@property (retain) ICSDate * dtstart;
@property (retain) ICSDuration * duration;
@property (retain, nonatomic) NSArray * freebusy;
@property (retain) ICSUserAddress * organizer;
@property (retain) NSString * summary;
@property (retain) NSString * uid;
@property (retain, nonatomic) NSString * x_calendarserver_mask_uid;
@property (retain, nonatomic) NSString * x_calendarserver_extended_freebusy;

+ (NSString *)name;

- (void)setX_calendarserver_mask_uid:(NSString *)arg0;
- (void)setX_calendarserver_extended_freebusy:(NSString *)arg0;
- (NSArray *)freebusy;
- (void)setFreebusy:(NSArray *)arg0;
- (NSString *)x_calendarserver_mask_uid;
- (NSString *)x_calendarserver_extended_freebusy;

@end
