/* Runtime dump - HMDCharacteristicResponseTuple
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicResponseTuple : NSObject
{
    HMDCharacteristic * _characteristic;
    NSError * _error;
}

@property (readonly, nonatomic) HMDCharacteristic * characteristic;
@property (readonly, nonatomic) NSError * error;

+ (HMDCharacteristicResponseTuple *)tupleWithCharacteristic:(HMDCharacteristic *)arg0 error:(NSError *)arg1;

- (NSString *)description;
- (void).cxx_destruct;
- (NSError *)error;
- (HMDCharacteristic *)characteristic;

@end
