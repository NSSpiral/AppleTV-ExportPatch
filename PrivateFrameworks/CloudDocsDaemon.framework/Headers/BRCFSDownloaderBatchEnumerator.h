/* Runtime dump - BRCFSDownloaderBatchEnumerator
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSDownloaderBatchEnumerator : NSObject
{
    long long _now;
    long long * _retryQueueKick;
    PQLResultSet * _rs;
    BRCSyncContext * _syncContext;
}

@property (readonly, nonatomic) BRCSyncContext * syncContext;

- (void)close;
- (void).cxx_destruct;
- (BRCSyncContext *)syncContext;
- (BRCFSDownloaderBatchEnumerator *)initWithSyncContext:(BRCSyncContext *)arg0 kind:(int)arg1 now:(long long)arg2 retryQueueKick:(long long *)arg3;
- (NSObject *)nextItemAndStageID:(id *)arg0 etag:(id *)arg1;

@end
