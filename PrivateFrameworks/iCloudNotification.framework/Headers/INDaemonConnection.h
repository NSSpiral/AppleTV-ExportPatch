/* Runtime dump - INDaemonConnection
 * Image: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
 */

@interface INDaemonConnection : NSObject
{
    NSXPCConnection * _connection;
}

- (void)dealloc;
- (INDaemonConnection *)init;
- (void).cxx_destruct;
- (char)registerAccount:(NSObject *)arg0 foriCloudNotificationsWithReason:(unsigned int)arg1 error:(id *)arg2;
- (char)unregisterAccount:(NSObject *)arg0 fromiCloudNotificationsWithError:(id *)arg1;
- (char)clearAllRegistrationDigestsWithError:(id *)arg0;
- (id)diagnosticReport;

@end
