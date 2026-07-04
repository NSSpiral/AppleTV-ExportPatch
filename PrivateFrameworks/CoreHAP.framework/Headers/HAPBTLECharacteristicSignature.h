/* Runtime dump - HAPBTLECharacteristicSignature
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLECharacteristicSignature : NSObject
{
    char _authenticated;
    NSUUID * _characteristicType;
    NSNumber * _serviceInstanceID;
    NSUUID * _serviceType;
    unsigned int _characteristicProperties;
    HAPCharacteristicMetadata * _characteristicMetadata;
}

@property (readonly, copy, nonatomic) NSUUID * characteristicType;
@property (readonly, copy, nonatomic) NSNumber * serviceInstanceID;
@property (readonly, copy, nonatomic) NSUUID * serviceType;
@property (readonly, nonatomic) unsigned int characteristicProperties;
@property (readonly, nonatomic) HAPCharacteristicMetadata * characteristicMetadata;
@property (readonly, nonatomic) char authenticated;

- (void).cxx_destruct;
- (HAPBTLECharacteristicSignature *)initWithCharacteristicType:(NSUUID *)arg0 serviceInstanceID:(NSNumber *)arg1 serviceType:(NSUUID *)arg2 characteristicProperties:(unsigned int)arg3 characteristicMetadata:(HAPCharacteristicMetadata *)arg4 authenticated:(char)arg5;
- (NSUUID *)characteristicType;
- (NSNumber *)serviceInstanceID;
- (NSUUID *)serviceType;
- (unsigned int)characteristicProperties;
- (HAPCharacteristicMetadata *)characteristicMetadata;
- (char)isAuthenticated;

@end
