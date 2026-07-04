/* Runtime dump - MCEmailAccountPayloadBase
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCEmailAccountPayloadBase : MCPayload
{
    char _preventMove;
    char _preventAppSheet;
    char _SMIMEEnabled;
    char _isRecentsSyncingDisabled;
    char _SMIMEPerMessageSwitchEnabled;
    NSString * _SMIMESigningIdentityUUID;
    NSString * _SMIMEEncryptionIdentityUUID;
    NSData * _SMIMESigningIdentityPersistentID;
    NSData * _SMIMEEncryptionIdentityPersistentID;
    NSNumber * _preventMoveNum;
    NSNumber * _preventAppSheetNum;
    NSNumber * _SMIMEEnabledNum;
    NSNumber * _isRecentsSyncingDisabledNum;
    NSNumber * _SMIMEPerMessageSwitchEnabledNum;
}

@property (nonatomic) char preventMove;
@property (nonatomic) char preventAppSheet;
@property (nonatomic) char SMIMEEnabled;
@property (nonatomic) char isRecentsSyncingDisabled;
@property (retain, nonatomic) NSString * SMIMESigningIdentityUUID;
@property (retain, nonatomic) NSString * SMIMEEncryptionIdentityUUID;
@property (retain, nonatomic) NSData * SMIMESigningIdentityPersistentID;
@property (retain, nonatomic) NSData * SMIMEEncryptionIdentityPersistentID;
@property (nonatomic) char SMIMEPerMessageSwitchEnabled;
@property (retain, nonatomic) NSNumber * preventMoveNum;
@property (retain, nonatomic) NSNumber * preventAppSheetNum;
@property (retain, nonatomic) NSNumber * SMIMEEnabledNum;
@property (retain, nonatomic) NSNumber * isRecentsSyncingDisabledNum;
@property (retain, nonatomic) NSNumber * SMIMEPerMessageSwitchEnabledNum;

- (NSString *)description;
- (void).cxx_destruct;
- (MCEmailAccountPayloadBase *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSArray *)payloadDescriptionKeyValueSections;
- (char)preventMove;
- (void)setPreventMove:(char)arg0;
- (char)preventAppSheet;
- (void)setPreventAppSheet:(char)arg0;
- (char)SMIMEEnabled;
- (void)setSMIMEEnabled:(char)arg0;
- (char)isRecentsSyncingDisabled;
- (void)setIsRecentsSyncingDisabled:(char)arg0;
- (NSString *)SMIMESigningIdentityUUID;
- (void)setSMIMESigningIdentityUUID:(id)arg0;
- (NSString *)SMIMEEncryptionIdentityUUID;
- (void)setSMIMEEncryptionIdentityUUID:(id)arg0;
- (NSData *)SMIMESigningIdentityPersistentID;
- (void)setSMIMESigningIdentityPersistentID:(NSObject *)arg0;
- (NSData *)SMIMEEncryptionIdentityPersistentID;
- (void)setSMIMEEncryptionIdentityPersistentID:(NSObject *)arg0;
- (char)SMIMEPerMessageSwitchEnabled;
- (void)setSMIMEPerMessageSwitchEnabled:(char)arg0;
- (NSNumber *)preventMoveNum;
- (void)setPreventMoveNum:(NSNumber *)arg0;
- (NSNumber *)preventAppSheetNum;
- (void)setPreventAppSheetNum:(NSNumber *)arg0;
- (NSNumber *)SMIMEEnabledNum;
- (void)setSMIMEEnabledNum:(id)arg0;
- (NSNumber *)isRecentsSyncingDisabledNum;
- (void)setIsRecentsSyncingDisabledNum:(NSNumber *)arg0;
- (NSNumber *)SMIMEPerMessageSwitchEnabledNum;
- (void)setSMIMEPerMessageSwitchEnabledNum:(id)arg0;

@end
