/* Runtime dump - PLPersonInfoManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersonInfoManager : NSObject
{
    NSMutableDictionary * _personDictsForPersonID;
    NSString * _plistPath;
}

+ (PLPersonInfoManager *)sharedManager;

- (void)dealloc;
- (PLPersonInfoManager *)init;
- (void)setPersonInfo:(NSDictionary *)arg0 forPersonID:(NSObject *)arg1;
- (NSObject *)personInfoForPersonID:(NSObject *)arg0;
- (NSString *)plistPath;
- (void)_loadDictionariesIfNeeded;
- (void)setFirstName:(NSString *)arg0 lastName:(NSString *)arg1 fullName:(NSString *)arg2 email:(SAPhonePlayVoiceMail *)arg3 forPersonID:(NSObject *)arg4;
- (NSObject *)firstNameForPersonID:(NSObject *)arg0;
- (NSObject *)lastNameForPersonID:(NSObject *)arg0;
- (NSObject *)fullNameForPersonID:(NSObject *)arg0;
- (NSObject *)emailForPersonID:(NSObject *)arg0;
- (void)setEmails:(NSArray *)arg0 phones:(NSArray *)arg1 forInvitationRecordGUID:(NSString *)arg2;
- (void)deleteEmailsAndPhonesForInvitationRecordGUID:(NSString *)arg0;
- (NSString *)emailsForInvitationRecordGUID:(NSString *)arg0;
- (NSString *)phonesForInvitationRecordGUID:(NSString *)arg0;
- (void)clearCacheForPersonID:(NSObject *)arg0;
- (void)removePersistedInfo;

@end
