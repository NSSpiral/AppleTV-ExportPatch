/* Runtime dump - EKCalendarEventInvitationNotification
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarEventInvitationNotification : EKCalendarNotification
{
    char _allDay;
    char _hasRecurrenceRules;
    char _timeChanged;
    char _dateChanged;
    char _locationChanged;
    char _attendeeReplyChanged;
    NSString * _location;
    NSDate * _startDate;
    NSDate * _startDateForNextOccurrence;
    NSDate * _endDate;
    NSDate * _participationStatusModifiedDate;
    int _participationStatus;
    int _status;
    NSArray * _attendees;
}

@property (retain, nonatomic) NSString * location;
@property (retain, nonatomic) NSDate * startDate;
@property (retain, nonatomic) NSDate * startDateForNextOccurrence;
@property (retain, nonatomic) NSDate * endDate;
@property (retain, nonatomic) NSDate * participationStatusModifiedDate;
@property (nonatomic) int participationStatus;
@property (nonatomic) int status;
@property (nonatomic) char allDay;
@property (nonatomic) char hasRecurrenceRules;
@property (nonatomic) char timeChanged;
@property (nonatomic) char dateChanged;
@property (nonatomic) char locationChanged;
@property (nonatomic) char attendeeReplyChanged;
@property (retain, nonatomic) NSArray * attendees;

- (char)isAllDay;
- (NSObject *)eventFromEventStore:(NSObject *)arg0;
- (int)participationStatus;
- (char)hasRecurrenceRules;
- (NSDate *)participationStatusModifiedDate;
- (NSArray *)attendees;
- (void)setParticipationStatus:(int)arg0;
- (char)dateChanged;
- (char)timeChanged;
- (char)locationChanged;
- (char)attendeeReplyChanged;
- (void)setAttendees:(NSArray *)arg0;
- (void)setParticipationStatusModifiedDate:(NSDate *)arg0;
- (EKCalendarEventInvitationNotification *)initWithEvent:(NSObject *)arg0;
- (void)setDateChanged:(char)arg0;
- (void)setTimeChanged:(char)arg0;
- (void)setLocationChanged:(char)arg0;
- (void)setStartDateForNextOccurrence:(NSDate *)arg0;
- (void)setHasRecurrenceRules:(char)arg0;
- (void)setAttendeeReplyChanged:(char)arg0;
- (NSDate *)startDateForNextOccurrence;
- (void)dealloc;
- (NSString *)location;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setAllDay:(char)arg0;
- (void)setLocation:(NSString *)arg0;
- (void)setStartDate:(NSDate *)arg0;
- (void)setEndDate:(NSDate *)arg0;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
