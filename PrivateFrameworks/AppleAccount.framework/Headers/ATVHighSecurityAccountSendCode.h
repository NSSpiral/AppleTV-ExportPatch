/* Runtime dump - ATVHighSecurityAccountSendCode
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface ATVHighSecurityAccountSendCode : AAAppleTVRequest
{
    NSDictionary * _device;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (ATVHighSecurityAccountSendCode *)initWithAccount:(ACAccount *)arg0 device:(NSDictionary *)arg1;
- (NSURLRequest *)urlRequest;

@end
