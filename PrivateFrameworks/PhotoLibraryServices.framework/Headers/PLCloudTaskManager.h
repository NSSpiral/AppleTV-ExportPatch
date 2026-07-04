/* Runtime dump - PLCloudTaskManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudTaskManager : NSObject
{
    NSMutableDictionary * _pendingTaskForTaskIdentifier;
    NSMutableDictionary * _resourceForTaskIdentifier;
    NSMutableDictionary * _highPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary * _lowPriorityResourceToTaskIdentifierMap;
}

- (void)dealloc;
- (PLCloudTaskManager *)init;
- (void)reset;
- (void)cancelTaskWithTaskIdentifier:(NSString *)arg0;
- (NSString *)getPendingTaskForTaskIdentifier:(NSString *)arg0;
- (char)hasTaskIdentifierForResource:(NSObject *)arg0 highPriority:(char)arg1;
- (id)addProgressBlock:(id /* block */)arg0 completionHandler:(/* block */ id)arg1 forResource:(NSObject *)arg2 highPriority:(/* block */ id)arg3;
- (void)createPendingTaskWithProgressBlock:(id /* block */)arg0 completionHandler:(/* block */ id)arg1 forResource:(NSObject *)arg2 highPriority:(/* block */ id)arg3 withTaskIdentifier:(NSString *)arg4;
- (void)setPendingTaskWithTransferTask:(CPLResourceTransferTask *)arg0 withTaskIdentifier:(NSString *)arg1;
- (void)reportCompletionForResource:(NSObject *)arg0 withError:(NSError *)arg1 highPriority:(char)arg2;
- (void)reportProgress:(float)arg0 forResource:(NSObject *)arg1 highPriority:(char)arg2;
- (NSObject *)taskIdentifiersForResource:(NSObject *)arg0 highPriority:(char)arg1;
- (NSObject *)firstTaskIdentifierForResource:(NSObject *)arg0 highPriority:(char)arg1;
- (NSObject *)_identifierForResource:(NSObject *)arg0;
- (void)setTaskIdentifiers:(id)arg0 forResource:(NSObject *)arg1 highPriority:(char)arg2;
- (NSObject *)taskForResource:(NSObject *)arg0 highPriority:(char)arg1;
- (void)removeTaskIdentifiersForResource:(NSObject *)arg0 highPriority:(char)arg1;

@end
