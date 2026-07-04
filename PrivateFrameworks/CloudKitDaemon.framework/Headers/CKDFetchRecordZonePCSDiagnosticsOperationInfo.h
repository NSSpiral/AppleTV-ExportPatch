/* Runtime dump - CKDFetchRecordZonePCSDiagnosticsOperationInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordZonePCSDiagnosticsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray * _recordZoneIDs;
}

@property (retain, nonatomic) NSArray * recordZoneIDs;

- (void).cxx_destruct;
- (void)setRecordZoneIDs:(NSArray *)arg0;
- (NSArray *)recordZoneIDs;

@end
