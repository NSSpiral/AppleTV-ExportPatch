/* Runtime dump - EKPersistentReminder
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentReminder : EKPersistentCalendarItem
{
    EKObjectID * _parentID;
}

@property (copy, nonatomic) NSDate * dueDate;
@property (copy, nonatomic) NSTimeZone * dueDateTimeZone;
@property (nonatomic) char dueDateAllDay;
@property (nonatomic) char completed;
@property (copy, nonatomic) NSDate * completionDate;
@property (nonatomic) unsigned int displayOrder;
@property (copy, nonatomic) EKObjectID * parentID;

+ (EKPersistentReminder *)generateUniqueIDWithReminder:(id)arg0 calendar:(NSCalendar *)arg1;

- (void)setCompleted:(char)arg0;
- (unsigned int)displayOrder;
- (void)setDisplayOrder:(unsigned int)arg0;
- (NSURL *)externalURI;
- (void)_sendModifiedNote;
- (NSDate *)dueDate;
- (NSTimeZone *)dueDateTimeZone;
- (char)dueDateAllDay;
- (NSDate *)completionDate;
- (void)setCompletionDate:(NSDate *)arg0;
- (void)setDueDate:(NSDate *)arg0;
- (void)setDueDateTimeZone:(NSTimeZone *)arg0;
- (void)setDueDateAllDay:(char)arg0;
- (char)isCompleted;
- (void)dealloc;
- (NSString *)description;
- (EKPersistentReminder *)copyWithZone:(struct _NSZone *)arg0;
- (EKObjectID *)parentID;
- (void)setParentID:(EKObjectID *)arg0;
- (char)validate:(id *)arg0;
- (int)entityType;

@end
