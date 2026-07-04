/* Runtime dump - AAFamilyMemberDetailsUIRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFamilyMemberDetailsUIRequest : AAFamilyRequest
{
    NSNumber * _memberDSID;
    NSString * _memberEmail;
}

@property (copy, nonatomic) NSNumber * memberDSID;
@property (copy, nonatomic) NSString * memberEmail;

- (NSString *)urlString;
- (void).cxx_destruct;
- (char)isUserInitiated;
- (NSNumber *)memberDSID;
- (void)setMemberDSID:(NSNumber *)arg0;
- (NSString *)memberEmail;
- (void)setMemberEmail:(NSString *)arg0;
- (NSURLRequest *)urlRequest;

@end
