/* Runtime dump - AAAuthenticateRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAuthenticateRequest : AARequest
{
    NSString * _username;
    NSString * _password;
    NSString * _authToken;
    ACAccount * _account;
}

@property (copy, nonatomic) NSString * username;
@property (copy, nonatomic) NSString * password;
@property (copy, nonatomic) NSString * authToken;
@property (retain, nonatomic) ACAccount * account;

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (NSObject *)urlCredential;
- (AAAuthenticateRequest *)initWithURLString:(NSString *)arg0 username:(NSString *)arg1 password:(NSString *)arg2;
- (AAAuthenticateRequest *)initWithAccount:(ACAccount *)arg0;
- (void)setAuthToken:(NSString *)arg0;
- (NSString *)password;
- (NSString *)authToken;
- (void)setPassword:(NSString *)arg0;
- (void)setUsername:(NSString *)arg0;
- (AAAuthenticateRequest *)initWithUsername:(NSString *)arg0 password:(NSString *)arg1;
- (ACAccount *)account;
- (void)setAccount:(ACAccount *)arg0;
- (NSURLRequest *)urlRequest;
- (NSString *)username;

@end
