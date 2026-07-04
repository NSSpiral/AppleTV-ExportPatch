/* Runtime dump - AASigningSessionResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASigningSessionResponse : AAResponse
{
    NSData * _sessionData;
}

@property (retain, nonatomic) NSData * sessionData;

- (void).cxx_destruct;
- (AASigningSessionResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSData *)sessionData;
- (void)setSessionData:(NSData *)arg0;

@end
