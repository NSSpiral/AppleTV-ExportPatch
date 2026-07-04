/* Runtime dump - ACRemoteCommandHandler
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACRemoteCommandHandler : NSObject
{
    ACAccountStore * _accountStore;
}

- (ACRemoteCommandHandler *)init;
- (void).cxx_destruct;
- (void)_addAccount:(NSObject *)arg0 withOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_updateAccount:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)_promptUserForAccountCredential:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)_deleteAccount:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)_authenticateAccount:(NSObject *)arg0 withCompletion:(id /* block */)arg1;
- (void)_removeAllAccountsWithCompletion:(id /* block */)arg0;
- (NSNumber *)_localAccountMatchingRemoteAccount:(NSObject *)arg0;
- (void)handleCommand:(NSObject *)arg0 forAccount:(NSObject *)arg1 options:(NSDictionary *)arg2 completion:(id /* block */)arg3;
- (void)_saveAccount:(NSObject *)arg0 completion:(id /* block */)arg1;

@end
