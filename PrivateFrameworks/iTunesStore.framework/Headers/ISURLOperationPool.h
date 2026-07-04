/* Runtime dump - ISURLOperationPool
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLOperationPool : NSObject
{
    ISOperationQueue * _operationQueue;
}

@property (retain, nonatomic) ISOperationQueue * operationQueue;

- (void)dealloc;
- (ISURLOperationPool *)init;
- (void)setOperationQueue:(ISOperationQueue *)arg0;
- (ISOperationQueue *)operationQueue;
- (NSObject *)_poolOperationForOperation:(NSObject *)arg0 flags:(int)arg1;
- (void)cancelOperation:(NSObject *)arg0;
- (void)addOperation:(NSObject *)arg0 withFlags:(int)arg1;

@end
