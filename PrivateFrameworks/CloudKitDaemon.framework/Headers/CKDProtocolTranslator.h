/* Runtime dump - CKDProtocolTranslator
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProtocolTranslator : NSObject
{
    NSString * _bundleIdentifier;
    NSString * _containerScopedUserID;
    <CKDProtocolTranslatorIdentityDelegate> * _identityDelegate;
    NSString * _overriddenContainerScopedUserID;
}

@property (readonly, copy, nonatomic) NSString * bundleIdentifier;
@property (copy, nonatomic) NSString * containerScopedUserID;
@property (readonly, nonatomic) CKDPIdentifier * pUserID;
@property (weak, nonatomic) <CKDProtocolTranslatorIdentityDelegate> * identityDelegate;
@property (copy, nonatomic) NSString * overriddenContainerScopedUserID;

+ (CKDProtocolTranslator *)translatorIgnoringUserIDs;

- (NSString *)bundleIdentifier;
- (void).cxx_destruct;
- (NSObject *)recordFromPRecord:(NSObject *)arg0 error:(id *)arg1;
- (NSObject *)pRecordFromRecord:(NSObject *)arg0 forCache:(char)arg1;
- (NSString *)containerScopedUserID;
- (void)setContainerScopedUserID:(NSString *)arg0;
- (NSObject *)pQueryFromQuery:(NSObject *)arg0 error:(id *)arg1;
- (CKDProtocolTranslator *)initWithContainerScopedUserID:(NSString *)arg0 bundleIdentifier:(NSString *)arg1;
- (void)setIdentityDelegate:(<CKDProtocolTranslatorIdentityDelegate> *)arg0;
- (NSObject *)pRecordZoneIdentifierFromRecordZoneID:(NSObject *)arg0;
- (NSString *)recordIDFromPRecordIdentifier:(NSString *)arg0 error:(id *)arg1;
- (int)fieldValueTypeFromObject:(NSObject *)arg0;
- (NSObject *)fieldValueOfType:(int)arg0 withObject:(NSObject *)arg1;
- (NSObject *)pRecordIdentifierFromRecordID:(NSObject *)arg0;
- (NSObject *)pRecordIdentifierFromShareID:(NSObject *)arg0;
- (NSSet *)pAssetFromAsset:(NSSet *)arg0;
- (id)pPackageFromPackage:(id)arg0;
- (NSObject *)fieldValueFromObject:(NSObject *)arg0;
- (id)objectRepresentationFromFieldValue:(id)arg0;
- (NSSet *)assetFromPAsset:(NSSet *)arg0 error:(id *)arg1;
- (id)packageFromPPackage:(id)arg0 error:(id *)arg1;
- (id)locationFieldValueWithLatitude:(double)arg0 longitude:(double)arg1;
- (NSObject *)fieldValueListOfType:(int)arg0 withList:(NSArray *)arg1;
- (NSString *)pFieldWithKey:(NSString *)arg0 value:(NSObject *)arg1;
- (NSObject *)pShareIdentifierFromShareID:(NSObject *)arg0;
- (id)shareFromPShare:(id)arg0 error:(id *)arg1;
- (NSObject *)pSubscriptionFromSubscription:(NSObject *)arg0 error:(id *)arg1;
- (id)pShareFromShare:(id)arg0;
- (NSObject *)subscriptionFromPSubscription:(NSObject *)arg0 error:(id *)arg1;
- (NSString *)pAliasWithEmailAddress:(NSString *)arg0;
- (NSObject *)pAliasWithUserRecordID:(CKRecordID *)arg0;
- (NSDictionary *)containerPrivacySettingsFromPContainerPrivacySettings:(NSDictionary *)arg0;
- (NSString *)recordZoneIDFromPRecordZoneIdentifier:(NSString *)arg0 error:(id *)arg1;
- (NSString *)notificationFromPPushMessage:(NSString *)arg0;
- (NSObject *)deltaPRecordFromRecord:(NSObject *)arg0 withAllFields:(char)arg1 outDeletedMergeFields:(id *)arg2 outKeysToSend:(id *)arg3;
- (NSString *)shareIDFromPShareIdentifier:(NSString *)arg0 error:(id *)arg1;
- (NSObject *)_initWithContainerScopedUserID:(NSString *)arg0 bundleIdentifier:(NSString *)arg1;
- (void)setOverriddenContainerScopedUserID:(NSString *)arg0;
- (NSString *)overriddenContainerScopedUserID;
- (char)_isDefaultUserNameFromServer:(NSObject *)arg0;
- (char)_isDefaultUserNameFromClient:(NSObject *)arg0;
- (NSString *)userNameFromPIdentifier:(NSString *)arg0 error:(id *)arg1;
- (NSString *)pIdentifierFromUserRecordName:(NSString *)arg0;
- (NSString *)recordIDFromPUserName:(NSString *)arg0 error:(id *)arg1;
- (NSObject *)pIdentifierFromUserRecordID:(NSObject *)arg0;
- (NSArray *)_pRecordFromRecordSansValues:(NSArray *)arg0 forCache:(char)arg1;
- (id)shareParticipantFromPParticipant:(id)arg0 error:(id *)arg1;
- (id)pParticipantFromShareParticipant:(id)arg0;
- (<CKDProtocolTranslatorIdentityDelegate> *)identityDelegate;
- (CKDPIdentifier *)pUserID;
- (NSObject *)pRecordFromRecord:(NSObject *)arg0;
- (NSObject *)recordZoneFromPRecordZone:(NSObject *)arg0 withDatabaseScope:(int)arg1 error:(id *)arg2;
- (NSObject *)pRecordZoneFromRecordZone:(NSObject *)arg0;
- (id)identityFromPUser:(id)arg0;

@end
