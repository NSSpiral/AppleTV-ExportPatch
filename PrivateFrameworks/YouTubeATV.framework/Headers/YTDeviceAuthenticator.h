/* Runtime dump - YTDeviceAuthenticator
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTDeviceAuthenticator : NSObject <NSURLConnectionDelegate>
{
    NSURLConnection * _connection;
    NSMutableData * _responseData;
    NSString * _token;
    double _timeTokenGranted;
    int _phase;
    NSData * _r1;
    NSData * _r1Hash;
    NSData * _r2;
    NSData * _hmac;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (YTDeviceAuthenticator *)sharedAuthenticator;

- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(char)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (NSString *)token;
- (char)isAuthenticating;
- (void)authenticate;
- (void)_copyCertificateData:(id *)arg0 privateKey:(struct __SecKey * *)arg1;
- (void)_loadStatusChanged;
- (void)_clearNonces;
- (char)_authenticate1;
- (char)canAuthenticate;
- (void)_failWithErrorCode:(int)arg0;
- (void)_connectionDidEnd;
- (char)_authenticate2;
- (void)_succeeded;
- (void)invalidateToken;

@end
