/* Runtime dump - HAPSecuritySession
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPSecuritySession : NSObject
{
    <HAPSecuritySessionDelegate> * _delegate;
    unsigned int _role;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned int _state;
    struct PairingSessionPrivate * _pairingSession;
    NSData * _inputKey;
    NSMutableData * _inputNonce;
    NSData * _outputKey;
    NSMutableData * _outputNonce;
    unsigned long long _resumeSessionID;
}

@property (readonly, weak) <HAPSecuritySessionDelegate> * delegate;
@property (readonly, nonatomic) unsigned int role;
@property (readonly, nonatomic) unsigned long long resumeSessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (nonatomic) unsigned int state;
@property (nonatomic) struct PairingSessionPrivate * pairingSession;
@property (retain, nonatomic) NSData * inputKey;
@property (retain, nonatomic) NSMutableData * inputNonce;
@property (retain, nonatomic) NSData * outputKey;
@property (retain, nonatomic) NSMutableData * outputNonce;

- (void)dealloc;
- (NSString *)description;
- (NSString *)debugDescription;
- (<HAPSecuritySessionDelegate> *)delegate;
- (unsigned int)state;
- (void)setState:(unsigned int)arg0;
- (void)close;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)open;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (char)_initializeSetupSession:(unsigned long long)arg0;
- (void)setInputKey:(NSData *)arg0;
- (void)setInputNonce:(NSMutableData *)arg0;
- (void)setOutputKey:(NSData *)arg0;
- (void)setOutputNonce:(NSMutableData *)arg0;
- (void)setResumeSessionID:(unsigned long long)arg0;
- (unsigned int)role;
- (struct PairingSessionPrivate *)pairingSession;
- (void)closeWithError:(NSError *)arg0;
- (void)_notifyOpening;
- (void)_processSetupExchangeData:(NSData *)arg0 error:(NSError *)arg1;
- (void)_closeWithError:(NSError *)arg0;
- (void)_handleSetupExchangeComplete;
- (NSDictionary *)_inputInfo;
- (NSDictionary *)_outputInfo;
- (void)_notifyOpened;
- (void)_initiateClientSessionSetupExchange;
- (NSData *)outputKey;
- (NSMutableData *)outputNonce;
- (NSData *)inputKey;
- (NSMutableData *)inputNonce;
- (HAPSecuritySession *)initWithRole:(unsigned int)arg0 resumeSessionID:(unsigned long long)arg1 delegate:(<HAPSecuritySessionDelegate> *)arg2;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)arg0;
- (NSString *)_handlePeerPairingIdentityRequestWithIdentifier:(NSString *)arg0 status:(int *)arg1;
- (void)receivedSetupExchangeData:(NSData *)arg0 error:(NSError *)arg1;
- (NSData *)encryptData:(NSData *)arg0 additionalAuthenticatedData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)decryptData:(NSData *)arg0 additionalAuthenticatedData:(NSData *)arg1 error:(id *)arg2;
- (unsigned long long)resumeSessionID;
- (void)setPairingSession:(struct PairingSessionPrivate *)arg0;

@end
