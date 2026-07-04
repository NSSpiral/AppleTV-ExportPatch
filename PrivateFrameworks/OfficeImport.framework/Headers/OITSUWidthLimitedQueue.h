/* Runtime dump - OITSUWidthLimitedQueue
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUWidthLimitedQueue : NSObject
{
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> * mManagerQueue;
    NSObject<OS_dispatch_queue> * mTargetQueue;
    int mSpinLock;
}

- (OITSUWidthLimitedQueue *)initWithLimit:(unsigned int)arg0;
- (void)dealloc;
- (OITSUWidthLimitedQueue *)init;
- (void)performAsync:(id)arg0;

@end
