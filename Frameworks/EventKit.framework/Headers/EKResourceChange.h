/* Runtime dump - EKResourceChange
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKResourceChange : EKObject <EKIdentityProtocol>

@property (readonly, retain, nonatomic) EKCalendar * calendar;
@property (readonly, retain, nonatomic) EKCalendarItem * calendarItem;
@property (readonly, copy, nonatomic) NSString * changedByDisplayName;
@property (readonly, copy, nonatomic) NSURL * changedByAddress;
@property (readonly, copy, nonatomic) NSString * changedByFirstName;
@property (readonly, copy, nonatomic) NSString * changedByLastName;
@property (readonly, nonatomic) unsigned int changeType;
@property (readonly, copy, nonatomic) NSDate * timestamp;
@property (readonly, nonatomic) char dateChanged;
@property (readonly, nonatomic) char timeChanged;
@property (readonly, nonatomic) char titleChanged;
@property (readonly, nonatomic) char locationChanged;
@property (readonly, nonatomic) NSNumber * createCount;
@property (readonly, nonatomic) NSNumber * updateCount;
@property (readonly, nonatomic) NSNumber * deleteCount;
@property (readonly, nonatomic) NSString * deletedTitle;
@property (readonly, nonatomic) char alerted;
@property (readonly, nonatomic) unsigned int publicStatus;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)alerted;
- (EKCalendarItem *)calendarItem;
- (void)clearAlertedStatus;
- (NSString *)lazyLoadRelationForKey:(NSString *)arg0;
- (char)dateChanged;
- (char)timeChanged;
- (char)titleChanged;
- (char)locationChanged;
- (NSString *)deletedTitle;
- (NSString *)changedByDisplayName;
- (NSNumber *)createCount;
- (NSNumber *)updateCount;
- (NSURL *)changedByAddress;
- (NSString *)changedByFirstName;
- (NSString *)changedByLastName;
- (unsigned int)publicStatus;
- (NSDictionary *)_persistentResourceChange;
- (id)_calendarItemRelation;
- (NSDate *)timestamp;
- (NSString *)name;
- (NSNumber *)deleteCount;
- (EKCalendar *)calendar;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSString *)emailAddress;
- (unsigned int)changeType;

@end
