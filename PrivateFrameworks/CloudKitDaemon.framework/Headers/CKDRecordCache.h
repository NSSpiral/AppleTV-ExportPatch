/* Runtime dump - CKDRecordCache
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordCache : CKSQLite
{
    CKDClientContext * _context;
    int _scope;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain, nonatomic) CKDClientContext * context;
@property (nonatomic) int scope;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;

- (CKDClientContext *)context;
- (void)setContext:(CKDClientContext *)arg0;
- (void)setScope:(int)arg0;
- (int)scope;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)_cachedRecordKnownUserKeyData:(NSData *)arg0 satisfiesRequiredKeys:(NSArray *)arg1;
- (NSObject *)_recordWithID:(int)arg0 requiredKeys:(NSArray *)arg1;
- (char)_cachedRecordHasValidAssets:(NSArray *)arg0 forRequiredKeys:(NSArray *)arg1;
- (NSObject *)_trimRecord:(NSObject *)arg0 toRequiredKeys:(NSArray *)arg1;
- (void)addRecord:(NSObject *)arg0 knownUserKeys:(NSArray *)arg1;
- (CKDRecordCache *)initWithPath:(NSString *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSObject *)recordWithID:(int)arg0 requiredKeys:(NSArray *)arg1;
- (id)recordsWithIDs:(int)arg0 requiredKeys:(NSArray *)arg1;
- (NSObject *)etagForRecordID:(NSObject *)arg0 requiredKeys:(NSArray *)arg1;
- (void)deleteRecordWithID:(int)arg0;
- (void)clearAllRecords;
- (void)clearAllRecordsForZoneWithID:(int)arg0;
- (void)clearAssetAuthTokensForRecordWithID:(int)arg0;
- (void)expireRecordsWithExpiryDate:(NSDate *)arg0;

@end
