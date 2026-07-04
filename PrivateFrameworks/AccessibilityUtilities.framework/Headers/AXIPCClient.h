/* Runtime dump - AXIPCClient
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCClient : NSObject
{
    struct __CFMachPort * _serverPort;
    NSLock * _serverPortLock;
    unsigned int _assignedServerMachPort;
    id _portDeathHandler;
    float _timeout;
    NSString * _clientIdentifier;
    struct __CFRunLoopSource * _clientSource;
    unsigned int _connectionAttempts;
    char _connected;
    char shouldRegisterCallbackSourceOnMainRunloop;
    char _usesPerPidLookup;
    NSString * _serviceName;
    NSMutableArray * _postConnectionTasks;
    AXAccessQueue * _connectionQueue;
    unsigned int clientCallbackPort;
    struct __CFRunLoopSource * clientCallbackSource;
    int _pid;
    AXAccessQueue * _portDeathAccessQueue;
}

@property (nonatomic) char connected;
@property (copy, nonatomic) NSString * serviceName;
@property (nonatomic) char usesPerPidLookup;
@property (nonatomic) int pid;
@property (readonly, nonatomic) unsigned int serviceMachPort;
@property (copy, nonatomic) id portDeathHandler;
@property (retain, nonatomic) AXAccessQueue * portDeathAccessQueue;
@property (nonatomic) float timeout;
@property (copy, nonatomic) NSString * clientIdentifier;
@property (readonly, nonatomic) unsigned int clientCallbackPort;
@property (readonly, nonatomic) struct __CFRunLoopSource * clientCallbackSource;
@property (nonatomic) char shouldRegisterCallbackSourceOnMainRunloop;
@property (nonatomic) struct __CFMachPort * serverPort;
@property (retain, nonatomic) NSMutableArray * postConnectionTasks;
@property (retain, nonatomic) AXAccessQueue * connectionQueue;

+ (void)initialize;
+ (AXIPCClient *)allClients;

- (void)_serverDied;
- (NSString *)clientIdentifier;
- (struct __CFMachPort *)serverPort;
- (void)dealloc;
- (NSString *)description;
- (void)_commonInit;
- (void)setClientIdentifier:(NSString *)arg0;
- (AXIPCClient *)initWithServiceName:(NSString *)arg0;
- (void)sendSimpleMessage:(NSString *)arg0;
- (NSString *)sendMessage:(NSString *)arg0 withError:(id *)arg1;
- (void)setPortDeathHandler:(id /* block */)arg0;
- (void)setShouldRegisterCallbackSourceOnMainRunloop:(char)arg0;
- (char)connectWithError:(id *)arg0;
- (unsigned int)clientCallbackPort;
- (struct __CFRunLoopSource *)clientCallbackSource;
- (char)sendSimpleMessage:(NSString *)arg0 withError:(id *)arg1;
- (char)_handleErrorWithMessage:(NSString *)arg0 outError:(id *)arg1;
- (void)setPostConnectionTasks:(NSMutableArray *)arg0;
- (void)setConnectionQueue:(AXAccessQueue *)arg0;
- (void)setPortDeathAccessQueue:(AXAccessQueue *)arg0;
- (void)_registerWithServer;
- (char)shouldRegisterCallbackSourceOnMainRunloop;
- (char)verifyConnectionExists;
- (char)usesPerPidLookup;
- (char)sendSimpleMessage:(NSString *)arg0 synchronizationPort:(unsigned int)arg1 error:(id *)arg2;
- (char)_verifyConnectionWithError:(id *)arg0;
- (AXAccessQueue *)portDeathAccessQueue;
- (id /* block */)portDeathHandler;
- (NSMutableArray *)postConnectionTasks;
- (void)_attemptToEstablishConnection;
- (unsigned int)serviceMachPort;
- (char)disconnectWithError:(id *)arg0;
- (void)establishConnectionWithTimeout:(double)arg0 completion:(id /* block */)arg1;
- (void)setServerPort:(struct __CFMachPort *)arg0;
- (void)setUsesPerPidLookup:(char)arg0;
- (void)setConnected:(char)arg0;
- (int)pid;
- (void)setServiceName:(NSString *)arg0;
- (AXIPCClient *)initWithPort:(unsigned int)arg0;
- (NSString *)serviceName;
- (AXAccessQueue *)connectionQueue;
- (void)setPid:(int)arg0;
- (void)setTimeout:(float)arg0;
- (float)timeout;
- (char)isConnected;

@end
