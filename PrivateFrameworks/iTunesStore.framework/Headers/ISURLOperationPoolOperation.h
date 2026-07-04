/* Runtime dump - ISURLOperationPoolOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLOperationPoolOperation : ISOperation
{
    int _cancelCount;
    char _forwardImmediately;
    NSMutableArray * _operations;
}

@property (readonly, nonatomic) ISURLOperation * mainOperation;

- (void)dealloc;
- (void)addOperation:(NSObject *)arg0;
- (void)run;
- (char)containsOperation:(NSObject *)arg0;
- (void)cancelOperation:(NSObject *)arg0;
- (ISURLOperation *)mainOperation;
- (void)_forwardResponseFromOperation:(NSObject *)arg0 toOperation:(NSObject *)arg1;

@end
