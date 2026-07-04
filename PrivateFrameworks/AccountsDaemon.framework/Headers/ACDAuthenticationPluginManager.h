/* Runtime dump - ACDAuthenticationPluginManager
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAuthenticationPluginManager : NSObject
{
    ACDQueueDictionary * _verificationHandlerQueues;
    ACDQueueDictionary * _renewalHandlerQueues;
    NSLock * _verificationHandlersLock;
    NSLock * _renewalHandlersLock;
    NSMutableDictionary * _authenticationPluginsByType;
    NSObject<OS_dispatch_queue> * _authenticationPluginQueue;
}

- (ACDAuthenticationPluginManager *)init;
- (void).cxx_destruct;
- (void)credentialForAccount:(NSObject *)arg0 client:(NSObject *)arg1 store:(EKEventStore *)arg2 handler:(id /* block */)arg3;
- (void)verifyCredentialsForAccount:(NSObject *)arg0 accountStore:(ACAccountStore *)arg1 options:(NSDictionary *)arg2 handler:(id /* block */)arg3;
- (void)renewCredentialsForAccount:(NSObject *)arg0 accountStore:(ACAccountStore *)arg1 options:(NSDictionary *)arg2 completion:(id /* block */)arg3;
- (char)isPushSupportedForAccount:(NSObject *)arg0;
- (NSNumber *)_authenticationTypeForAccount:(NSObject *)arg0;
- (NSObject *)_pluginForAuthenticationType:(NSObject *)arg0;
- (NSNumber *)_authCapableParentAccountForAccount:(NSObject *)arg0;
- (void)_handleVerificationCompletionForAccount:(NSObject *)arg0 verifiedAccount:(NSObject *)arg1 error:(NSError *)arg2 store:(EKEventStore *)arg3 shouldSave:(char)arg4;
- (void)_handleRenewalCompletionResult:(int)arg0 forAccount:(NSObject *)arg1 renewalID:(NSObject *)arg2 accountStore:(ACAccountStore *)arg3 error:(NSError *)arg4;
- (NSObject *)_descriptionForRenewalResult:(int)arg0;

@end
