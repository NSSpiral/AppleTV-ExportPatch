/* Runtime dump - AAAvailabilityRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAAvailabilityRequest : AARequest
{
    ACAccount * _account;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AAAvailabilityRequest *)initWithAccount:(ACAccount *)arg0;
- (NSURLRequest *)urlRequest;

@end
