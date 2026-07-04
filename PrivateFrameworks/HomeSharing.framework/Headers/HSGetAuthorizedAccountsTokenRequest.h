/* Runtime dump - HSGetAuthorizedAccountsTokenRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSGetAuthorizedAccountsTokenRequest : HSRequest

+ (HSGetAuthorizedAccountsTokenRequest *)requestWithDSID:(unsigned long long)arg0 deviceGUID:(NSString *)arg1;

- (NSURLResponse *)canonicalResponseForResponse:(NSURLResponse *)arg0;
- (HSGetAuthorizedAccountsTokenRequest *)initWithDSID:(unsigned long long)arg0 deviceGUID:(NSString *)arg1;

@end
