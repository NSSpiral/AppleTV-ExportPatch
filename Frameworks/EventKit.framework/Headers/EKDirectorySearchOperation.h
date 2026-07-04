/* Runtime dump - EKDirectorySearchOperation
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDirectorySearchOperation : NSOperation
{
    char _isFinished;
    char _isExecuting;
    NSString * _accountID;
    EKDirectorySearchQuery * _query;
    id _resultsBlock;
    id _searchID;
    char _numberOfMatchesExceededLimit;
    NSError * _error;
}

@property (nonatomic) char numberOfMatchesExceededLimit;
@property (retain, nonatomic) NSError * error;

- (void)_finishWithError:(NSError *)arg0;
- (NSMutableArray *)_recordTypes;
- (void)_processResults:(NSArray *)arg0;
- (void)setNumberOfMatchesExceededLimit:(char)arg0;
- (NSArray *)_processGroupsInResults:(NSArray *)arg0;
- (NSArray *)_processLocationsInResults:(NSArray *)arg0;
- (NSArray *)_processResourcesInResults:(NSArray *)arg0;
- (NSArray *)_processPeopleInResults:(NSArray *)arg0;
- (EKDirectorySearchOperation *)initWithSource:(NSObject *)arg0 query:(EKDirectorySearchQuery *)arg1 resultsBlock:(id /* block */)arg2;
- (char)numberOfMatchesExceededLimit;
- (void)cancel;
- (void)dealloc;
- (EKDirectorySearchOperation *)init;
- (void)start;
- (void)main;
- (char)isFinished;
- (char)isExecuting;
- (char)isConcurrent;
- (NSError *)error;
- (void)setError:(NSError *)arg0;

@end
