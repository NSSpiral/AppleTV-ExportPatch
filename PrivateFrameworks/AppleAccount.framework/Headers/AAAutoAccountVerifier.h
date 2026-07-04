/* Runtime dump - AAAutoAccountVerifier
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate>
{
    NSOperationQueue * _requesterQueue;
    MSSearch * _search;
    ACAccount * _account;
    id _handler;
    int _attempts;
    char _canceled;
}

@property (retain, nonatomic) ACAccount * account;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)cancel;
- (AAAutoAccountVerifier *)init;
- (void).cxx_destruct;
- (void)_resendVerificationEmailForAccount:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)_verify;
- (void)_validateToken:(NSString *)arg0;
- (char)search:(MSSearch *)arg0 didFindResults:(char)arg1;
- (void)search:(MSSearch *)arg0 didFinishWithError:(NSError *)arg1;
- (void)sendVerificationEmail;
- (void)verifyWithHandler:(id /* block */)arg0;
- (AAAutoAccountVerifier *)initWithAccount:(ACAccount *)arg0;
- (ACAccount *)account;
- (void)setAccount:(ACAccount *)arg0;

@end
