/* Runtime dump - HAPRemoteSession
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRemoteSession : NSObject
{
    id _cipherReadKey;
    id _cipherReadNonce;
    id _cipherWriteKey;
    id _cipherWriteNonce;
    char _commitResponded;
    NSObject<OS_dispatch_source> * _idleTimer;
    NSObject<OS_dispatch_queue> * _internalQueue;
    id _internalRequestHandler;
    char * _label;
    unsigned char _pairVerifyDone;
    struct PairingSessionPrivate * _pairVerifySession;
    NSMutableDictionary * _prepareRequests;
    char _prepareResponded;
    NSString * _sessionID;
    char _started;
    int _state;
    NSMutableDictionary * _transactions;
    NSMutableArray * _userTransactions;
    id _findPeerHandler;
    id _requestHandler;
    id _stoppedHandler;
    id _transportSendMessage;
    int _type;
    NSObject<OS_dispatch_queue> * _userQueue;
    unsigned long long _commitTimeoutNanos;
    unsigned long long _clientIdleTimeoutNanos;
    unsigned long long _serverIdleTimeoutNanos;
    unsigned long long _sendInternalTimeoutNanos;
    unsigned long long _sendUserTimeoutNanos;
}

@property (retain) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (copy) id findPeerHandler;
@property (copy) id stoppedHandler;
@property (copy) id requestHandler;
@property (copy) id transportSendMessage;
@property (copy) id internalRequestHandler;

- (void)dealloc;
- (HAPRemoteSession *)init;
- (void)stop;
- (void)_start;
- (void)start;
- (void).cxx_destruct;
- (long)_updateIdleTimer;
- (void)_runStateMachine;
- (void)_stop:(long)arg0;
- (void)_serverCompletePrepareRequest:(NSURLRequest *)arg0;
- (void)_completeTransaction:(NSObject *)arg0 response:(NSURLResponse *)arg1 status:(long)arg2;
- (void)_completeUserTransaction:(NSObject *)arg0 response:(NSURLResponse *)arg1 status:(long)arg2;
- (void)_clientRunStateMachine;
- (void)_serverRunStateMachine;
- (void)_sendUserRequest:(NSURLRequest *)arg0 options:(NSDictionary *)arg1 responseHandler:(NSObject<OS_xpc_object> *)arg2;
- (void)_transportReceivedMessage:(NSString *)arg0;
- (long)_clientPairVerifyExchange:(id)arg0;
- (long)_setupEncryption;
- (long)_clientSendPrepareRequest:(NSURLRequest *)arg0;
- (long)_clientSendCommitRequest:(NSURLRequest *)arg0;
- (void)_sendRequest:(NSURLRequest *)arg0 options:(NSDictionary *)arg1 responseHandler:(NSObject<OS_xpc_object> *)arg2;
- (long)_clientHandlePrepareResponse:(NSURLResponse *)arg0;
- (long)_clientHandleCommitResponse:(NSURLResponse *)arg0;
- (void)_serverPairVerifyExchange:(id)arg0;
- (void)setInternalRequestHandler:(id /* block */)arg0;
- (void)_serverHandleEncryptedRequest:(NSURLRequest *)arg0;
- (long)_serverHandleDecryptedRequest:(NSURLRequest *)arg0 responseHandler:(NSObject<OS_xpc_object> *)arg1;
- (long)_serverHandlePrepareRequest:(NSURLRequest *)arg0 responseHandler:(NSObject<OS_xpc_object> *)arg1;
- (long)_serverHandleCommitRequest:(NSURLRequest *)arg0 responseHandler:(NSObject<OS_xpc_object> *)arg1;
- (HAPRemoteSession *)initWithType:(int)arg0 commitTimeout:(unsigned long long)arg1 clientIdleTimeout:(unsigned long long)arg2 serverIdleTimeout:(unsigned long long)arg3 sendInternalTimeout:(unsigned long long)arg4 sendUserTimeout:(unsigned long long)arg5;
- (void)sendRequest:(NSURLRequest *)arg0 options:(NSDictionary *)arg1 responseHandler:(NSObject<OS_xpc_object> *)arg2;
- (void)transportReceivedMessage:(NSString *)arg0;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (id /* block */)internalRequestHandler;
- (id /* block */)findPeerHandler;
- (void)setFindPeerHandler:(id /* block */)arg0;
- (id /* block */)requestHandler;
- (void)setRequestHandler:(id /* block */)arg0;
- (id /* block */)stoppedHandler;
- (void)setStoppedHandler:(id /* block */)arg0;
- (NSString *)transportSendMessage;
- (void)setTransportSendMessage:(NSString *)arg0;

@end
