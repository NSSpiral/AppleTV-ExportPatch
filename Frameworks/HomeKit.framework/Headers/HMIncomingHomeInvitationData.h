/* Runtime dump - HMIncomingHomeInvitationData
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMIncomingHomeInvitationData : HMHomeInvitationData
{
    NSString * _inviterUserID;
    NSString * _homeName;
    NSUUID * _homeUUID;
    NSString * _inviterName;
    NSUUID * _inviterUUID;
}

@property (readonly, nonatomic) NSString * inviterUserID;
@property (readonly, copy, nonatomic) NSString * homeName;
@property (readonly, copy, nonatomic) NSUUID * homeUUID;
@property (readonly, copy, nonatomic) NSString * inviterName;
@property (readonly, copy, nonatomic) NSUUID * inviterUUID;

+ (char)supportsSecureCoding;

- (HMIncomingHomeInvitationData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)homeName;
- (HMIncomingHomeInvitationData *)initWithInviterUserID:(NSString *)arg0 invitationIdentifier:(NSString *)arg1 inviterName:(NSString *)arg2 invitationState:(int)arg3 homeName:(NSString *)arg4 homeUUID:(NSUUID *)arg5 expiryDate:(NSDate *)arg6;
- (NSUUID *)homeUUID;
- (NSString *)inviterUserID;
- (NSUUID *)inviterUUID;
- (NSString *)inviterName;

@end
