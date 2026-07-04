/* Runtime dump - AAUIDeclineFamilyInviteRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDeclineFamilyInviteRequest : AAFamilyRequest
{
    NSString * _inviteCode;
}

@property (copy, nonatomic) NSString * inviteCode;

- (NSString *)urlString;
- (void).cxx_destruct;
- (char)isUserInitiated;
- (NSString *)inviteCode;
- (void)setInviteCode:(NSString *)arg0;
- (NSURLRequest *)urlRequest;

@end
