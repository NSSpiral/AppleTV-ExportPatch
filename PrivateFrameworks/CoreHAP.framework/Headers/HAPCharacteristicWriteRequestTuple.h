/* Runtime dump - HAPCharacteristicWriteRequestTuple
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristicWriteRequestTuple : NSObject
{
    HAPCharacteristic * _characteristic;
    id _value;
    NSData * _authorizationData;
    NSNumber * _enableEvents;
}

@property (retain, nonatomic) HAPCharacteristic * characteristic;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSData * authorizationData;
@property (retain, nonatomic) NSNumber * enableEvents;

+ (HAPCharacteristicWriteRequestTuple *)writeRequestTupleForCharacteristic:(id)arg0 value:(NSObject *)arg1 authorizationData:(NSData *)arg2;

- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void).cxx_destruct;
- (HAPCharacteristic *)characteristic;
- (NSData *)authorizationData;
- (void)setEnableEvents:(NSNumber *)arg0;
- (NSNumber *)enableEvents;
- (void)setCharacteristic:(HAPCharacteristic *)arg0;
- (void)setAuthorizationData:(NSData *)arg0;

@end
