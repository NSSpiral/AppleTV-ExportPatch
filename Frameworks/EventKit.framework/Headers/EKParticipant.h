/* Runtime dump - EKParticipant
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKParticipant : EKObject <EKIdentityProtocol, NSCopying>
{
    EKCalendarItem * _owner;
}

@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) int participantStatus;
@property (readonly, nonatomic) int participantRole;
@property (readonly, nonatomic) int participantType;
@property (readonly, nonatomic) char isCurrentUser;
@property (readonly, nonatomic) NSString * UUID;
@property (copy, nonatomic) NSString * emailAddress;
@property (copy, nonatomic) NSURL * address;
@property (copy, nonatomic) NSString * firstName;
@property (copy, nonatomic) NSString * lastName;
@property (copy, nonatomic) NSString * comment;
@property (readonly, nonatomic) EKCalendarItem * owner;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void *)findABPersonByURL:(NSURL *)arg0 inAddressBook:(void *)arg1;

- (NSObject *)_persistentItem;
- (int)participantRole;
- (char)isEqualToParticipant:(id)arg0;
- (void *)ABRecordWithAddressBook:(void *)arg0;
- (NSString *)name;
- (EKParticipant *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)UUID;
- (NSURL *)URL;
- (int)participantType;
- (int)participantStatus;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (void)setDisplayName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (EKCalendarItem *)owner;
- (NSString *)emailAddress;
- (void)setEmailAddress:(NSString *)arg0;
- (void)setAddress:(NSURL *)arg0;
- (NSURL *)address;
- (char)isCurrentUser;
- (void)setComment:(NSString *)arg0;
- (NSString *)comment;

@end
