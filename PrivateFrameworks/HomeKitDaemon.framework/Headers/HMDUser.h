/* Runtime dump - HMDUser
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUser : NSObject <NSSecureCoding>
{
    char _remoteGateway;
    HMDHome * _home;
    NSString * _userID;
    NSString * _pairingUsername;
    NSData * _publicKey;
    NSUUID * _uuid;
    unsigned int _privilege;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (weak, nonatomic) HMDHome * home;
@property (copy, nonatomic) NSString * userID;
@property (copy, nonatomic) NSUUID * uuid;
@property (readonly, copy, nonatomic) NSString * displayName;
@property (readonly, copy, nonatomic) NSString * pairingUsername;
@property (readonly, copy, nonatomic) NSData * publicKey;
@property (nonatomic) char remoteGateway;
@property (readonly, nonatomic) char currentUser;
@property (nonatomic) unsigned int privilege;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (readonly, copy, nonatomic) NSString * encodingRemoteDisplayName;

+ (char)supportsSecureCoding;
+ (HMDUser *)currentUserWithPriviledge:(unsigned int)arg0;

- (HMDUser *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)debugDescription;
- (void).cxx_destruct;
- (NSString *)displayName;
- (NSUUID *)uuid;
- (NSData *)publicKey;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (HMDHome *)home;
- (void)setHome:(HMDHome *)arg0;
- (NSString *)userID;
- (NSString *)pairingUsername;
- (char)isRemoteGateway;
- (char)mergeFromUser:(id)arg0;
- (unsigned int)privilege;
- (char)isCurrentUser;
- (void)setUserID:(NSString *)arg0;
- (void)configureWithHome:(HMDHome *)arg0;
- (HMDUser *)initWithUserID:(NSString *)arg0 pairingUsername:(NSString *)arg1 publicKey:(NSData *)arg2 privilege:(unsigned int)arg3;
- (void)updatePairingUsername:(id)arg0 publicKey:(NSData *)arg1;
- (id)residentCopy;
- (id)userCopy;
- (void)setRemoteGateway:(char)arg0;
- (NSString *)encodingRemoteDisplayName;
- (void)setPrivilege:(unsigned int)arg0;
- (void)setUuid:(NSUUID *)arg0;

@end
