/* Runtime dump - EKCalendarSharedCalendarNotification
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification
{
    int _sharingInvitationResponse;
    unsigned int _allowedEntityTypes;
}

@property (nonatomic) int sharingInvitationResponse;
@property (nonatomic) unsigned int allowedEntityTypes;

- (unsigned int)allowedEntityTypes;
- (NSObject *)calendarFromEventStore:(NSObject *)arg0;
- (void)setAllowedEntityTypes:(unsigned int)arg0;
- (void)setSharingInvitationResponse:(int)arg0;
- (int)sharingInvitationResponse;
- (EKCalendarSharedCalendarNotification *)initWithType:(int)arg0;

@end
