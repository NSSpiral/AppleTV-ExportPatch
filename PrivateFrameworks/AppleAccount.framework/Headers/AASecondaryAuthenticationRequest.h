/* Runtime dump - AASecondaryAuthenticationRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASecondaryAuthenticationRequest : AARequest
{
    NSString * _primaryToken;
    NSString * _dsid;
}

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AASecondaryAuthenticationRequest *)initWithDSID:(id)arg0 primaryToken:(NSString *)arg1;
- (NSURLRequest *)urlRequest;

@end
