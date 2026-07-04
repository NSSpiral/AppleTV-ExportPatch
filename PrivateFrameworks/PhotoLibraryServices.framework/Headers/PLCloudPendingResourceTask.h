/* Runtime dump - PLCloudPendingResourceTask
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPendingResourceTask : NSObject
{
    CPLResourceTransferTask * _transferTask;
    NSMutableDictionary * _pendingTasks;
    NSDate * _lastUpdated;
    char _completed;
}

- (void)dealloc;
- (void)setTransferTask:(CPLResourceTransferTask *)arg0;
- (PLCloudPendingResourceTask *)initWithProgressBlock:(id /* block */)arg0 completionHandler:(/* block */ id)arg1 forTaskIdentifier:(NSString *)arg2;
- (void)cancelTaskWithIdentifier:(NSString *)arg0;
- (id)addProgressBlock:(id /* block */)arg0 completionHandler:(/* block */ id)arg1;
- (void)reportProgress:(float)arg0;
- (void)reportCompletionWithError:(NSError *)arg0;
- (id)taskIDs;
- (void)keepAlive;
- (void)cancelAllTask;
- (NSDate *)lastUpdated;

@end
