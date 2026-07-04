/* Runtime dump - ACUIAccountOperationsHelper
 * Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAccountOperationsHelper : NSObject
{
    ACAccountStore * _accountStore;
    NSObject<OS_dispatch_queue> * _accountOperationsQueue;
    char _isRemovingAccount;
    char _isSavingAccount;
    <ACUIAccountOperationsDelegate> * _delegate;
}

@property (weak, nonatomic) <ACUIAccountOperationsDelegate> * delegate;
@property char isRemovingAccount;
@property char isSavingAccount;

- (void)setDelegate:(<ACUIAccountOperationsDelegate> *)arg0;
- (<ACUIAccountOperationsDelegate> *)delegate;
- (void).cxx_destruct;
- (ACUIAccountOperationsHelper *)initWithAccountStore:(ACAccountStore *)arg0;
- (void)saveAccount:(NSObject *)arg0 requireVerification:(char)arg1;
- (void)setIsSavingAccount:(char)arg0;
- (id)_desiredDataclassActionsFromPossibleActions:(id)arg0 forAccount:(NSObject *)arg1;
- (void)saveAccount:(NSObject *)arg0 withDataclassActions:(id)arg1 requireVerification:(char)arg2;
- (void)setIsRemovingAccount:(char)arg0;
- (void)saveAccount:(NSObject *)arg0;
- (void)saveAccount:(NSObject *)arg0 withDataclassActions:(id)arg1;
- (char)isRemovingAccount;
- (char)isSavingAccount;
- (void)removeAccount:(NSObject *)arg0;

@end
