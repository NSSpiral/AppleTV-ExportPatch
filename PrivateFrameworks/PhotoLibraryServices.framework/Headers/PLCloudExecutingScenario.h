/* Runtime dump - PLCloudExecutingScenario
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudExecutingScenario : NSObject
{
    PLCloudScenario * _scenario;
    id _completionCallback;
    PLCloudScenarioExecutionResult * _executionState;
}

@property (retain, nonatomic) PLCloudScenario * scenario;
@property (copy, nonatomic) id completionCallback;
@property (retain, nonatomic) PLCloudScenarioExecutionResult * executionState;

- (void)dealloc;
- (PLCloudScenario *)scenario;
- (void)setScenario:(PLCloudScenario *)arg0;
- (id /* block */)completionCallback;
- (void)setCompletionCallback:(id /* block */)arg0;
- (PLCloudScenarioExecutionResult *)executionState;
- (void)setExecutionState:(PLCloudScenarioExecutionResult *)arg0;

@end
