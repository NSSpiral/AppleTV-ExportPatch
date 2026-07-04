/* Runtime dump - CalNWideQueue
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalNWideQueue : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (void).cxx_destruct;
- (CalNWideQueue *)initWithSerialQueue:(NSObject<OS_dispatch_queue> *)arg0 andWidth:(unsigned int)arg1;
- (void)executeBlock:(id /* block */)arg0;

@end
