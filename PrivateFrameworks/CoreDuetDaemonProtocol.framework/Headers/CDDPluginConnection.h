/* Runtime dump - CDDPluginConnection
 * Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDPluginConnection : NSObject
{
    CDDebug * _debug;
    CDDXPCConnection * _connection;
    unsigned long long _clientId;
}

@property (readonly) CDDebug * debug;
@property (readonly) unsigned long long clientId;
@property (readonly) CDDXPCConnection * connection;

- (CDDebug *)debug;
- (CDDPluginConnection *)init;
- (void).cxx_destruct;
- (CDDXPCConnection *)connection;
- (NSError *)messageWithError:(id *)arg0;
- (char)sendMessageWithType:(int)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)sendMessageWithType:(int)arg0 error:(id *)arg1 dictionaryKey:(NSObject<NSCopying> *)arg2 dictionary:(NSDictionary *)arg3 replyHandler:(id /* block */)arg4;
- (char)registerForSignoffWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)admissionSignoffConditionsChanged:(id)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)setTriggerConditions:(id)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)setMitigation:(id)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)currentMitigationSettingsWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)triggerSystemDataExchange:(id)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)requestSystemDataWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (CDDPluginConnection *)initWithClientId:(unsigned long long)arg0 error:(id *)arg1;
- (unsigned long long)clientId;

@end
