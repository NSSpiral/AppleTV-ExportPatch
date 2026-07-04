/* Runtime dump - CKDFetchRecordZonesOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation
{
    char _isFetchAllRecordZonesOperation;
    char _ignorePCSFailures;
    id _recordZoneFetchedProgressBlock;
    NSArray * _recordZoneIDs;
}

@property (copy, nonatomic) id recordZoneFetchedProgressBlock;
@property (retain, nonatomic) NSArray * recordZoneIDs;
@property (nonatomic) char isFetchAllRecordZonesOperation;
@property (nonatomic) char ignorePCSFailures;

- (void)main;
- (void).cxx_destruct;
- (CKDFetchRecordZonesOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setRecordZoneFetchedProgressBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (void)setRecordZoneIDs:(NSArray *)arg0;
- (void)setIsFetchAllRecordZonesOperation:(char)arg0;
- (void)setIgnorePCSFailures:(char)arg0;
- (NSArray *)recordZoneIDs;
- (void)_handleRecordZoneFetch:(id)arg0 zoneID:(CKRecordZoneID *)arg1 responseCode:(int *)arg2;
- (char)isFetchAllRecordZonesOperation;
- (char)ignorePCSFailures;
- (id /* block */)recordZoneFetchedProgressBlock;

@end
