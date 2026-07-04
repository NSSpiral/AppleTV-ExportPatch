/* Runtime dump - AAEmailVettingRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAEmailVettingRequest : AARequest
{
    ACAccount * _account;
}

@property (retain, nonatomic) ACAccount * account;

- (void).cxx_destruct;
- (AAEmailVettingRequest *)initWithURLString:(NSString *)arg0 account:(ACAccount *)arg1;
- (AAEmailVettingRequest *)initWithAccount:(ACAccount *)arg0;
- (ACAccount *)account;
- (void)setAccount:(ACAccount *)arg0;
- (NSURLRequest *)urlRequest;

@end
