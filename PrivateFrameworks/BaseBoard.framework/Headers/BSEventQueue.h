/* Runtime dump - BSEventQueue
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSEventQueue : NSObject
{
    NSHashTable * _eventQueueLocks;
    NSMutableArray * _eventQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _name;
    BSEventQueueEvent * _executingEvent;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly, copy, nonatomic) NSArray * pendingEvents;
@property (copy, nonatomic) NSString * name;
@property (retain, nonatomic) BSEventQueueEvent * executingEvent;

- (void)dealloc;
- (BSEventQueue *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (char)isLocked;
- (void)_processNextEvent;
- (void)_addEventQueueLock:(BSEventQueueLock *)arg0;
- (void)_removeEventQueueLock:(BSEventQueueLock *)arg0;
- (void)_executeOrPendEvents:(id)arg0 position:(int)arg1;
- (void)setExecutingEvent:(BSEventQueueEvent *)arg0;
- (void)flushPendingEvents;
- (void)cancelEventsWithName:(NSString *)arg0;
- (char)hasEventWithPrefix:(NSString *)arg0;
- (char)hasEventWithName:(NSString *)arg0;
- (BSEventQueueEvent *)executingEvent;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (BSEventQueue *)initWithName:(NSString *)arg0 onQueue:(/* block */ id)arg1;
- (void)executeOrInsertEvents:(id)arg0 atPosition:(int)arg1;
- (char)_shouldProcessEvent:(NSObject *)arg0 enqueuedDuringExecutionOfEvent:(NSObject *)arg1;
- (void)_noteWillPendEvents:(id)arg0 atPosition:(int)arg1;
- (void)_noteWillCancelEventsWithName:(NSString *)arg0 count:(unsigned int)arg1;
- (void)_noteWillExecuteEvent:(NSObject *)arg0;
- (void)_noteQueueDidLock;
- (void)_noteQueueDidUnlock;
- (NSArray *)pendingEvents;
- (NSString *)acquireLockForReason:(NSString *)arg0;
- (void)flushEvents:(id)arg0;
- (void)flushAllEvents;
- (void)relinquishLock:(id)arg0;
- (void)executeOrInsertEvent:(NSObject *)arg0 atPosition:(int)arg1;

@end
