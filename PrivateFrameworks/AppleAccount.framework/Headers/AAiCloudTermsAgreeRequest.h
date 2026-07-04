/* Runtime dump - AAiCloudTermsAgreeRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAiCloudTermsAgreeRequest : AARequest
{
    ACAccount * _account;
}

@property (retain, nonatomic) ACAccount * account;

- (void).cxx_destruct;
- (AAiCloudTermsAgreeRequest *)initWithURLString:(NSString *)arg0 account:(ACAccount *)arg1;
- (ACAccount *)account;
- (void)setAccount:(ACAccount *)arg0;
- (NSURLRequest *)urlRequest;

@end
