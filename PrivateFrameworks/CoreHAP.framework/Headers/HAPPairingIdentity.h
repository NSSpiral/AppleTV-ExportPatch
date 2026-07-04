/* Runtime dump - HAPPairingIdentity
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPPairingIdentity : NSObject
{
    NSString * _identifier;
    HAPPairingKey * _publicKey;
    HAPPairingKey * _privateKey;
    unsigned int _permissions;
}

@property (readonly, copy, nonatomic) NSString * identifier;
@property (readonly, nonatomic) HAPPairingKey * publicKey;
@property (readonly, nonatomic) HAPPairingKey * privateKey;
@property (readonly, nonatomic) unsigned int permissions;

- (HAPPairingIdentity *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)identifier;
- (NSString *)shortDescription;
- (void).cxx_destruct;
- (NSString *)descriptionWithPointer:(char)arg0;
- (HAPPairingKey *)publicKey;
- (HAPPairingKey *)privateKey;
- (HAPPairingIdentity *)initWithIdentifier:(NSString *)arg0 publicKey:(HAPPairingKey *)arg1 privateKey:(HAPPairingKey *)arg2 permissions:(unsigned int)arg3;
- (unsigned int)permissions;

@end
