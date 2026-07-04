/* Runtime dump - HMDCharacteristicWriteRequest
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest
{
    id _value;
    NSData * _authorizationData;
}

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSData * authorizationData;

+ (HMDCharacteristicWriteRequest *)writeRequestWithCharacteristic:(id)arg0 value:(NSObject *)arg1 authorizationData:(NSData *)arg2;

- (void *)value;
- (void).cxx_destruct;
- (NSData *)authorizationData;
- (HMDCharacteristicWriteRequest *)initWithCharacteristic:(HMCharacteristic *)arg0 value:(NSObject *)arg1 authorizationData:(NSData *)arg2;

@end
