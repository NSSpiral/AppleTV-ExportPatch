/* Runtime dump - HMCharacteristicResponseTuple
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicResponseTuple : NSObject
{
    HMCharacteristic * _characteristic;
    NSError * _error;
}

@property (readonly, nonatomic) HMCharacteristic * characteristic;
@property (readonly, nonatomic) NSError * error;

+ (HMCharacteristicResponseTuple *)tupleWithCharacteristic:(HMCharacteristic *)arg0 error:(NSError *)arg1;

- (void).cxx_destruct;
- (NSError *)error;
- (HMCharacteristic *)characteristic;

@end
