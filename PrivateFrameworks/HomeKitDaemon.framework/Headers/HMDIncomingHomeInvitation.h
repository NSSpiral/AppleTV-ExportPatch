/* Runtime dump - HMDIncomingHomeInvitation
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIncomingHomeInvitation : HMDHomeInvitation
{
    NSData * _inviterPublicKey;
    NSString * _inviterControllerName;
}

@property (readonly, nonatomic) NSDictionary * bulletinContext;
@property (readonly, copy, nonatomic) NSString * homeName;
@property (readonly, copy, nonatomic) NSUUID * homeUUID;
@property (readonly, copy, nonatomic) NSData * inviterPublicKey;
@property (readonly, copy, nonatomic) NSString * inviterControllerName;
@property (readonly, copy, nonatomic) NSString * inviterUserID;

+ (char)supportsSecureCoding;

- (HMDIncomingHomeInvitation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSString *)homeName;
- (struct NSDictionary *)bulletinContext;
- (NSUUID *)homeUUID;
- (NSString *)inviterUserID;
- (NSString *)inviterControllerName;
- (NSData *)inviterPublicKey;
- (HMDIncomingHomeInvitation *)initWithInviterUserID:(NSString *)arg0 invitationIdentifier:(NSString *)arg1 invitationState:(int)arg2 homeName:(NSString *)arg3 homeUUID:(NSUUID *)arg4 inviterPublicKey:(NSData *)arg5 inviterControllerName:(NSString *)arg6 expiryDate:(NSDate *)arg7;

@end
