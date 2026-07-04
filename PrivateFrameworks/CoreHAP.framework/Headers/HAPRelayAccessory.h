/* Runtime dump - HAPRelayAccessory
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate, HAPRelayActivationClientDelegate, HAPRelayPairingClientDelegate>
{
    char _relayEnabled;
    HAPRelayActivationClient * _relayActivationClient;
    HAPRelayPairingClient * _relayPairingClient;
    unsigned int _relayState;
    HAPCharacteristic * _relayControlPointCharacteristic;
    HAPCharacteristic * _relayEnabledCharacteristic;
    NSString * _relayAccessoryIdentifier;
}

@property (nonatomic) char relayEnabled;
@property (readonly, nonatomic) unsigned int relayState;
@property (readonly, nonatomic) HAPRelayActivationClient * relayActivationClient;
@property (readonly, nonatomic) HAPRelayPairingClient * relayPairingClient;
@property (retain, nonatomic) HAPCharacteristic * relayControlPointCharacteristic;
@property (retain, nonatomic) HAPCharacteristic * relayEnabledCharacteristic;
@property (retain, nonatomic) NSString * relayAccessoryIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (HAPRelayAccessory *)requiredRelayServiceCharacteristics;

- (void).cxx_destruct;
- (void)accessoryServer:(HAPAccessoryServer *)arg0 didUpdateValueForCharacteristic:(HAPCharacteristic *)arg1;
- (HAPRelayAccessory *)initWithServer:(NSObject *)arg0 instanceID:(NSNumber *)arg1 parsedServices:(id)arg2;
- (char)_parseServices;
- (HAPCharacteristic *)relayControlPointCharacteristic;
- (void)_setRelayEnabled:(char)arg0;
- (void)_updateRelayEnabled:(char)arg0;
- (HAPCharacteristic *)relayEnabledCharacteristic;
- (unsigned int)_relayState;
- (HAPRelayActivationClient *)_relayActivationClient;
- (void)_stopRelayActivationWithError:(NSError *)arg0;
- (void)_setRelayActivationClient:(NSObject *)arg0;
- (void)_stopRelayPairingWithError:(NSError *)arg0;
- (void)_handleRelayControlPointCharacteristicTransactionWithTLV8Data:(NSData *)arg0 completionHandler:(id /* block */)arg1;
- (void)_handleRelayActivationChallenge:(NSObject *)arg0;
- (void)_handleRelayActivationCertificate:(NSObject *)arg0;
- (HAPRelayPairingClient *)_relayPairingClient;
- (void)_setRelayPairingClient:(NSObject *)arg0;
- (void)_handleRelayPairingIdentifierRequest;
- (void)setRelayAccessoryIdentifier:(NSString *)arg0;
- (NSString *)relayAccessoryIdentifier;
- (void)_handleRelayPairingPairingTokenRequestForControllerIdentifier:(NSString *)arg0;
- (void)_handleRelayPairingAccessTokenRequestWithAccessToken:(NSString *)arg0 accessoryIdentifier:(NSString *)arg1;
- (char)_parseRelayService:(NSObject *)arg0;
- (void)setRelayControlPointCharacteristic:(HAPCharacteristic *)arg0;
- (void)_setRelayState:(unsigned int)arg0;
- (void)setRelayEnabledCharacteristic:(HAPCharacteristic *)arg0;
- (void)relayActivationClient:(HAPRelayActivationClient *)arg0 didCloseWithError:(NSError *)arg1;
- (void)relayActivationClient:(HAPRelayActivationClient *)arg0 didReceiveChallenge:(NSData *)arg1;
- (void)relayActivationClient:(HAPRelayActivationClient *)arg0 didReceiveRelayCertificate:(NSData *)arg1;
- (void)relayPairingClient:(HAPRelayPairingClient *)arg0 didCloseWithError:(NSError *)arg1;
- (void)relayPairingClient:(HAPRelayPairingClient *)arg0 didReceiveControllerIdentifier:(NSString *)arg1;
- (void)relayPairingClient:(HAPRelayPairingClient *)arg0 didReceiveAccessToken:(NSData *)arg1 accessoryIdentifier:(NSString *)arg2;
- (char)supportsRelay;
- (char)isRelayEnabled;
- (void)setRelayEnabled:(char)arg0;
- (unsigned int)relayState;
- (HAPRelayActivationClient *)relayActivationClient;
- (void)startRelayActivationWithActivationClient:(NSObject *)arg0;
- (HAPRelayPairingClient *)relayPairingClient;
- (void)startRelayPairingWithPairingClient:(NSObject *)arg0;
- (void)addRelayPairingWithIdentifier:(NSString *)arg0 accessToken:(NSString *)arg1 admin:(char)arg2 queue:(NSObject *)arg3 completionHandler:(id /* block */)arg4;
- (void)removeRelayPairingWithIdentifier:(NSString *)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;

@end
