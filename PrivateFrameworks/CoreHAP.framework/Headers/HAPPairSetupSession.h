/* Runtime dump - HAPPairSetupSession
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPPairSetupSession : NSObject <HAPTimerDelegate>
{
    <HAPPairSetupSessionDelegate> * _delegate;
    int _role;
    int _options;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned int _state;
    struct PairingSessionPrivate * _pairingSession;
    HAPTimer * _backoffTimer;
}

@property (readonly, weak) <HAPPairSetupSessionDelegate> * delegate;
@property (readonly, nonatomic) int role;
@property (readonly, nonatomic) int options;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * clientQueue;
@property (nonatomic) unsigned int state;
@property (readonly, nonatomic) struct PairingSessionPrivate * pairingSession;
@property (retain, nonatomic) HAPTimer * backoffTimer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (HAPPairSetupSession *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (<HAPPairSetupSessionDelegate> *)delegate;
- (unsigned int)state;
- (void)setState:(unsigned int)arg0;
- (void)stop;
- (void)start;
- (int)options;
- (NSString *)shortDescription;
- (void)_invalidate;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)clientQueue;
- (NSString *)descriptionWithPointer:(char)arg0;
- (int)role;
- (struct PairingSessionPrivate *)pairingSession;
- (void)_processSetupExchangeData:(NSData *)arg0 error:(NSError *)arg1;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)arg0;
- (void)receivedSetupExchangeData:(NSData *)arg0 error:(NSError *)arg1;
- (char)_initializeSession;
- (void)_stopWithError:(NSError *)arg0;
- (void)_handlePairSetupExchangeComplete;
- (void)_processSetupCode:(id)arg0 error:(NSError *)arg1;
- (void)handleSetupCodeRequest;
- (void)setBackoffTimer:(HAPTimer *)arg0;
- (void)stopWithError:(NSError *)arg0;
- (void)_initiateClientPairSetupExchange;
- (HAPTimer *)backoffTimer;
- (void)_handleBackoffExpiration;
- (void)timerDidFire:(HAPTimer *)arg0;
- (HAPPairSetupSession *)initWithRole:(int)arg0 options:(int)arg1 delegate:(<HAPPairSetupSessionDelegate> *)arg2;
- (void)handleInvalidSetupCode;
- (void)handleBackoffRequestWithTimeout:(double)arg0;
- (char)handleSavePeerRequestWithPeerIdentity:(NSObject *)arg0 error:(id *)arg1;

@end
