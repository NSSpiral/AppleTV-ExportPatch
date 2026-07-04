/* Runtime dump - FARemoveFamilyMemberRequest
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest
{
    NSNumber * _memberDSID;
}

@property (readonly, copy) NSNumber * memberDSID;

- (void).cxx_destruct;
- (NSNumber *)memberDSID;
- (void)startRequestWithCompletionHandler:(id /* block */)arg0;
- (FARemoveFamilyMemberRequest *)initWithFamilyMemberDSID:(NSNumber *)arg0;

@end
