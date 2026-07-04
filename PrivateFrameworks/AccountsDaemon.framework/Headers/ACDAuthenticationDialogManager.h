/* Runtime dump - ACDAuthenticationDialogManager
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol>
{
    NSXPCListener * _authenticationDialogListener;
    ACDQueueDictionary * _dialogRequestQueues;
    NSString * _activeAccountID;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (ACDAuthenticationDialogManager *)init;
- (void).cxx_destruct;
- (void)openAuthenticationURLForAccount:(NSObject *)arg0 withDelegateClassName:(NSString *)arg1 fromBundleAtPath:(NSString *)arg2 shouldConfirm:(char)arg3 completion:(id /* block */)arg4;
- (void)contextForAuthenticationDialog:(id)arg0;
- (void)authenticationDialogDidFinishWithSuccess:(char)arg0 response:(NSURLResponse *)arg1;
- (void)authenticationDialogCrashed;
- (void)_launchDialogContainerAppForAccount:(NSObject *)arg0 shouldConfirm:(char)arg1 completion:(id /* block */)arg2;
- (char)_confirmUserWantsToOpenAuthenticationURLForAccount:(NSObject *)arg0;
- (void)openAuthenticationURL:(NSURL *)arg0 forAccount:(NSObject *)arg1 shouldConfirm:(char)arg2 completion:(id /* block */)arg3;

@end
