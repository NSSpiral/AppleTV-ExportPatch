/* Runtime dump - EKPersistentResourceChange
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentResourceChange : EKPersistentObject

@property (readonly, copy, nonatomic) NSString * changedByDisplayName;
@property (readonly, copy, nonatomic) NSURL * changedByAddress;
@property (readonly, copy, nonatomic) NSString * changedByFirstName;
@property (readonly, copy, nonatomic) NSString * changedByLastName;
@property (readonly, retain, nonatomic) EKPersistentCalendar * calendar;
@property (readonly, retain, nonatomic) EKPersistentCalendarItem * calendarItem;
@property (readonly, nonatomic) unsigned int changeType;
@property (readonly, copy, nonatomic) NSDate * timestamp;
@property (readonly, nonatomic) unsigned int changedProperties;
@property (readonly, nonatomic) NSNumber * createCount;
@property (readonly, nonatomic) NSNumber * updateCount;
@property (readonly, nonatomic) NSNumber * deleteCount;
@property (readonly, nonatomic) NSString * deletedTitle;
@property (readonly, nonatomic) char alerted;
@property (readonly, nonatomic) unsigned int publicStatus;

+ (EKPersistentResourceChange *)defaultPropertiesToLoad;
+ (NSMutableDictionary *)relations;

- (char)alerted;
- (EKPersistentCalendarItem *)calendarItem;
- (NSString *)deletedTitle;
- (NSString *)changedByDisplayName;
- (NSNumber *)createCount;
- (NSNumber *)updateCount;
- (NSURL *)changedByAddress;
- (NSString *)changedByFirstName;
- (NSString *)changedByLastName;
- (unsigned int)changedProperties;
- (unsigned int)publicStatus;
- (NSDate *)timestamp;
- (NSNumber *)deleteCount;
- (EKPersistentCalendar *)calendar;
- (unsigned int)changeType;

@end
