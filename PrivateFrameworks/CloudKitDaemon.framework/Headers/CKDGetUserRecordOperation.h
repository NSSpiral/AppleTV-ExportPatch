/* Runtime dump - CKDGetUserRecordOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetUserRecordOperation : CKDFetchRecordsOperation
{
    CKRecord * _userRecord;
}

@property (retain, nonatomic) CKRecord * userRecord;

- (void)main;
- (void).cxx_destruct;
- (CKRecord *)userRecord;
- (void)_fetchRecords;
- (void)setUserRecord:(CKRecord *)arg0;

@end
