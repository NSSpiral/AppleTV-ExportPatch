/* Runtime dump - TSUWidthLimitedQueue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUWidthLimitedQueue : NSObject
{
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> * mManagerQueue;
    NSObject<OS_dispatch_queue> * mTargetQueue;
    int mSpinLock;
}

- (TSUWidthLimitedQueue *)initWithLimit:(unsigned int)arg0;
- (void)dealloc;
- (TSUWidthLimitedQueue *)init;
- (void)performAsync:(id)arg0;

@end
