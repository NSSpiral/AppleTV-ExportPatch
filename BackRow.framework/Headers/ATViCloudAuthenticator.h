/* Runtime dump - ATViCloudAuthenticator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVSharedCredentialsAuthenticator.h>
@interface ATViCloudAuthenticator : ATVSharedCredentialsAuthenticator
{
    ACAccount * _authenticatingAppleAccount;
    char _requiresMachineProvisioning;
    char _isSecondPassHSAError;
}

- (void)_sendAuthenticationRequest;
- (char)requiresPassword:(id *)arg0;
- (NSObject *)_makeAuthenticationController;
- (void)_authCompletionHandler:(char)arg0 error:(NSError *)arg1 callbackType:(int)arg2;
- (void)_handleHSASucceeded:(id)arg0;
- (void)_loadTOCWithCompletionHandler:(id /* block */)arg0;
- (void)_handleTOCAgreed:(id)arg0;
- (void)_handleTOCDisagreed:(id)arg0;
- (void)_loadHSADevicesWithCompletionHandler:(id /* block */)arg0;
- (void)_sendHSACodeToDevice:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)_verifyHSACode:(id)arg0 fromDevice:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void).cxx_destruct;
- (void)_handleAuthenticationSucceeded;

@end
