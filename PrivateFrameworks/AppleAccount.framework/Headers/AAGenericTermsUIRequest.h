/* Runtime dump - AAGenericTermsUIRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAGenericTermsUIRequest : AARequest
{
    NSDictionary * _requestDictionary;
    ACAccount * _account;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AAGenericTermsUIRequest *)initWithParameters:(NSDictionary *)arg0;
- (AAGenericTermsUIRequest *)initWithAccount:(ACAccount *)arg0 parameters:(NSDictionary *)arg1;
- (NSURLRequest *)urlRequest;

@end
