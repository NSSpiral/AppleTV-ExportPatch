/* Runtime dump - AAFamilyEligibilityRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFamilyEligibilityRequest : AAFamilyRequest
{
    SSAccount * _iTunesAccount;
}

@property (retain, nonatomic) SSAccount * iTunesAccount;

+ (Class)responseClass;

- (NSString *)urlString;
- (void).cxx_destruct;
- (SSAccount *)iTunesAccount;
- (void)setITunesAccount:(SSAccount *)arg0;
- (NSURLRequest *)urlRequest;

@end
