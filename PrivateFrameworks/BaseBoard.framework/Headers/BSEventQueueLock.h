/* Runtime dump - BSEventQueueLock
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSEventQueueLock : NSObject
{
    char _relinquished;
    NSString * _reason;
    BSEventQueue * _eventQueue;
}

@property (copy, nonatomic) NSString * reason;
@property (retain, nonatomic) BSEventQueue * eventQueue;

- (void)dealloc;
- (NSString *)description;
- (NSString *)reason;
- (BSEventQueue *)eventQueue;
- (void)setEventQueue:(BSEventQueue *)arg0;
- (void)relinquish;
- (BSEventQueueLock *)initWithEventQueue:(BSEventQueue *)arg0 reason:(NSString *)arg1;
- (void)setReason:(NSString *)arg0;

@end
