/* Runtime dump - ICSTimeZoneBlock
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTimeZoneBlock : ICSComponent

@property (retain, nonatomic) ICSDate * dtstart;
@property (retain, nonatomic) NSArray * rdate;
@property (retain, nonatomic) NSArray * rrule;
@property (nonatomic) NSArray * tzname;
@property (nonatomic) int tzoffsetfrom;
@property (nonatomic) int tzoffsetto;

- (ICSDate *)dtstart;
- (void)setDtstart:(ICSDate *)arg0;
- (void)setRrule:(NSArray *)arg0;
- (NSArray *)rrule;
- (int)compare:(NSObject *)arg0;
- (char)validate:(id *)arg0;
- (void)setRdate:(NSArray *)arg0;
- (NSArray *)rdate;
- (int)tzoffsetfrom;
- (int)tzoffsetto;
- (NSArray *)tzname;
- (void)setTzname:(NSArray *)arg0;
- (void)setTzoffsetfrom:(int)arg0;
- (void)setTzoffsetto:(int)arg0;
- (void)addRecurrenceDate:(NSDate *)arg0;
- (NSDate *)computeTimeZoneChangeListFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1;

@end
