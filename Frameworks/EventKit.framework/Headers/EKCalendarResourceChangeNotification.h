/* Runtime dump - EKCalendarResourceChangeNotification
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarResourceChangeNotification : EKCalendarNotification
{
    NSString * _location;
    NSString * _calendarName;
    NSDate * _startDate;
    NSDate * _endDate;
    char _allDay;
    NSString * _eventID;
    unsigned int _changeType;
    char _dateChanged;
    char _timeChanged;
    char _locationChanged;
    char _titleChanged;
    NSNumber * _createCount;
    NSNumber * _updateCount;
    NSNumber * _deleteCount;
    NSDate * _startDateForNextOccurrence;
}

@property (retain, nonatomic) NSString * location;
@property (retain, nonatomic) NSString * calendarName;
@property (retain, nonatomic) NSDate * startDate;
@property (retain, nonatomic) NSDate * startDateForNextOccurrence;
@property (retain, nonatomic) NSDate * endDate;
@property (nonatomic) char allDay;
@property (retain, nonatomic) NSString * eventID;
@property (nonatomic) unsigned int changeType;
@property (nonatomic) char dateChanged;
@property (nonatomic) char timeChanged;
@property (nonatomic) char locationChanged;
@property (nonatomic) char titleChanged;
@property (retain, nonatomic) NSNumber * createCount;
@property (retain, nonatomic) NSNumber * updateCount;
@property (retain, nonatomic) NSNumber * deleteCount;

- (NSObject *)resourceChangeFromEventStore:(NSObject *)arg0;
- (char)dateChanged;
- (char)timeChanged;
- (char)titleChanged;
- (char)locationChanged;
- (char)needsAlert;
- (NSString *)calendarName;
- (void)setCalendarName:(NSString *)arg0;
- (void)setEventID:(NSString *)arg0;
- (NSNumber *)createCount;
- (void)setCreateCount:(NSNumber *)arg0;
- (NSNumber *)updateCount;
- (void)setUpdateCount:(NSNumber *)arg0;
- (void)setDeleteCount:(NSNumber *)arg0;
- (void)setDateChanged:(char)arg0;
- (void)setTimeChanged:(char)arg0;
- (void)setLocationChanged:(char)arg0;
- (void)setTitleChanged:(char)arg0;
- (void)setStartDateForNextOccurrence:(NSDate *)arg0;
- (NSDate *)startDateForNextOccurrence;
- (NSString *)eventID;
- (void)dealloc;
- (EKCalendarResourceChangeNotification *)initWithType:(int)arg0;
- (NSNumber *)deleteCount;
- (NSString *)location;
- (void)setAllDay:(char)arg0;
- (char)allDay;
- (void)setLocation:(NSString *)arg0;
- (void)setChangeType:(unsigned int)arg0;
- (unsigned int)changeType;
- (void)setStartDate:(NSDate *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
