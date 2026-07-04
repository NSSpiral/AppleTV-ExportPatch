/* Runtime dump - YTAuthenticator
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTAuthenticator : NSObject
{
    <YTAuthenticatorDelegate> * _delegate;
    NSMutableArray * _deferredRequests;
    int _accountAuthState;
    int _deviceAuthState;
}

+ (YTAuthenticator *)sharedAuthenticator;

- (void)dealloc;
- (void)setDelegate:(<YTAuthenticatorDelegate> *)arg0;
- (YTAuthenticator *)init;
- (void)invalidateToken;
- (char)isAccountAuthenticated;
- (void)addAuthenticationHeadersToRequest:(NSURLRequest *)arg0 accountAuthRequired:(char)arg1;
- (void)_didAuthenticateDevice:(NSObject *)arg0;
- (void)_failedToAuthenticateDevice:(NSObject *)arg0;
- (void)_removeDeviceAuthenticationObservers;
- (void)_completeAuthenticationForDeferredRequests;
- (void)_removeDefferredRequests;
- (void)_failedToAuthenticateAccount:(NSObject *)arg0;
- (void)_removeAccountAuthenticationObservers;
- (void)_addAccountAuthenticationObserers;
- (void)_addDeferredRequest:(NSURLRequest *)arg0 accountAuthRequired:(char)arg1;
- (void)_addDeviceAuthenticationObserers;
- (void)clearAccountInfo;
- (char)cachedCredentialsValid;
- (char)loadStoredCredentials;
- (void)didAuthenticateAccount;
- (void)setAccount:(NSObject *)arg0 password:(NSString *)arg1;
- (void)userCancelledAccountAuthentication;
- (char)isWaitingForAuthentication;

@end
