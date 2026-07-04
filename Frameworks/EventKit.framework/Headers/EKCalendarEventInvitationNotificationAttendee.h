/* Runtime dump - EKCalendarEventInvitationNotificationAttendee
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol>
{
    char _statusChanged;
    char _commentChanged;
    NSString * _name;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _emailAddress;
    NSURL * _url;
    int _participantStatus;
    NSString * _comment;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * firstName;
@property (readonly, nonatomic) NSString * lastName;
@property (readonly, nonatomic) NSString * emailAddress;
@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) char statusChanged;
@property (readonly, nonatomic) char commentChanged;
@property (readonly, nonatomic) int participantStatus;
@property (readonly, nonatomic) NSString * comment;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)commentChanged;
- (char)statusChanged;
- (EKCalendarEventInvitationNotificationAttendee *)initWithAttendee:(NSArray *)arg0;
- (void)dealloc;
- (NSString *)name;
- (NSURL *)url;
- (int)participantStatus;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSString *)emailAddress;
- (NSString *)comment;

@end
