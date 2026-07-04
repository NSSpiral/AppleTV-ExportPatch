/* Runtime dump - HMIncomingHomeInvitation
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMIncomingHomeInvitation : HMHomeInvitation
{
    HMUser * _inviter;
    HMHomeManager * _homeManager;
}

@property (readonly, nonatomic) HMUser * inviter;
@property (readonly, copy, nonatomic) NSString * homeName;
@property (readonly, copy, nonatomic) NSUUID * homeUUID;
@property (weak, nonatomic) HMHomeManager * homeManager;

+ (NSData *)homeInvitationsFromEncodedData:(NSData *)arg0 homeManager:(HMHomeManager *)arg1;
+ (NSData *)homeInvitationsFromData:(NSData *)arg0 homeManager:(HMHomeManager *)arg1;
+ (char)supportsSecureCoding;

- (void)_configure:(id)arg0 clientQueue:(NSObject<OS_dispatch_queue> *)arg1 delegateCaller:(HMDelegateCaller *)arg2;
- (void)cancelInviteWithCompletionHandler:(id /* block */)arg0;
- (void)_cancelInviteWithCompletionHandler:(id /* block */)arg0;
- (HMIncomingHomeInvitation *)initWithInvitationData:(HMHomeInvitationData *)arg0 homeManager:(HMHomeManager *)arg1;
- (void)_acceptInviteWithCompletionHandler:(id /* block */)arg0;
- (HMIncomingHomeInvitation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSString *)homeName;
- (HMUser *)inviter;
- (void)acceptInviteWithCompletionHandler:(id /* block */)arg0;
- (HMHomeManager *)homeManager;
- (void)setHomeManager:(HMHomeManager *)arg0;
- (NSUUID *)homeUUID;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end
