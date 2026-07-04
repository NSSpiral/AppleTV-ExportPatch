/* Runtime dump - CalAccumulatingQueue
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalAccumulatingQueue : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _tags;
    NSMutableDictionary * _context;
    id _block;
    float _delay;
}

- (void).cxx_destruct;
- (CalAccumulatingQueue *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 andBlock:(id /* block */)arg1;
- (CalAccumulatingQueue *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 andBlock:(id /* block */)arg1 delay:(/* block */ id)arg2;
- (void)updateTagsAndExecuteBlock:(id /* block */)arg0 withContext:(NSMutableDictionary *)arg1;
- (char)_hasQueuedUpBlock;
- (void)updateTagsAndExecuteBlock:(id /* block */)arg0;

@end
