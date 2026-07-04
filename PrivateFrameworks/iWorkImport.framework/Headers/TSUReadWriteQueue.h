/* Runtime dump - TSUReadWriteQueue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUReadWriteQueue : NSObject
{
    NSObject<OS_dispatch_semaphore> * mCanEnqueueReaders;
    NSObject<OS_dispatch_queue> * mGlobalQueue;
    NSObject<OS_dispatch_group> * mInFlightReaders;
    NSObject<OS_dispatch_group> * mInFlightWriters;
}

- (void)dealloc;
- (TSUReadWriteQueue *)initWithIdentifier:(NSString *)arg0;
- (void)performAsyncWrite:(id)arg0;
- (void)performSyncRead:(id)arg0;
- (void)waitOnInFlightWriters;
- (void)performSyncWrite:(id)arg0;

@end
