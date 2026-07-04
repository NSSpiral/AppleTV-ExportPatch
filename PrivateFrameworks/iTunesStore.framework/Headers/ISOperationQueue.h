/* Runtime dump - ISOperationQueue
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISOperationQueue : NSObject
{
    NSOperationQueue * _queue;
}

@property char adjustsMaxConcurrentOperationCount;

+ (NSOperationQueue *)mainQueue;

- (void)addOperations:(NSArray *)arg0 waitUntilFinished:(char)arg1;
- (void)dealloc;
- (ISOperationQueue *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setMaxConcurrentOperationCount:(int)arg0;
- (void)cancelAllOperations;
- (void)addOperation:(NSObject *)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSArray *)operations;
- (int)operationCount;
- (void)setSuspended:(char)arg0;
- (int)maxConcurrentOperationCount;
- (char)adjustsMaxConcurrentOperationCount;
- (void)setAdjustsMaxConcurrentOperationCount:(char)arg0;

@end
