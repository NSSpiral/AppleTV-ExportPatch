/* Runtime dump - HMCharacteristicWriteRequestTuple
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicWriteRequestTuple : NSObject
{
    HMCharacteristic * _characteristic;
    id _value;
}

@property (readonly, nonatomic) HMCharacteristic * characteristic;
@property (readonly, nonatomic) id value;

+ (HMCharacteristicWriteRequestTuple *)tupleWithCharacteristic:(HMCharacteristic *)arg0 value:(NSObject *)arg1;

- (void *)value;
- (void).cxx_destruct;
- (HMCharacteristic *)characteristic;

@end
