/* Runtime dump - HMDCharacteristicWriteRequestTuple
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicWriteRequestTuple : NSObject
{
    HMDCharacteristic * _characteristic;
    id _value;
}

@property (readonly, nonatomic) HMDCharacteristic * characteristic;
@property (readonly, nonatomic) id value;

+ (HMDCharacteristicWriteRequestTuple *)tupleWithCharacteristic:(HMDCharacteristic *)arg0 value:(NSObject *)arg1;

- (NSString *)description;
- (void *)value;
- (void).cxx_destruct;
- (HMDCharacteristic *)characteristic;

@end
