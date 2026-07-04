/* Runtime dump - AASecondaryAuthenticationResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AASecondaryAuthenticationResponse : AAResponse
{
    NSString * _secondFactorToken;
    NSData * _buddyML;
}

@property (readonly, nonatomic) NSString * secondFactorToken;
@property (readonly, nonatomic) NSData * buddyML;

- (void).cxx_destruct;
- (AASecondaryAuthenticationResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSString *)secondFactorToken;
- (NSData *)buddyML;

@end
