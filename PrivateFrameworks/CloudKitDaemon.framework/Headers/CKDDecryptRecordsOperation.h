/* Runtime dump - CKDDecryptRecordsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDecryptRecordsOperation : CKDDatabaseOperation
{
    char _forcePCSDecrypt;
    id _recordDecryptedBlock;
    NSArray * _recordsToDecrypt;
    NSObject<OS_dispatch_group> * _recordDecryptGroup;
    NSDictionary * _webSharingIdentityDataByRecordID;
}

@property (nonatomic) char forcePCSDecrypt;
@property (copy, nonatomic) id recordDecryptedBlock;
@property (retain, nonatomic) NSArray * recordsToDecrypt;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * recordDecryptGroup;
@property (retain, nonatomic) NSDictionary * webSharingIdentityDataByRecordID;

- (void)main;
- (void).cxx_destruct;
- (CKDDecryptRecordsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (char)operationShouldBeFlowControlled;
- (char)shouldCheckAppVersion;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (void)setForcePCSDecrypt:(char)arg0;
- (NSDictionary *)webSharingIdentityDataByRecordID;
- (void)setRecordsToDecrypt:(NSArray *)arg0;
- (void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg0;
- (char)forcePCSDecrypt;
- (void)setRecordDecryptedBlock:(id /* block */)arg0;
- (NSArray *)recordsToDecrypt;
- (void)setRecordDecryptGroup:(NSObject<OS_dispatch_group> *)arg0;
- (id /* block */)recordDecryptedBlock;
- (NSObject<OS_dispatch_group> *)recordDecryptGroup;
- (void)_decryptRecord:(NSObject *)arg0;
- (void)_handleProtectionDataForRecord:(NSObject *)arg0;
- (NSObject *)_unwrapEncryptedPropertiesOnRecord:(NSObject *)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1;
- (void)_recordWasDecrypted:(id)arg0 withError:(NSError *)arg1;
- (void)_decryptRecord:(NSObject *)arg0 usingWebSharingIdentityData:(NSData *)arg1;
- (void)_handleZoneProtectionDataForRecord:(NSObject *)arg0;
- (void)_handleShareProtectionDataForRecord:(NSObject *)arg0;
- (NSString *)_unwrapAssetKey:(NSString *)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1;
- (NSData *)_unwrapEncryptedData:(NSData *)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1 forField:(UISearchBarTextField *)arg2;
- (NSArray *)_unwrapPackageAssets:(NSArray *)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1;

@end
