/* Runtime dump - PLCloudScenarioExecutionResult
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudScenarioExecutionResult : NSObject
{
    char _duplicateScenario;
    NSMutableArray * _failedOperations;
    NSMutableArray * _successfullOperations;
}

@property (nonatomic) char duplicateScenario;
@property (retain, nonatomic) NSMutableArray * failedOperations;
@property (retain, nonatomic) NSMutableArray * successfullOperations;

- (void)dealloc;
- (PLCloudScenarioExecutionResult *)init;
- (char)duplicateScenario;
- (void)setDuplicateScenario:(char)arg0;
- (NSMutableArray *)failedOperations;
- (void)setFailedOperations:(NSMutableArray *)arg0;
- (NSMutableArray *)successfullOperations;
- (void)setSuccessfullOperations:(NSMutableArray *)arg0;

@end
