/* Runtime dump - HAPCharacteristicResponseTuple
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristicResponseTuple : NSObject
{
    HAPCharacteristic * _characteristic;
    NSError * _error;
}

@property (retain, nonatomic) HAPCharacteristic * characteristic;
@property (retain, nonatomic) NSError * error;

+ (HAPCharacteristicResponseTuple *)responseTupleForCharacteristic:(id)arg0 error:(NSError *)arg1;

- (void).cxx_destruct;
- (NSError *)error;
- (HAPCharacteristic *)characteristic;
- (void)setCharacteristic:(HAPCharacteristic *)arg0;
- (void)setError:(NSError *)arg0;

@end
