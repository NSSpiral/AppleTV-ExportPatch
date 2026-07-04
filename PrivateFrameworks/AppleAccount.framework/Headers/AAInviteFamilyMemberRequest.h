/* Runtime dump - AAInviteFamilyMemberRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAInviteFamilyMemberRequest : AAFamilyRequest
{
    NSString * _inviteeEmail;
    NSString * _inviteeCompositeName;
    NSString * _inviteeShortName;
}

@property (copy, nonatomic) NSString * inviteeEmail;
@property (copy, nonatomic) NSString * inviteeCompositeName;
@property (copy, nonatomic) NSString * inviteeShortName;

- (NSString *)urlString;
- (void).cxx_destruct;
- (char)isUserInitiated;
- (NSString *)inviteeEmail;
- (void)setInviteeEmail:(NSString *)arg0;
- (NSString *)inviteeCompositeName;
- (void)setInviteeCompositeName:(NSString *)arg0;
- (NSString *)inviteeShortName;
- (void)setInviteeShortName:(NSString *)arg0;
- (NSURLRequest *)urlRequest;

@end
