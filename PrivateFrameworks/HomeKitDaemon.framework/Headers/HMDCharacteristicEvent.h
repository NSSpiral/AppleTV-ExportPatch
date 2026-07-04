/* Runtime dump - HMDCharacteristicEvent
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicEvent : HMDEvent <NSSecureCoding>
{
    HMDCharacteristic * _characteristic;
    id _eventValue;
}

@property (readonly, nonatomic) HMDCharacteristic * characteristic;
@property (retain, nonatomic) id eventValue;

+ (char)supportsSecureCoding;
+ (NSDictionary *)characteristicEventWithDictionary:(NSDictionary *)arg0 home:(id)arg1 error:(id *)arg2;

- (HMDCharacteristicEvent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (HMDCharacteristic *)characteristic;
- (id)eventValue;
- (void)setEventValue:(id)arg0;
- (HMDCharacteristicEvent *)initWithCharacteristic:(HMDCharacteristic *)arg0 eventValue:(id)arg1;

@end
