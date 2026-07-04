/* Runtime dump - AAFamilyInvite
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFamilyInvite : NSObject
{
    char _isChildTransferInvite;
    NSString * _code;
    NSString * _organizerFirstName;
    NSString * _organizerLastName;
    NSString * _organizerEmail;
    NSNumber * _organizerDSID;
    NSNumber * _recepientDSID;
    NSString * _childFirstName;
    NSString * _childLastName;
}

@property (copy, nonatomic) NSString * code;
@property (copy, nonatomic) NSString * organizerFirstName;
@property (copy, nonatomic) NSString * organizerLastName;
@property (copy, nonatomic) NSString * organizerEmail;
@property (copy, nonatomic) NSNumber * organizerDSID;
@property (copy, nonatomic) NSNumber * recepientDSID;
@property (nonatomic) char isChildTransferInvite;
@property (copy, nonatomic) NSString * childFirstName;
@property (copy, nonatomic) NSString * childLastName;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)code;
- (void).cxx_destruct;
- (NSString *)organizerFirstName;
- (void)setOrganizerFirstName:(NSString *)arg0;
- (NSString *)organizerLastName;
- (void)setOrganizerLastName:(NSString *)arg0;
- (NSNumber *)organizerDSID;
- (void)setOrganizerDSID:(NSNumber *)arg0;
- (NSNumber *)recepientDSID;
- (void)setRecepientDSID:(NSNumber *)arg0;
- (char)isChildTransferInvite;
- (void)setIsChildTransferInvite:(char)arg0;
- (NSString *)childFirstName;
- (void)setChildFirstName:(NSString *)arg0;
- (NSString *)childLastName;
- (void)setChildLastName:(NSString *)arg0;
- (void)setOrganizerEmail:(NSString *)arg0;
- (NSString *)organizerEmail;
- (void)setCode:(NSString *)arg0;

@end
