/* Runtime dump - AAUpdateProvisioningRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAUpdateProvisioningRequest : AARequest
{
    ACAccount * _account;
    NSString * _authToken;
}

@property (retain, nonatomic) ACAccount * account;
@property (copy, nonatomic) NSString * authToken;

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (NSObject *)urlCredential;
- (AAUpdateProvisioningRequest *)initWithAccount:(ACAccount *)arg0 token:(NSString *)arg1;
- (AAUpdateProvisioningRequest *)initWithURLString:(NSString *)arg0 account:(ACAccount *)arg1;
- (AAUpdateProvisioningRequest *)initWithAccount:(ACAccount *)arg0;
- (void)setAuthToken:(NSString *)arg0;
- (NSString *)authToken;
- (ACAccount *)account;
- (void)setAccount:(ACAccount *)arg0;
- (NSURLRequest *)urlRequest;

@end
