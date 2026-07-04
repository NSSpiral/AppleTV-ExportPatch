/* Runtime dump - IMInvocationQueue
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMInvocationQueue : NSObject
{
    char _holdQueue;
    id _delegate;
    id _target;
    NSMutableArray * _queue;
    NSMutableArray * _options;
    NSProtocolChecker * _protocolChecker;
    double _dequeueRate;
}

@property (retain, nonatomic) Protocol * protocol;
@property id target;
@property id delegate;
@property (nonatomic) double dequeueRate;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) char holdQueue;
@property (readonly, retain, nonatomic) NSMutableArray * queue;
@property (readonly, retain, nonatomic) NSMutableArray * options;
@property (readonly, retain, nonatomic) NSProtocolChecker * protocolChecker;

- (id)peek;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (unsigned int)count;
- (IMInvocationQueue *)init;
- (NSObject *)delegate;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)setTarget:(NSObject *)arg0;
- (char)isEmpty;
- (NSObject *)target;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (NSMutableArray *)options;
- (Protocol *)protocol;
- (NSMutableArray *)queue;
- (unsigned int)_optionsForInvocation:(NSObject *)arg0;
- (int)_enqueueInvocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (char)_invokeInvocation:(NSObject *)arg0;
- (void)_setQueueTimer;
- (void)_checkQueue;
- (NSObject *)_dequeueInvocation;
- (int)_numberOfLimitedMessagesInQueue;
- (int)_maxQueueLimitSize;
- (char)_acceptsOptions:(unsigned int)arg0;
- (char)_replaceSimilarInvocation:(NSObject *)arg0;
- (char)_insertInvocation:(NSObject *)arg0 options:(unsigned int)arg1;
- (void)setDequeueRate:(double)arg0;
- (void)_stepQueueNotification:(NSNotification *)arg0;
- (void)_holdQueueNotification:(NSNotification *)arg0;
- (void)_releaseQueueNotification:(NSNotification *)arg0;
- (void)removeAllInvocations;
- (void)invokeAll;
- (double)dequeueRate;
- (NSProtocolChecker *)protocolChecker;
- (char)holdQueue;
- (void)setProtocol:(Protocol *)arg0;

@end
