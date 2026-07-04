/* Runtime dump - AASigningSessionRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASigningSessionRequest : AARequest
{
    NSData * _sessionInfoRequestData;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (AASigningSessionRequest *)initWithURLString:(NSString *)arg0 sessionInfoRequestData:(NSData *)arg1;
- (NSURLRequest *)urlRequest;

@end
