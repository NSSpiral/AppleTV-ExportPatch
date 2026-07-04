/* Runtime dump - ISAuthenticationChallengeOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISAuthenticationChallengeOperation : ISDialogOperation
{
    ISAuthenticationChallenge * _challenge;
    NSURLCredential * _credential;
}

@property (retain) ISAuthenticationChallenge * challenge;
@property (retain) NSURLCredential * credential;

+ (NSObject *)operationWithChallenge:(ISAuthenticationChallenge *)arg0;

- (void)dealloc;
- (void)run;
- (void)setCredential:(NSURLCredential *)arg0;
- (NSURLCredential *)credential;
- (ISAuthenticationChallenge *)challenge;
- (void)setChallenge:(ISAuthenticationChallenge *)arg0;
- (void)handleButtonSelected:(int)arg0 withResponseDictionary:(NSDictionary *)arg1;
- (NSDictionary *)_copyCredentialForSignInResponseDictionary:(NSDictionary *)arg0;

@end
