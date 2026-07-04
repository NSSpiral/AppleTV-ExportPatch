/* Runtime dump - AAAddEmailUIRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAddEmailUIRequest : AARequest
{
    ACAccount * _account;
}

@property (retain, nonatomic) ACAccount * account;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AAAddEmailUIRequest *)initWithURLString:(NSString *)arg0 account:(ACAccount *)arg1;
- (AAAddEmailUIRequest *)initWithAccount:(ACAccount *)arg0;
- (ACAccount *)account;
- (void)setAccount:(ACAccount *)arg0;
- (NSURLRequest *)urlRequest;

@end
