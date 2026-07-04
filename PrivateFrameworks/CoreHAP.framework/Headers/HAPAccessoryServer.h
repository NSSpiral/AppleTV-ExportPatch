/* Runtime dump - HAPAccessoryServer
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServer : NSObject
{
    NSString * _name;
    NSString * _identifier;
    char _hasPairings;
    char _reachable;
    char _incompatibleUpdate;
    NSNumber * _category;
    HAPAccessory * _primaryAccessory;
    NSArray * _accessories;
    NSString * _pairSetupPassword;
    NSString * _homeName;
    <HAPAccessoryServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    <HAPKeyStore> * _keyStore;
    NSHashTable * _internalDelegates;
    NSObject<OS_dispatch_queue> * _internalDelegateQueue;
}

@property (nonatomic) char reachable;
@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSNumber * category;
@property (retain, nonatomic) HAPAccessory * primaryAccessory;
@property (copy, nonatomic) NSArray * accessories;
@property (readonly, nonatomic) int linkType;
@property (nonatomic) char hasPairings;
@property (copy, nonatomic) NSString * pairSetupPassword;
@property (copy, nonatomic) NSString * homeName;
@property (readonly, weak) <HAPAccessoryServerDelegate> * delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * propertyQueue;
@property (readonly, nonatomic) char paired;
@property (nonatomic) char incompatibleUpdate;
@property (readonly, weak, nonatomic) <HAPKeyStore> * keyStore;
@property (readonly, nonatomic) NSHashTable * internalDelegates;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * internalDelegateQueue;

+ (char)isAccessoryServerWithIdentifierPaired:(NSString *)arg0 keyStore:(<HAPKeyStore> *)arg1;

- (HAPAccessoryServer *)init;
- (<HAPAccessoryServerDelegate> *)delegate;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setCategory:(NSNumber *)arg0;
- (NSNumber *)category;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (HAPAccessoryServer *)initWithKeystore:(id)arg0;
- (void)setAccessories:(NSArray *)arg0;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSArray *)accessories;
- (char)isPaired;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (<HAPKeyStore> *)keyStore;
- (void)enumerateInternalDelegatesUsingBlock:(id /* block */)arg0;
- (void)setHasPairings:(char)arg0;
- (void)enableEvents:(char)arg0 forCharacteristics:(GEOVCharacteristics *)arg1 withCompletionHandler:(id /* block */)arg2 queue:(/* block */ id)arg3;
- (HAPAccessory *)primaryAccessory;
- (int)linkType;
- (void)discoverAccessories;
- (void)startPairing;
- (void)continuePairingAfterAuthPrompt;
- (char)tryPairingPassword:(NSString *)arg0 error:(id *)arg1;
- (char)stopPairingWithError:(id *)arg0;
- (void)readValueForCharacteristic:(id)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)readCharacteristicValues:(NSArray *)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)writeValue:(id)arg0 forCharacteristic:(HMCharacteristic *)arg1 authorizationData:(NSData *)arg2 queue:(NSObject *)arg3 completionHandler:(id /* block */)arg4;
- (void)writeCharacteristicValues:(NSArray *)arg0 queue:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)handleUpdatesForCharacteristics:(id)arg0;
- (char)addPairingWithIdentifier:(NSString *)arg0 publicKey:(NSString *)arg1 admin:(char)arg2 queue:(NSObject *)arg3 completion:(id /* block */)arg4;
- (char)removePairingWithIdentifier:(NSString *)arg0 publicKey:(NSString *)arg1 queue:(NSObject *)arg2 completion:(id /* block */)arg3;
- (char)removePairingForCurrentControllerOnQueue:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)listPairingsWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completionHandler:(id /* block */)arg1;
- (void)identifyWithCompletion:(id /* block */)arg0;
- (void)setReachable:(char)arg0;
- (void)setPrimaryAccessory:(HAPAccessory *)arg0;
- (char)hasPairings;
- (NSObject<OS_dispatch_queue> *)propertyQueue;
- (char)isIncompatibleUpdate;
- (void)addInternalDelegate:(NSObject *)arg0;
- (void)notifyDelegateUpdatedHasPairings:(char)arg0;
- (void)notifyDelegateUpdatedName:(NSString *)arg0;
- (void)notifyDelegateUpdatedCategory:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)internalDelegateQueue;
- (NSHashTable *)internalDelegates;
- (void)removeInternalDelegate:(NSObject *)arg0;
- (char)isReachable;
- (NSString *)pairSetupPassword;
- (void)setPairSetupPassword:(NSString *)arg0;
- (NSString *)homeName;
- (void)setHomeName:(NSString *)arg0;
- (void)setIncompatibleUpdate:(char)arg0;
- (void)setDelegate:(<HAPAccessoryServerDelegate> *)arg0 queue:(NSObject *)arg1;

@end
