/* Runtime dump - CalLimitingQueue
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLimitingQueue : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
}

- (void).cxx_destruct;
- (CalLimitingQueue *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 andBlock:(id /* block */)arg1;
- (void)executeBlock;
- (NSObject<OS_dispatch_queue> *)queue;

@end
