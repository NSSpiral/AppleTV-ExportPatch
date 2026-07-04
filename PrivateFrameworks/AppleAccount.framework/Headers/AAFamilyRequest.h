/* Runtime dump - AAFamilyRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFamilyRequest : AARequest
{
    AAGrandSlamSigner * _grandSlamSigner;
}

@property (readonly, nonatomic) char isUserInitiated;

- (void).cxx_destruct;
- (char)isUserInitiated;
- (AAFamilyRequest *)initWithGrandSlamSigner:(AAGrandSlamSigner *)arg0;
- (AAFamilyRequest *)initWithAppleAccount:(NSObject *)arg0 grandSlamAccount:(ACAccount *)arg1 accountStore:(ACAccountStore *)arg2;
- (NSURLRequest *)urlRequest;

@end
