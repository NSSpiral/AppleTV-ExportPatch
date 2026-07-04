/* Runtime dump - ISURLAuthenticationChallenge
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge
{
    NSURLAuthenticationChallenge * _challenge;
}

- (char)hasPassword;
- (void)dealloc;
- (<NSURLAuthenticationChallengeSender> *)sender;
- (NSString *)password;
- (NSString *)user;
- (int)failureCount;
- (ISURLAuthenticationChallenge *)initWithAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg0;
- (void)cancelAuthentication;
- (void)useCredential:(NSObject *)arg0;

@end
