/* Runtime dump - SSDownloadAuthenticationSession
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadAuthenticationSession : SSDownloadSession

@property (readonly) NSURLAuthenticationChallenge * authenticationChallenge;

- (NSURLAuthenticationChallenge *)authenticationChallenge;
- (void)_finishWithType:(int)arg0 credential:(NSURLCredential *)arg1;

@end
