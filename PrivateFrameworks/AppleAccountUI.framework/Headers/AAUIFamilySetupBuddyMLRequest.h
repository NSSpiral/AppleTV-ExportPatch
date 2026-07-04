/* Runtime dump - AAUIFamilySetupBuddyMLRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIFamilySetupBuddyMLRequest : AAFamilyRequest
{
    SSAccount * _iTunesAccount;
    NSString * _inviteCode;
}

@property (retain, nonatomic) SSAccount * iTunesAccount;
@property (copy, nonatomic) NSString * inviteCode;

- (NSString *)urlString;
- (void).cxx_destruct;
- (char)isUserInitiated;
- (SSAccount *)iTunesAccount;
- (void)setiTunesAccount:(SSAccount *)arg0;
- (NSString *)inviteCode;
- (void)setInviteCode:(NSString *)arg0;
- (NSURLRequest *)urlRequest;

@end
