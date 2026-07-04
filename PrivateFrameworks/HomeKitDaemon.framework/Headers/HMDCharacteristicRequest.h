/* Runtime dump - HMDCharacteristicRequest
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicRequest : NSObject
{
    HMDCharacteristic * _characteristic;
    id _previousValue;
}

@property (readonly, nonatomic) HMDCharacteristic * characteristic;
@property (readonly, nonatomic) id previousValue;

+ (HMDCharacteristicRequest *)requestWithCharacteristic:(HMDCharacteristic *)arg0;

- (void).cxx_destruct;
- (HMDCharacteristic *)characteristic;
- (NSNumber *)previousValue;
- (HMDCharacteristicRequest *)initWithCharacteristic:(HMDCharacteristic *)arg0;

@end
