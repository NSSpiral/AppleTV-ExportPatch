/* Runtime dump - HMAction
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMAction : NSObject <HMObjectMerge>
{
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
    HMActionSet * _actionSet;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDelegateCaller * _delegateCaller;
    unsigned int _actionType;
}

@property (readonly, copy, nonatomic) NSUUID * uniqueIdentifier;
@property (retain, nonatomic) NSUUID * uuid;
@property (weak, nonatomic) HMActionSet * actionSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (retain, nonatomic) HMDelegateCaller * delegateCaller;
@property (nonatomic) unsigned int actionType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)_lookupActionWithInfo:(NSDictionary *)arg0 inArray:(NSArray *)arg1;
+ (NSDictionary *)_actionWithInfo:(NSDictionary *)arg0 home:(id)arg1;

- (HMDelegateCaller *)delegateCaller;
- (id)_serializeForAdd;
- (void)setDelegateCaller:(HMDelegateCaller *)arg0;
- (void)setActionSet:(HMActionSet *)arg0;
- (void)_configure:(id)arg0 actionSet:(HMActionSet *)arg1 clientQueue:(NSObject<OS_dispatch_queue> *)arg2 delegateCaller:(HMDelegateCaller *)arg3;
- (char)_handleUpdates:(id)arg0;
- (HMAction *)init;
- (NSUUID *)uniqueIdentifier;
- (void)_invalidate;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (void)setClientQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setPropertyQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (HMActionSet *)actionSet;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;
- (void)setUuid:(NSUUID *)arg0;
- (void)setActionType:(unsigned int)arg0;
- (unsigned int)actionType;

@end
