/* Runtime dump - AAFMIPAuthenticateResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFMIPAuthenticateResponse : AAResponse
{
    NSDictionary * _tokens;
    NSDictionary * _appleAccountInfo;
}

@property (readonly, nonatomic) NSString * fmipWipeToken;

- (void).cxx_destruct;
- (AAFMIPAuthenticateResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSString *)fmipWipeToken;

@end
