/* Runtime dump - HMDCharacteristicWriteAction
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicWriteAction : NSObject <NSSecureCoding>
{
    NSUUID * _uuid;
    HMDActionSet * _actionSet;
    HMDCharacteristic * _characteristic;
    id _targetValue;
}

@property (readonly, copy, nonatomic) NSUUID * uuid;
@property (readonly, weak, nonatomic) HMDActionSet * actionSet;
@property (readonly, weak, nonatomic) HMDCharacteristic * characteristic;
@property (copy, nonatomic) id targetValue;

+ (char)supportsSecureCoding;

- (HMDCharacteristicWriteAction *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMDCharacteristicWriteAction *)init;
- (NSObject<NSCopying> *)targetValue;
- (void)setTargetValue:(NSObject<NSCopying> *)arg0;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (HMDCharacteristic *)characteristic;
- (void)replaceCharacteristic:(id)arg0;
- (HMDCharacteristicWriteAction *)initWithCharacteristic:(HMDCharacteristic *)arg0 targetValue:(NSObject<NSCopying> *)arg1;
- (void)configure:(id)arg0 actionSet:(HMDActionSet *)arg1;
- (HMDActionSet *)actionSet;

@end
