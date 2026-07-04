/* Runtime dump - ATVHighSecurityAccountVerifyCode
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode
{
    NSString * _hsaCode;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (ATVHighSecurityAccountVerifyCode *)initWithAccount:(ACAccount *)arg0 device:(NSObject *)arg1 hsaCode:(NSString *)arg2;
- (NSURLRequest *)urlRequest;

@end
