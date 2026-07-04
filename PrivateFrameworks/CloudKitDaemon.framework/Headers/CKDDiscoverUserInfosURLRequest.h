/* Runtime dump - CKDDiscoverUserInfosURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDiscoverUserInfosURLRequest : CKDURLRequest
{
    char _wantsProtectionInfo;
    id _progressBlock;
    NSArray * _emailsToDiscover;
    NSArray * _userRecordIDsToDiscover;
    NSMutableDictionary * _emailAliasToEmailAddress;
    NSMutableDictionary * _hashedEmailByRequestID;
}

@property (nonatomic) char wantsProtectionInfo;
@property (copy, nonatomic) id progressBlock;
@property (retain, nonatomic) NSArray * emailsToDiscover;
@property (retain, nonatomic) NSArray * userRecordIDsToDiscover;
@property (retain, nonatomic) NSMutableDictionary * emailAliasToEmailAddress;
@property (retain, nonatomic) NSMutableDictionary * hashedEmailByRequestID;

- (void).cxx_destruct;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)emailsToDiscover;
- (NSMutableDictionary *)emailAliasToEmailAddress;
- (NSMutableDictionary *)hashedEmailByRequestID;
- (NSArray *)userRecordIDsToDiscover;
- (CKDDiscoverUserInfosURLRequest *)initWithEmailAddresses:(NSArray *)arg0 userRecordIDs:(NSArray *)arg1;
- (char)wantsProtectionInfo;
- (void)setWantsProtectionInfo:(char)arg0;
- (void)setEmailsToDiscover:(NSArray *)arg0;
- (void)setUserRecordIDsToDiscover:(NSArray *)arg0;
- (void)setEmailAliasToEmailAddress:(NSMutableDictionary *)arg0;
- (void)setHashedEmailByRequestID:(NSMutableDictionary *)arg0;
- (int)operationType;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg0;

@end
