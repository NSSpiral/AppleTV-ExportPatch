/* Runtime dump - EKInviteReplyNotification
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKInviteReplyNotification : EKObject

@property (readonly, nonatomic) EKCalendar * calendar;
@property (readonly, nonatomic) NSString * calendarName;
@property (readonly, nonatomic) NSString * shareeDisplayName;
@property (readonly, nonatomic) NSString * shareeAddress;
@property (readonly, nonatomic) NSString * shareeFirstName;
@property (readonly, nonatomic) NSString * shareeLastName;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSDate * creationDate;
@property (readonly, nonatomic) char alerted;

- (char)alerted;
- (void)clearAlertedStatus;
- (NSString *)lazyLoadRelationForKey:(NSString *)arg0;
- (NSString *)calendarName;
- (NSString *)shareeDisplayName;
- (NSString *)shareeAddress;
- (NSString *)shareeFirstName;
- (NSString *)shareeLastName;
- (NSNotification *)_persistentInviteReplyNotification;
- (EKCalendar *)calendar;
- (int)status;
- (NSDate *)creationDate;

@end
