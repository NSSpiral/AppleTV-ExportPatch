/* Runtime dump - NEAgentFilterPlugin
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAgentFilterPlugin : NSObject <NEAgentServerDelegate>
{
    struct __CFBundle * _pluginBundle;
    struct __CFDictionary * _pendingGlobalPersistentData;
    struct __CFDictionary * _pendingPerConfigurationPersistentData;
    struct NESocketContentFilter_s * _socketContentFilter;
    struct NEAgentFilterPluginCallbacks _pluginCallbacks;
    void * _pluginInfo;
    id _browserNewFlowHandler;
    id _browserDataHandler;
    id _browserDataCompleteHandler;
    NSObject<OS_dispatch_queue> * _clientQueue;
    void * _clientInfo;
    struct __CFDictionary * _browserFlows;
    char _pluginInitialized;
    char _builtInPlugin;
    NEAgentServer * _server;
    NSString * _pluginType;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _configID;
    NEPluginPreferences * _pluginPrefs;
    NSObject<OS_xpc_object> * _clientListener;
    int _outstandingSetGlobalDataOps;
    int _outstandingSetDataOps;
}

@property (readonly, weak) NEAgentServer * server;
@property (readonly) NSString * pluginType;
@property (readonly) NSObject<OS_dispatch_queue> * queue;
@property char pluginInitialized;
@property (retain) NSUUID * configID;
@property (retain) NEPluginPreferences * pluginPrefs;
@property (retain) NSObject<OS_xpc_object> * clientListener;
@property int outstandingSetGlobalDataOps;
@property int outstandingSetDataOps;
@property (readonly) char builtInPlugin;

- (NSString *)pluginType;
- (char)pluginInitialized;
- (void)setPluginInitialized:(char)arg0;
- (void)handleInitMessage:(NSString *)arg0;
- (void)handleStart:(id)arg0;
- (void)handleStop:(id)arg0;
- (void)handleEnvironmentEvent:(NSObject *)arg0;
- (void)handleAddClientMessage:(NSString *)arg0;
- (void)closeBrowserFilterFlow:(struct NEContentFilterFlow_s *)arg0 forUUID:(struct __CFUUID *)arg1;
- (void)handleNewFlowMessage:(NSString *)arg0 forConnection:(NSURLConnection *)arg1;
- (void)handleAddDataMessage:(NSString *)arg0 forConnection:(NSURLConnection *)arg1;
- (void)handleDataCompleteMessage:(NSString *)arg0 forConnection:(NSURLConnection *)arg1;
- (void)handleClientMessage:(NSString *)arg0 forConnection:(NSURLConnection *)arg1;
- (NSObject<OS_xpc_object> *)clientListener;
- (void)setClientListener:(NSObject<OS_xpc_object> *)arg0;
- (void)acceptNewClientConnection:(NSURLConnection *)arg0;
- (void)setConfigID:(NSUUID *)arg0;
- (void)setPluginPrefs:(NEPluginPreferences *)arg0;
- (void)sendStatus:(long)arg0 withError:(long)arg1;
- (void)sendEnvironmentEventComplete:(long)arg0;
- (int)outstandingSetGlobalDataOps;
- (void)setOutstandingSetGlobalDataOps:(int)arg0;
- (int)outstandingSetDataOps;
- (void)setOutstandingSetDataOps:(int)arg0;
- (NEPluginPreferences *)pluginPrefs;
- (NSUUID *)configID;
- (NEAgentFilterPlugin *)initWithServer:(NEAgentServer *)arg0 pluginType:(NSString *)arg1 primaryPluginType:(NSObject *)arg2 pluginBundle:(struct __CFBundle *)arg3;
- (char)handleInit;
- (void)handleDisposeWithCompletionHandler:(id /* block */)arg0;
- (void)handleMessage:(NSString *)arg0 withOuterMessage:(struct CGRect)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (char)sendSocketContentFilterRequestWithCompletionHandler:(id /* block */)arg0;
- (char)sendSetPersistentData:(struct __CFDictionary *)arg0 ofType:(long)arg1;
- (struct __CFDictionary *)copyPersistentDataOfType:(long)arg0;
- (struct NESocketContentFilter_s *)copySocketContentFilter;
- (void)setBrowserNewFlowHandler:(id /* block */)arg0 dataHandler:(/* block */ id)arg1 dataCompleteHandler:(id /* block */)arg2 clientQueue:(/* block */ id)arg3 andClientInfo:(NSDictionary *)arg4;
- (char)builtInPlugin;
- (NEAgentServer *)server;
- (void).cxx_destruct;
- (void)cleanup;
- (NSObject<OS_dispatch_queue> *)queue;

@end
