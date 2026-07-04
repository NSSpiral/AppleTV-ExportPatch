/* Runtime dump - EKReminder
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKReminder : EKCalendarItem
{
    char hadRecurrences;
}

@property (copy, nonatomic) NSDateComponents * startDateComponents;
@property (copy, nonatomic) NSDateComponents * dueDateComponents;
@property (nonatomic) char completed;
@property (copy, nonatomic) NSDate * completionDate;
@property (nonatomic) int priority;
@property (nonatomic) unsigned int displayOrder;
@property (readonly, nonatomic) NSDate * dueDate;
@property (copy, nonatomic) NSURL * action;
@property (readonly, nonatomic) EKObjectID * parentID;
@property (readonly, nonatomic) EKAlarm * bestDisplayAlarm;
@property (nonatomic) char hadRecurrences;

+ (void)_removeSnoozedAlarmsFromReminder:(id)arg0 usingDueDate:(NSDate *)arg1;
+ (EKReminder *)reminderWithEventStore:(EKEventStore *)arg0;

- (EKReminder *)initWithPersistentObject:(EKPersistentObject *)arg0;
- (char)commit:(id *)arg0;
- (void)setCompleted:(char)arg0;
- (id)_persistentReminder;
- (unsigned int)displayOrder;
- (void)setDisplayOrder:(unsigned int)arg0;
- (NSURL *)externalURI;
- (void)_sendModifiedNote;
- (id)startDateForRecurrence;
- (void)snoozeAlarm:(id)arg0 withTimeIntervalFromNow:(double)arg1;
- (NSDate *)dueDate;
- (NSDateComponents *)dueDateComponents;
- (NSString *)reminderIdentifier;
- (NSDateComponents *)startDateComponents;
- (void)setStartDateComponents:(NSDateComponents *)arg0;
- (NSDate *)completionDate;
- (void)setCompletionDate:(NSDate *)arg0;
- (void)setDueDateComponents:(NSDateComponents *)arg0;
- (char)isCompleted;
- (void)clearParentID;
- (EKAlarm *)bestDisplayAlarm;
- (char)hadRecurrences;
- (void)setHadRecurrences:(char)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)setTimeZone:(NSTimeZone *)arg0;
- (void)setPriority:(int)arg0;
- (int)priority;
- (EKObjectID *)parentID;
- (char)validate:(id *)arg0;

@end
