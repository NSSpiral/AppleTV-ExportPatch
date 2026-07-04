/* Runtime dump - AAFamilyDetailsResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFamilyDetailsResponse : AAResponse
{
    NSArray * _members;
    char _canAddMembers;
    char _canAddChildMembers;
    AAFamilyMember * _organizer;
    AAFamilyMember * _me;
    NSArray * _invites;
    NSArray * _pendingMembers;
    NSString * _childAccountPrompt;
    NSString * _childAccountButtonTitle;
}

@property (readonly, nonatomic) NSArray * members;
@property (readonly, nonatomic) AAFamilyMember * organizer;
@property (readonly, nonatomic) AAFamilyMember * me;
@property (readonly, nonatomic) NSArray * invites;
@property (readonly, nonatomic) NSArray * pendingMembers;
@property (readonly, nonatomic) int memberCount;
@property (readonly, nonatomic) int pendingMemberCount;
@property (readonly, nonatomic) int pendingInviteCount;
@property (readonly, nonatomic) char canAddMembers;
@property (readonly, nonatomic) char canAddChildMembers;
@property (readonly, nonatomic) NSString * childAccountPrompt;
@property (readonly, nonatomic) NSString * childAccountButtonTitle;
@property (readonly, nonatomic) NSArray * firstNames;

- (AAFamilyMember *)organizer;
- (NSArray *)invites;
- (void).cxx_destruct;
- (AAFamilyDetailsResponse *)initWithHTTPResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (int)memberCount;
- (int)pendingMemberCount;
- (int)pendingInviteCount;
- (NSArray *)firstNames;
- (NSArray *)pendingMembers;
- (char)canAddMembers;
- (char)canAddChildMembers;
- (NSString *)childAccountPrompt;
- (NSString *)childAccountButtonTitle;
- (NSArray *)members;
- (AAFamilyMember *)me;

@end
