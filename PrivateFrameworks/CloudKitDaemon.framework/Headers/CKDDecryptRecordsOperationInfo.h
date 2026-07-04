/* Runtime dump - CKDDecryptRecordsOperationInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDecryptRecordsOperationInfo : CKDatabaseOperationInfo
{
    NSArray * _recordsToDecrypt;
    NSDictionary * _webSharingIdentityDataByRecordID;
}

@property (retain, nonatomic) NSArray * recordsToDecrypt;
@property (retain, nonatomic) NSDictionary * webSharingIdentityDataByRecordID;

- (void).cxx_destruct;
- (NSDictionary *)webSharingIdentityDataByRecordID;
- (void)setRecordsToDecrypt:(NSArray *)arg0;
- (void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg0;
- (NSArray *)recordsToDecrypt;

@end
