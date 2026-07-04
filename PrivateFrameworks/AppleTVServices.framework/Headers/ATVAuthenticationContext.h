/* Runtime dump - ATVAuthenticationContext
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVAuthenticationContext : NSObject
{
    SSAuthenticationContext * _authenticationContext;
    SSAccount * _account;
    NSString * _passwordMemento;
    id _completion;
}

@property (copy, nonatomic) SSAuthenticationContext * authenticationContext;
@property (retain, nonatomic) SSAccount * account;
@property (copy, nonatomic) NSString * passwordMemento;
@property (copy, nonatomic) id completion;

- (void)setAuthenticationContext:(SSAuthenticationContext *)arg0;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setPasswordMemento:(NSString *)arg0;
- (SSAuthenticationContext *)authenticationContext;
- (NSString *)passwordMemento;
- (SSAccount *)account;
- (void)setAccount:(SSAccount *)arg0;

@end
