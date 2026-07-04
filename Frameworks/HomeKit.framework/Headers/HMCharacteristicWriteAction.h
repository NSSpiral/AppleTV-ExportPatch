/* Runtime dump - HMCharacteristicWriteAction
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding, HMObjectMerge>
{
    HMCharacteristic * _characteristic;
    NSObject<NSCopying> * _targetValue;
}

@property (retain, nonatomic) HMCharacteristic * characteristic;
@property (copy, nonatomic) NSObject<NSCopying> * targetValue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSUUID * uniqueIdentifier;

+ (NSDictionary *)_lookupActionWithInfo:(NSDictionary *)arg0 inArray:(NSArray *)arg1;
+ (NSDictionary *)_actionWithInfo:(NSDictionary *)arg0 home:(id)arg1;
+ (char)supportsSecureCoding;

- (id)_serializeForAdd;
- (void)_updateTargetValue:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)_configure:(id)arg0 actionSet:(NSSet *)arg1 clientQueue:(NSObject<OS_dispatch_queue> *)arg2 delegateCaller:(HMDelegateCaller *)arg3;
- (void)updateTargetValue:(id)arg0 completionHandler:(id /* block */)arg1;
- (char)_handleUpdates:(id)arg0;
- (HMCharacteristicWriteAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMCharacteristicWriteAction *)init;
- (NSObject<NSCopying> *)targetValue;
- (void)setTargetValue:(NSObject<NSCopying> *)arg0;
- (void).cxx_destruct;
- (HMCharacteristic *)characteristic;
- (void)setCharacteristic:(HMCharacteristic *)arg0;
- (HMCharacteristicWriteAction *)initWithCharacteristic:(HMCharacteristic *)arg0 targetValue:(NSObject<NSCopying> *)arg1;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end
