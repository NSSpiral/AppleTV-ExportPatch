/* Runtime dump - HMEvent
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMEvent : NSObject <NSSecureCoding, HMObjectMerge>
{
    NSUUID * _uuid;
    HMEventTrigger * _eventTrigger;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDelegateCaller * _delegateCaller;
}

@property (readonly, copy, nonatomic) NSUUID * uniqueIdentifier;
@property (retain, nonatomic) NSUUID * uuid;
@property (weak, nonatomic) HMEventTrigger * eventTrigger;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (retain, nonatomic) HMDelegateCaller * delegateCaller;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (void)_configure:(id)arg0 eventTrigger:(HMEventTrigger *)arg1 clientQueue:(NSObject<OS_dispatch_queue> *)arg2 delegateCaller:(HMDelegateCaller *)arg3;
- (HMDelegateCaller *)delegateCaller;
- (id)_serializeForAdd;
- (void)setDelegateCaller:(HMDelegateCaller *)arg0;
- (void)_setUuidAndUniqueId:(NSObject *)arg0;
- (HMEvent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMEvent *)init;
- (NSUUID *)uniqueIdentifier;
- (void)_invalidate;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (void)setClientQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setEventTrigger:(HMEventTrigger *)arg0;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMEventTrigger *)eventTrigger;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;
- (void)setUuid:(NSUUID *)arg0;

@end
