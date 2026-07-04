/* Runtime dump - ATVVPNConnection
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVVPNConnection : NSObject
{
    char _wantsToConnect;
    void * _session;
    NSUUID * _uuid;
    ATVStateMachine * _stateMachine;
    id _connectionCompletionBlock;
    id _disconnectionCompletionBlock;
}

@property (nonatomic) void * session;
@property (retain, nonatomic) NSUUID * uuid;
@property (retain, nonatomic) ATVStateMachine * stateMachine;
@property (copy, nonatomic) id connectionCompletionBlock;
@property (copy, nonatomic) id disconnectionCompletionBlock;
@property (nonatomic) char wantsToConnect;

+ (void)connectWithCompletion:(id /* block */)arg0;
+ (void)disconnectWithCompletion:(id /* block */)arg0;
+ (ATVVPNConnection *)sharedInstance;
+ (char)isValid;
+ (char)isConnected;

- (void)_registerStateHandlers;
- (ATVVPNConnection *)initForSingleton;
- (id /* block */)connectionCompletionBlock;
- (void)setConnectionCompletionBlock:(id /* block */)arg0;
- (id /* block */)disconnectionCompletionBlock;
- (void)setDisconnectionCompletionBlock:(id /* block */)arg0;
- (void)setWantsToConnect:(char)arg0;
- (char)wantsToConnect;
- (void)_startSession;
- (void)_stopSession;
- (void)_updateVPNStatus:(int)arg0 forSession:(void *)arg1;
- (ATVVPNConnection *)init;
- (void).cxx_destruct;
- (NSUUID *)uuid;
- (ATVStateMachine *)stateMachine;
- (void)setStateMachine:(ATVStateMachine *)arg0;
- (void *)session;
- (void)setSession:(void *)arg0;
- (void)_initializeSession;
- (void)setUuid:(NSUUID *)arg0;

@end
