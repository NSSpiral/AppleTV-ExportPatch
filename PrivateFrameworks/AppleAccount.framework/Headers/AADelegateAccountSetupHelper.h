/* Runtime dump - AADelegateAccountSetupHelper
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADelegateAccountSetupHelper : NSObject
{
    ACAccountStore * _accountStore;
    AASetupAssistantService * _aaService;
    NSArray * _delegatesToSetup;
    NSMutableArray * _pendingCompletionBundles;
    NSMutableDictionary * _assistantDelegates;
    id _handler;
    NSObject<OS_dispatch_source> * _delegatetimer;
}

- (AADelegateAccountSetupHelper *)initWithStore:(NSObject *)arg0;
- (AADelegateAccountSetupHelper *)init;
- (void).cxx_destruct;
- (void)_setupDelegateAccountsWithEmailChoice:(NSString *)arg0;
- (id)_loadAssistantDelegateBundles;
- (void)_completeiCloudAndDelegateSetupWithResponse:(NSURLResponse *)arg0;
- (NSDictionary *)_adjustResponseDictionary:(NSDictionary *)arg0;
- (void)setupiCloudDelegateWithUsername:(NSString *)arg0 password:(NSString *)arg1 emailChoice:(NSString *)arg2 withHandler:(id /* block */)arg3;

@end
