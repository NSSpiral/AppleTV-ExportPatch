/* Runtime dump - EKCalendarInviteReplyNotification
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarInviteReplyNotification : EKCalendarNotification
{
    int _status;
    unsigned int _allowedEntityTypes;
}

@property (nonatomic) int status;
@property (nonatomic) unsigned int allowedEntityTypes;

- (unsigned int)allowedEntityTypes;
- (NSObject *)inviteReplyNotificationFromEventStore:(NSObject *)arg0;
- (void)setAllowedEntityTypes:(unsigned int)arg0;
- (EKCalendarInviteReplyNotification *)initWithType:(int)arg0;
- (int)status;
- (void)setStatus:(int)arg0;

@end
