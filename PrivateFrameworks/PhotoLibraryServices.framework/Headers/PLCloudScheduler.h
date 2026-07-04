/* Runtime dump - PLCloudScheduler
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudScheduler : NSObject <PLCloudScenarioConsumer>
{
    NSObject<OS_dispatch_queue> * _backlogSync;
    NSObject<OS_dispatch_queue> * _operationsQueue;
    int _concurrencyLevel;
    NSMutableOrderedSet * _pendingOperations;
    NSMutableDictionary * _pendingScenarios;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)consumeScenario:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (PLCloudScheduler *)initWithConfiguration:(NSDictionary *)arg0;
- (void)reporioritizeBacklogOperations;
- (void)completeOperation:(NSObject *)arg0 withError:(NSError *)arg1;
- (void)runNextOperation;
- (unsigned int)operationsBacklogLimit;

@end
