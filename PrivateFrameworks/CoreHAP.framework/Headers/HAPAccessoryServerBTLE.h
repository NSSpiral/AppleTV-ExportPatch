/* Runtime dump - HAPAccessoryServerBTLE
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBTLE : HAPAccessoryServer
{
    NSNumber * _stateNumber;
    CBPeripheral * _peripheral;
    unsigned int _hapBLEProtocolVersion;
    HAPAccessoryServerBrowserBTLE * _browser;
    unsigned long long _resumeSessionID;
}

@property (retain, nonatomic) NSNumber * stateNumber;
@property (readonly, nonatomic) CBPeripheral * peripheral;
@property (readonly, nonatomic) unsigned int hapBLEProtocolVersion;
@property (readonly, nonatomic) unsigned long long resumeSessionID;
@property (readonly, weak, nonatomic) HAPAccessoryServerBrowserBTLE * browser;

+ (id)hapUUIDFromBTLEUUID:(id)arg0;

- (void).cxx_destruct;
- (HAPAccessoryServerBrowserBTLE *)browser;
- (int)linkType;
- (unsigned long long)resumeSessionID;
- (CBPeripheral *)peripheral;
- (NSNumber *)stateNumber;
- (void)setStateNumber:(NSNumber *)arg0;
- (void)handleDisconnectionWithError:(NSError *)arg0 completionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (void)handleConnectionWithError:(NSError *)arg0;
- (HAPAccessoryServerBTLE *)initWithPeripheral:(CBPeripheral *)arg0 name:(NSString *)arg1 pairingUsername:(NSString *)arg2 statusFlags:(NSNumber *)arg3 stateNumber:(NSNumber *)arg4 category:(NSString *)arg5 browser:(HAPAccessoryServerBrowserBTLE *)arg6 keyStore:(<HAPKeyStore> *)arg7;
- (char)updatePeripheralIdentifier:(id *)arg0;
- (char)updateResumeSessionID:(unsigned long long)arg0;
- (unsigned int)hapBLEProtocolVersion;
- (void)notifyDelegateUdpatedStateNumber;

@end
