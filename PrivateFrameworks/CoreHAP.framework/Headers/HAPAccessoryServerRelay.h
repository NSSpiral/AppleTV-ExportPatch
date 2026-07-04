/* Runtime dump - HAPAccessoryServerRelay
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerRelay : HAPAccessoryServer <HAPSecuritySessionDelegate, HAPFragmentationStreamDelegate, HAPStreamDelegate>
{
    char _securitySessionOpen;
    char _securitySessionOpening;
    unsigned short _nextRequestTransactionIdentifier;
    HAPRelayStream * _stream;
    NSMutableArray * _pendingRequests;
    NSMapTable * _pendingResponses;
    NSOperationQueue * _requestOperationQueue;
    HAPFragmentationStream * _fragmentationStream;
    HAPSecuritySession * _securitySession;
    NSOperationQueue * _pairVerifyOperationQueue;
}

@property (readonly, nonatomic) HAPRelayStream * stream;
@property (readonly, nonatomic) NSMutableArray * pendingRequests;
@property (readonly, nonatomic) NSMapTable * pendingResponses;
@property (readonly, nonatomic) NSOperationQueue * requestOperationQueue;
@property (readonly, nonatomic) HAPFragmentationStream * fragmentationStream;
@property (readonly, nonatomic) unsigned short nextRequestTransactionIdentifier;
@property (retain, nonatomic) HAPSecuritySession * securitySession;
@property (nonatomic) char securitySessionOpen;
@property (nonatomic) char securitySessionOpening;
@property (readonly, nonatomic) NSOperationQueue * pairVerifyOperationQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (char)isPaired;
- (void)enableEvents:(char)arg0 forCharacteristics:(GEOVCharacteristics *)arg1 withCompletionHandler:(id /* block */)arg2 queue:(/* block */ id)arg3;
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
- (char)addPairingWithIdentifier:(NSString *)arg0 publicKey:(NSString *)arg1 admin:(char)arg2 queue:(NSObject *)arg3 completion:(id /* block */)arg4;
- (char)removePairingWithIdentifier:(NSString *)arg0 publicKey:(NSString *)arg1 queue:(NSObject *)arg2 completion:(id /* block */)arg3;
- (char)removePairingForCurrentControllerOnQueue:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)listPairingsWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0 completionHandler:(id /* block */)arg1;
- (void)identifyWithCompletion:(id /* block */)arg0;
- (HAPPairingIdentity *)securitySession:(HAPSecuritySession *)arg0 didReceiveLocalPairingIdentityRequestWithError:(id *)arg1;
- (HAPPairingIdentity *)securitySession:(HAPSecuritySession *)arg0 didReceiveRequestForPeerPairingIdentityWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (void)securitySession:(HAPSecuritySession *)arg0 didReceiveSetupExchangeData:(NSData *)arg1;
- (void)securitySessionIsOpening:(HAPSecuritySession *)arg0;
- (void)securitySessionDidOpen:(HAPSecuritySession *)arg0;
- (void)securitySession:(HAPSecuritySession *)arg0 didCloseWithError:(NSError *)arg1;
- (void)_parseAttributeDatabase:(id)arg0;
- (void)_sendRequest:(NSURLRequest *)arg0 completionHandler:(id /* block */)arg1;
- (void)_handleCharacteristicReadResponse:(NSURLResponse *)arg0 characteristics:(GEOVCharacteristics *)arg1 error:(NSError *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleCharacteristicWriteResponse:(NSURLResponse *)arg0 characteristicWriteRequestTuples:(id)arg1 error:(NSError *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(id /* block */)arg4;
- (NSData *)_encryptData:(NSData *)arg0 error:(id *)arg1;
- (HAPRelayStream *)stream;
- (unsigned short)_nextTransactionIdentifier;
- (NSMapTable *)pendingResponses;
- (NSMutableArray *)pendingRequests;
- (HAPFragmentationStream *)fragmentationStream;
- (void)_handleNotificationResponse:(NSURLResponse *)arg0;
- (NSData *)_decryptData:(NSData *)arg0 error:(id *)arg1;
- (NSOperationQueue *)pairVerifyOperationQueue;
- (char)isSecuritySessionOpen;
- (char)isSecuritySessionOpening;
- (void)_suspendAllOperations;
- (void)setSecuritySession:(HAPSecuritySession *)arg0;
- (NSOperationQueue *)requestOperationQueue;
- (HAPSecuritySession *)securitySession;
- (void)_handleReceivedMessageData:(NSData *)arg0 withIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (id)getLocalPairingIdentityAndAllowCreation:(char)arg0 error:(id *)arg1;
- (void)_handleSecuritySessionSetupExchangeData:(NSData *)arg0;
- (void)setSecuritySessionOpening:(char)arg0;
- (void)setSecuritySessionOpen:(char)arg0;
- (void)_resumeAllOperations;
- (void)_cancelAllQueuedOperationsWithError:(NSError *)arg0;
- (void)_handleFragmentedResponse:(NSURLResponse *)arg0 transactionIdentifier:(unsigned short)arg1 error:(NSError *)arg2;
- (void)fragmentationStream:(HAPFragmentationStream *)arg0 didCloseWithError:(NSError *)arg1;
- (void)fragmentationStream:(HAPFragmentationStream *)arg0 didReceiveData:(NSData *)arg1 transactionIdentifier:(unsigned short)arg2 error:(NSError *)arg3;
- (void)stream:(HAPRelayStream *)arg0 didCloseWithError:(NSError *)arg1;
- (void)stream:(HAPRelayStream *)arg0 didFailToWriteDataWithIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)stream:(HAPRelayStream *)arg0 didReceiveData:(NSData *)arg1 withIdentifier:(NSString *)arg2;
- (HAPAccessoryServerRelay *)initWithStream:(HAPRelayStream *)arg0 name:(NSString *)arg1 identifier:(NSString *)arg2 keyStore:(<HAPKeyStore> *)arg3;
- (char)hasPairings;
- (unsigned short)nextRequestTransactionIdentifier;
- (void)_enqueueRequest:(NSURLRequest *)arg0;

@end
