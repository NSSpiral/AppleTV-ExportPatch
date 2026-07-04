/* Runtime dump - ATVDataClientConnector
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVDataClientConnector : NSObject
{
    char _reconnectOnServerRediscovery;
    char _reconnectOnServerRediscoveryInternal;
    id _dataServerID;
    int _state;
    ATVDataClient * _dataClient;
    NSError * _connectionError;
    ATVDataServer * _dataServer;
    unsigned int _dataClientType;
    ATVStateMachine * _stateMachine;
    NSTimer * _dataServerRediscoveryWaitTimer;
}

@property (nonatomic) char reconnectOnServerRediscovery;
@property (retain, nonatomic) id dataServerID;
@property (nonatomic) int state;
@property (readonly, nonatomic) char connectionAttemptComplete;
@property (retain, nonatomic) ATVDataClient * dataClient;
@property (retain, nonatomic) NSError * connectionError;
@property (retain, nonatomic) ATVDataServer * dataServer;
@property (nonatomic) unsigned int dataClientType;
@property (retain, nonatomic) ATVStateMachine * stateMachine;
@property (nonatomic) char reconnectOnServerRediscoveryInternal;
@property (retain, nonatomic) NSTimer * dataServerRediscoveryWaitTimer;

+ (NSString *)_stateMachineName;
+ (NSObject *)_dataServerWithID:(int)arg0;

- (void)cancel;
- (void)dealloc;
- (int)state;
- (void)setState:(int)arg0;
- (void)connect;
- (void)_reset;
- (void).cxx_destruct;
- (ATVDataClient *)dataClient;
- (ATVDataServer *)dataServer;
- (void)_registerStateMachineHandlers;
- (ATVStateMachine *)stateMachine;
- (void)setStateMachine:(ATVStateMachine *)arg0;
- (void)setDataClient:(ATVDataClient *)arg0;
- (void)setDataServer:(ATVDataServer *)arg0;
- (char)_isIdle;
- (void)_dataClientStatusChangedHandler:(id /* block */)arg0;
- (void)_setupStateMachine;
- (void)_setConnectionErrorWithCode:(int)arg0;
- (void)_updateConnectorStateWithStateMachineState:(ATVStateMachine *)arg0;
- (unsigned int)dataClientType;
- (void)setReconnectOnServerRediscoveryInternal:(char)arg0;
- (char)reconnectOnServerRediscovery;
- (NSObject *)dataServerID;
- (void)_cleanupConnectionProperties;
- (char)reconnectOnServerRediscoveryInternal;
- (void)_dataServerRediscoveryWaitTimerHandler:(id /* block */)arg0;
- (void)setDataServerRediscoveryWaitTimer:(NSTimer *)arg0;
- (NSTimer *)dataServerRediscoveryWaitTimer;
- (void)_postEventAsync:(id)arg0;
- (char)_isDataServerIDEqual:(id)arg0;
- (void)_dataServerStatusChangedHandler:(id /* block */)arg0;
- (void)_dataServersChangedHandler:(id /* block */)arg0;
- (void)setConnectionError:(NSError *)arg0;
- (ATVDataClientConnector *)initWithDataServerID:(NSObject *)arg0 dataClientType:(unsigned int)arg1;
- (char)isConnectionAttemptComplete;
- (char)_isConnecting;
- (void)setReconnectOnServerRediscovery:(char)arg0;
- (void)setDataServerID:(NSObject *)arg0;
- (NSError *)connectionError;
- (void)setDataClientType:(unsigned int)arg0;

@end
