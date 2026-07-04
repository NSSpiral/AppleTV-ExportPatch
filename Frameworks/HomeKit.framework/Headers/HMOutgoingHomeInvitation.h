/* Runtime dump - HMOutgoingHomeInvitation
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMOutgoingHomeInvitation : HMHomeInvitation
{
    HMUser * _invitee;
}

@property (readonly, nonatomic) HMUser * invitee;

+ (NSData *)homeInvitationsFromEncodedData:(NSData *)arg0 home:(id)arg1;
+ (NSData *)homeInvitationsFromData:(NSData *)arg0 home:(id)arg1;
+ (char)supportsSecureCoding;

- (void)_configure:(id)arg0 clientQueue:(NSObject<OS_dispatch_queue> *)arg1 delegateCaller:(HMDelegateCaller *)arg2;
- (HMOutgoingHomeInvitation *)initWithInvitationData:(HMHomeInvitationData *)arg0 home:(HMHome *)arg1;
- (void)cancelInviteWithCompletionHandler:(id /* block */)arg0;
- (void)_cancelInviteWithCompletionHandler:(id /* block */)arg0;
- (HMUser *)invitee;
- (HMOutgoingHomeInvitation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end
