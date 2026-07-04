/* Runtime dump - FTMessageQueue
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTMessageQueue : NSObject
{
    NSMutableArray * _queue;
    NSMutableArray * _addDates;
    <FTMessageQueueDelegate> * _delegate;
}

@property (readonly) IDSBaseMessage * topMessage;
@property (readonly) int count;
@property (readonly) NSArray * messages;
@property <FTMessageQueueDelegate> * delegate;
@property (retain) NSMutableArray * _queue;
@property (retain) NSMutableArray * _addDates;

- (void)dealloc;
- (void)setDelegate:(<FTMessageQueueDelegate> *)arg0;
- (int)count;
- (FTMessageQueue *)init;
- (<FTMessageQueueDelegate> *)delegate;
- (NSMutableArray *)_queue;
- (void)removeAllMessages;
- (IDSBaseMessage *)topMessage;
- (void)_timeoutHit;
- (void)_clearTimeout;
- (void)_setTimeout;
- (NSString *)dequeueTopMessage;
- (char)addMessage:(NSString *)arg0;
- (char)removeMessage:(NSString *)arg0;
- (NSMutableArray *)_addDates;
- (void)set_addDates:(NSMutableArray *)arg0;
- (void)set_queue:(NSMutableArray *)arg0;
- (NSArray *)messages;

@end
