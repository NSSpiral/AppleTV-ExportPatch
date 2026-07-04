/* Runtime dump - HMOutgoingHomeInvitationData
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMOutgoingHomeInvitationData : HMHomeInvitationData
{
    NSString * _inviteeUserID;
    NSString * _inviteeName;
    NSUUID * _inviteeUUID;
}

@property (readonly, copy, nonatomic) NSString * inviteeUserID;
@property (readonly, copy, nonatomic) NSString * inviteeName;
@property (readonly, copy, nonatomic) NSUUID * inviteeUUID;

+ (char)supportsSecureCoding;

- (HMOutgoingHomeInvitationData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (HMOutgoingHomeInvitationData *)initWithInviteeUserID:(NSString *)arg0 inviteeName:(NSString *)arg1 invitationState:(int)arg2 expiryDate:(NSDate *)arg3;
- (NSString *)inviteeUserID;
- (NSUUID *)inviteeUUID;
- (NSString *)inviteeName;

@end
