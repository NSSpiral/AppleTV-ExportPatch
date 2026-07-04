/* Runtime dump - AACompleteEmailVettingRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AACompleteEmailVettingRequest : AAEmailVettingRequest
{
    NSString * _token;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AACompleteEmailVettingRequest *)initWithAccount:(ACAccount *)arg0 token:(NSString *)arg1;
- (AACompleteEmailVettingRequest *)initWithURLString:(NSString *)arg0 account:(NSObject *)arg1 token:(NSString *)arg2;
- (NSDictionary *)bodyDictionary;

@end
