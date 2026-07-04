/* Runtime dump - YTAccountAuthenticator
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTAccountAuthenticator : NSObject <NSURLConnectionDelegate>
{
    NSString * _accountToken;
    NSDate * _accountTokenDate;
    NSString * _account;
    NSString * _accountYouTubeName;
    NSString * _password;
    NSMutableData * _responseData;
    NSHTTPURLResponse * _urlResponse;
    NSString * _authURLBase;
    NSString * _clientUUID;
}

@property (retain, nonatomic) NSString * accountToken;
@property (retain, nonatomic) NSDate * accountTokenDate;
@property (retain, nonatomic) NSString * account;
@property (retain, nonatomic) NSString * accountYouTubeName;
@property (retain, nonatomic) NSString * password;
@property (retain, nonatomic) NSHTTPURLResponse * urlResponse;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (YTAccountAuthenticator *)sharedAuthenticator;

- (void)dealloc;
- (YTAccountAuthenticator *)init;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceiveResponse:(char)arg1;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (NSString *)account;
- (void)setAccount:(NSString *)arg0;
- (NSHTTPURLResponse *)urlResponse;
- (void)setUrlResponse:(NSHTTPURLResponse *)arg0;
- (NSString *)accountYouTubeName;
- (void)validateAccount:(NSObject *)arg0 password:(NSString *)arg1;
- (NSNumber *)tokenForCurrentAccount;
- (char)readyToRequestToken;
- (void)clearAccountInfo;
- (char)cachedCredentialsValid;
- (char)loadStoredCredentials;
- (id)_passwordFromKeychain;
- (void)setAccountYouTubeName:(NSString *)arg0;
- (void)setAccountToken:(NSString *)arg0;
- (void)setAccountTokenDate:(NSDate *)arg0;
- (void)_clearURLResponseInfo;
- (char)_isTokenExpired:(id)arg0;
- (void)_getNewTokenForAccount:(NSObject *)arg0 password:(NSString *)arg1;
- (NSURL *)_authRequestWithURL:(NSURL *)arg0;
- (NSString *)_clientUUID;
- (NSNumber *)_authRequestForAccount:(NSObject *)arg0 password:(NSString *)arg1;
- (void)_removePasswordFromKeychain;
- (void)_postAccountTokenGenerationFailedWithError:(NSError *)arg0;
- (void)_postNewAccountTokenAvailable;
- (NSString *)accountToken;
- (NSDate *)accountTokenDate;

@end
