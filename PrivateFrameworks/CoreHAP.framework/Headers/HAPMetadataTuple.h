/* Runtime dump - HAPMetadataTuple
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadataTuple : NSObject
{
    NSString * _characteristicName;
    NSString * _serviceName;
}

@property (readonly, nonatomic) NSString * characteristicName;
@property (readonly, nonatomic) NSString * serviceName;

- (void).cxx_destruct;
- (HAPMetadataTuple *)initWithCharacteristic:(HMCharacteristic *)arg0 service:(NSObject *)arg1;
- (NSString *)characteristicName;
- (NSString *)serviceName;

@end
