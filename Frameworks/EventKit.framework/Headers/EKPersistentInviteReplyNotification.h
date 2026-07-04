/* Runtime dump - EKPersistentInviteReplyNotification
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentInviteReplyNotification : EKPersistentObject

@property (readonly, nonatomic) EKPersistentCalendar * calendar;
@property (readonly, nonatomic) NSString * calendarName;
@property (readonly, nonatomic) NSString * shareeDisplayName;
@property (readonly, nonatomic) NSString * shareeAddress;
@property (readonly, nonatomic) NSString * shareeFirstName;
@property (readonly, nonatomic) NSString * shareeLastName;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSDate * creationDate;
@property (readonly, nonatomic) char alerted;

+ (EKPersistentInviteReplyNotification *)defaultPropertiesToLoad;
+ (NSMutableDictionary *)relations;

- (char)alerted;
- (NSString *)calendarName;
- (NSString *)shareeDisplayName;
- (NSString *)shareeAddress;
- (NSString *)shareeFirstName;
- (NSString *)shareeLastName;
- (EKPersistentCalendar *)calendar;
- (int)status;
- (NSDate *)creationDate;

@end
