/* Runtime dump - CDPClientConnection
 * Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDPClientConnection : NSObject
{
    char _admissionOverride;
    char _admissionResult;
    NSString * _clientName;
    CDDXPCConnection * _connection;
    CDDebug * _debug;
}

@property (readonly) NSString * clientName;
@property char admissionOverride;
@property char admissionResult;
@property (readonly) CDDXPCConnection * connection;
@property (readonly) CDDebug * debug;

- (CDDebug *)debug;
- (CDPClientConnection *)init;
- (void).cxx_destruct;
- (CDDXPCConnection *)connection;
- (NSError *)messageWithError:(id *)arg0;
- (char)sendMessage:(int)arg0 withXPCdictionaryKey:(NSString *)arg1 dictionary:(NSDictionary *)arg2 admissionId:(NSObject *)arg3 options:(NSDictionary *)arg4 error:(id *)arg5 replyHandler:(id /* block */)arg6;
- (CDPClientConnection *)initWithPluginName:(NSString *)arg0 error:(id *)arg1;
- (char)bootstrapWithError:(id *)arg0 replyHandler:(id /* block */)arg1;
- (char)triggerWithConditions:(NSArray *)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)admissionSignoffForAttributes:(NSDictionary *)arg0 admissionId:(NSObject *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3 replyHandler:(id /* block */)arg4;
- (char)activitySignal:(NSObject *)arg0 error:(id *)arg1 replyHandler:(id /* block */)arg2;
- (char)admissionCheckAndStartedForAttributes:(NSDictionary *)arg0 admissionId:(NSObject *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3 replyHandler:(id /* block */)arg4;
- (char)admissionOverride;
- (void)setAdmissionOverride:(char)arg0;
- (char)admissionResult;
- (void)setAdmissionResult:(char)arg0;
- (NSString *)clientName;

@end
