/* Runtime dump - HMHomeInvitation
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHomeInvitation : NSObject <HMObjectMerge, NSSecureCoding>
{
    HMHome * _home;
    HMHomeInvitationData * _invitationData;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDelegateCaller * _delegateCaller;
}

@property (readonly, copy, nonatomic) NSUUID * identifier;
@property (readonly, copy, nonatomic) NSDate * startDate;
@property (readonly, copy, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) int invitationState;
@property (weak, nonatomic) HMHome * home;
@property (retain, nonatomic) HMHomeInvitationData * invitationData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (retain, nonatomic) HMDelegateCaller * delegateCaller;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * uniqueIdentifier;

+ (char)supportsSecureCoding;

- (HMDelegateCaller *)delegateCaller;
- (void)setDelegateCaller:(HMDelegateCaller *)arg0;
- (void)_updateInvitationState:(int)arg0;
- (HMHomeInvitation *)initWithInvitationData:(HMHomeInvitationData *)arg0 home:(HMHome *)arg1;
- (void)cancelInviteWithCompletionHandler:(id /* block */)arg0;
- (HMHomeInvitation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSUUID *)identifier;
- (NSUUID *)uniqueIdentifier;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (HMHome *)home;
- (void)setHome:(HMHome *)arg0;
- (HMHomeInvitationData *)invitationData;
- (void)setClientQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMHomeInvitation *)initWithCoder:(NSCoder *)arg0 invitationData:(HMHomeInvitationData *)arg1;
- (void)setInvitationData:(HMHomeInvitationData *)arg0;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;
- (int)invitationState;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
