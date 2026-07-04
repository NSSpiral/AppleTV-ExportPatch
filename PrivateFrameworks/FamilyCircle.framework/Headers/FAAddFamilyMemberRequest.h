/* Runtime dump - FAAddFamilyMemberRequest
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAAddFamilyMemberRequest : FAFamilyCircleRequest
{
    char _memberIsUnder13;
    NSString * _memberAppleID;
    NSString * _memberPassword;
}

@property (readonly, copy) NSString * memberAppleID;
@property (readonly, copy) NSString * memberPassword;
@property (readonly) char memberIsUnder13;

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)arg0;
- (NSString *)memberAppleID;
- (NSString *)memberPassword;
- (char)memberIsUnder13;
- (FAAddFamilyMemberRequest *)initWithFamilyMemberAppleID:(NSObject *)arg0 password:(NSString *)arg1 isUnder13:(char)arg2;

@end
