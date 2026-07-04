/* Runtime dump - HMCharacteristicEvent
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicEvent : HMEvent <NSSecureCoding>
{
    NSObject<NSCopying> * _triggerValue;
    HMCharacteristic * _characteristic;
}

@property (retain, nonatomic) HMCharacteristic * characteristic;
@property (copy, nonatomic) NSObject<NSCopying> * triggerValue;

+ (NSDictionary *)createWithDictionary:(NSDictionary *)arg0 home:(id)arg1;
+ (char)supportsSecureCoding;

- (id)_serializeForAdd;
- (void)_updateTriggerValue:(id)arg0 completionHandler:(id /* block */)arg1;
- (NSObject<NSCopying> *)triggerValue;
- (HMCharacteristicEvent *)initWithCharacteristic:(HMCharacteristic *)arg0 triggerValue:(NSObject<NSCopying> *)arg1;
- (void)setTriggerValue:(NSObject<NSCopying> *)arg0;
- (void)updateTriggerValue:(id)arg0 completionHandler:(id /* block */)arg1;
- (HMCharacteristicEvent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (HMCharacteristic *)characteristic;
- (void)setCharacteristic:(HMCharacteristic *)arg0;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end
