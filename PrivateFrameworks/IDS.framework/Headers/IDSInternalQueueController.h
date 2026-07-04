/* Runtime dump - IDSInternalQueueController
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSInternalQueueController : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
}

+ (IDSInternalQueueController *)sharedInstance;

- (void)dealloc;
- (IDSInternalQueueController *)init;
- (void)performBlock:(id /* block */)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)assertQueueIsNotCurrent;
- (void)performBlock:(id /* block */)arg0 waitUntilDone:(/* block */ id)arg1;
- (char)isQueueCurrent;
- (void)assertQueueIsCurrent;

@end
