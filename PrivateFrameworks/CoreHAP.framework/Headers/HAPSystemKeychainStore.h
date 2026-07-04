/* Runtime dump - HAPSystemKeychainStore
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPSystemKeychainStore : NSObject <HAPKeyStore>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _activeControllerIdentifier;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSString * activeControllerIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (HAPSystemKeychainStore *)allocWithZone:(struct _NSZone *)arg0;
+ (NSObject *)systemStore;

- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)getControllerPublicKey:(id *)arg0 secretKey:(id *)arg1 username:(id *)arg2 allowCreation:(char)arg3 error:(id *)arg4;
- (NSData *)readPublicKeyForAccessoryName:(NSString *)arg0 registeredWithHomeKit:(char *)arg1 error:(id *)arg2;
- (char)registerAccessoryWithHomeKit:(NSString *)arg0 error:(id *)arg1;
- (char)removeAccessoryKeyForName:(NSString *)arg0 error:(id *)arg1;
- (char)savePublicKey:(NSData *)arg0 forAccessoryName:(NSString *)arg1 error:(id *)arg2;
- (char)getControllerPublicKey:(id *)arg0 secretKey:(id *)arg1 keyPair:(id *)arg2 username:(id *)arg3 allowCreation:(char)arg4 error:(id *)arg5;
- (long)_getControllerPublicKey:(id *)arg0 secretKey:(id *)arg1 keyPair:(id *)arg2 username:(id *)arg3;
- (long)_createControllerPublicKey:(id *)arg0 secretKey:(id *)arg1 keyPair:(id *)arg2 username:(id *)arg3;
- (NSObject *)_getKeychainItemsForAccessGroup:(NSObject *)arg0 type:(NSObject *)arg1 account:(NSObject *)arg2 shouldReturnData:(char)arg3 error:(int *)arg4;
- (NSString *)activeControllerIdentifier;
- (long)_addKeychainItem:(NSObject *)arg0;
- (void)setActiveControllerIdentifier:(NSString *)arg0;
- (long)_saveKeyPair:(id)arg0 username:(NSString *)arg1 syncable:(char)arg2;
- (char)_getAllAvailableControllerPublicKeys:(id *)arg0 secretKeys:(id *)arg1 userNames:(id *)arg2;
- (long)_removeControllerKeyPair;
- (long)_removeKeychainItem:(NSObject *)arg0 leaveTombstone:(char)arg1;
- (long)_updateCurrentiCloudIdentifier:(NSString *)arg0 controllerPairingIdentifier:(NSString *)arg1;
- (long)_removeControllerKeyPairForIdentifier:(NSString *)arg0 leaveTombstone:(char)arg1;
- (long)_getMetadataSecretKey:(id *)arg0;
- (long)_createMetadataSecretKey:(id *)arg0;
- (long)_getPublicKey:(id *)arg0 registeredWithHomeKit:(char *)arg1 forAccessoryName:(NSString *)arg2;
- (long)_savePublicKey:(NSString *)arg0 forAccessoryName:(NSString *)arg1;
- (long)_removeAccessoryKeyForName:(NSString *)arg0;
- (long)_savePeripheralIdentifier:(NSString *)arg0 forAccessoryIdentifier:(NSString *)arg1 protocolVersion:(unsigned int)arg2 resumeSessionID:(unsigned long long)arg3;
- (long)_getPeripheralIdentifier:(id *)arg0 forAccessoryIdentifier:(NSString *)arg1 protocolVersion:(unsigned int *)arg2 resumeSessionID:(unsigned long long *)arg3;
- (long)_deletePeripheralIdentifierForAccessoryIdentifier:(NSString *)arg0;
- (long)_deleteAllPeripheralIdentifiers;
- (char)getControllerKeyPair:(id *)arg0 username:(id *)arg1 error:(id *)arg2;
- (char)saveKeyPair:(NSData *)arg0 username:(NSString *)arg1 syncable:(char)arg2 error:(id *)arg3;
- (char)deserializeKeyPair:(NSData *)arg0 publicKey:(id *)arg1 secretKey:(id *)arg2 error:(id *)arg3;
- (char)getAllAvailableControllerPublicKeys:(id *)arg0 secretKeys:(id *)arg1 userNames:(id *)arg2 error:(id *)arg3;
- (char)updateActiveControllerPairingIdentifier:(NSString *)arg0;
- (char)removeControllerKeyPairWithError:(id *)arg0;
- (char)updateCurrentiCloudIdentifier:(NSString *)arg0 controllerPairingIdentifier:(NSString *)arg1 error:(id *)arg2;
- (char)getCurrentiCloudIdentifier:(id *)arg0 controllerPairingIdentifier:(id *)arg1 error:(id *)arg2;
- (char)removeControllerKeyPairForIdentifier:(NSString *)arg0 leaveTombstone:(char)arg1 error:(id *)arg2;
- (char)getMetadataSecretKey:(id *)arg0 error:(id *)arg1;
- (char)removeAllAccessoryKeys:(id *)arg0;
- (char)updatePeripheralIdentifier:(NSUUID *)arg0 forAccessoryIdentifier:(NSString *)arg1 protocolVersion:(unsigned int)arg2 previousVersion:(unsigned int *)arg3 resumeSessionID:(unsigned long long)arg4 error:(id *)arg5;
- (char)deletePeripheralIdentifierForAccessoryIdentifier:(NSString *)arg0 error:(id *)arg1;
- (char)deleteAllPeripheralIdentifiers:(id *)arg0;
- (NSUUID *)readPeripheralIdentifierForAccessoryIdentifier:(NSString *)arg0 protocolVersion:(unsigned int *)arg1 resumeSessionID:(unsigned long long *)arg2 error:(id *)arg3;
- (NSDictionary *)getPeripherialIdentifiersAndAccessoryNames;
- (char)savePeripheralIdentifier:(NSString *)arg0 forAccessoryIdentifier:(NSString *)arg1 protocolVersion:(unsigned int)arg2 resumeSessionID:(unsigned long long)arg3 error:(id *)arg4;

@end
