/* Runtime dump - HAPBLEPeripheral
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBLEPeripheral : NSObject
{
    NSString * _accessoryName;
    NSUUID * _peripheralUUID;
    NSNumber * _hkType;
    NSNumber * _advInterval;
    NSNumber * _pairingStatusFlag;
    NSString * _pairingIdentifier;
    NSNumber * _category;
    NSNumber * _stateNumber;
    NSNumber * _configNumber;
    NSNumber * _compatibleVersion;
    double _lastSeen;
}

@property (readonly, nonatomic) NSString * accessoryName;
@property (readonly, nonatomic) NSUUID * peripheralUUID;
@property (readonly, nonatomic) NSNumber * hkType;
@property (readonly, nonatomic) NSNumber * advInterval;
@property (readonly, nonatomic) NSNumber * pairingStatusFlag;
@property (readonly, nonatomic) NSString * pairingIdentifier;
@property (readonly, nonatomic) NSNumber * category;
@property (readonly, nonatomic) NSNumber * stateNumber;
@property (readonly, nonatomic) NSNumber * configNumber;
@property (readonly, nonatomic) NSNumber * compatibleVersion;
@property (nonatomic) double lastSeen;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSNumber *)category;
- (void).cxx_destruct;
- (NSNumber *)configNumber;
- (void)setLastSeen:(double)arg0;
- (double)lastSeen;
- (NSNumber *)stateNumber;
- (NSString *)accessoryName;
- (NSNumber *)pairingStatusFlag;
- (NSString *)pairingIdentifier;
- (NSUUID *)peripheralUUID;
- (NSNumber *)hkType;
- (NSNumber *)advInterval;
- (NSNumber *)compatibleVersion;
- (HAPBLEPeripheral *)initWithName:(NSString *)arg0 peripheralUUID:(NSUUID *)arg1 hkType:(NSNumber *)arg2 advInterval:(NSNumber *)arg3 pairingStatusFlag:(NSNumber *)arg4 pairingIdentifier:(NSString *)arg5 category:(NSNumber *)arg6 stateNumber:(NSNumber *)arg7 configNumber:(NSNumber *)arg8 hapBLECompatibleVersion:(NSString *)arg9;

@end
