/* Runtime dump - ACDAuthenticationDialogRequest
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAuthenticationDialogRequest : NSObject
{
    char _confirmationRequired;
    NSURL * _url;
    ACAccount * _account;
    NSString * _authDelegateClassName;
    NSString * _authDelegateClassBundlePath;
    id _completion;
}

@property (copy, nonatomic) NSURL * url;
@property (nonatomic) char confirmationRequired;
@property (retain, nonatomic) ACAccount * account;
@property (copy, nonatomic) NSString * authDelegateClassName;
@property (copy, nonatomic) NSString * authDelegateClassBundlePath;
@property (copy, nonatomic) id completion;

- (NSURL *)url;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (void)setUrl:(NSURL *)arg0;
- (void).cxx_destruct;
- (char)confirmationRequired;
- (void)setConfirmationRequired:(char)arg0;
- (NSString *)authDelegateClassName;
- (void)setAuthDelegateClassName:(NSString *)arg0;
- (NSString *)authDelegateClassBundlePath;
- (void)setAuthDelegateClassBundlePath:(NSString *)arg0;
- (ACAccount *)account;
- (void)setAccount:(ACAccount *)arg0;

@end
