/* Runtime dump - GKEventEmitter
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKEventEmitter : NSObject
{
    NSHashTable * _listeners;
    NSMutableArray * _supportedProtocols;
    char _shouldQueue;
    NSMutableArray * _queuedEvents;
}

@property (retain, nonatomic) NSHashTable * listeners;
@property (retain, nonatomic) NSMutableArray * supportedProtocols;
@property (nonatomic) char shouldQueue;
@property (retain, nonatomic) NSMutableArray * queuedEvents;

+ (GKEventEmitter *)eventEmitterForProtocols:(id)arg0 shouldQueue:(char)arg1;
+ (GKEventEmitter *)eventEmitterForProtocols:(id)arg0;

- (void)dealloc;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (void)registerListener:(id)arg0;
- (void)unregisterListener:(id)arg0;
- (void)unregisterAllListeners;
- (char)listenerRegisteredForSelector:(SEL)arg0;
- (NSObject *)methodSignatureForProtocol:(NSObject *)arg0 selector:(SEL)arg1;
- (GKEventEmitter *)initWithSupportedProtocols:(NSMutableArray *)arg0 shouldQueue:(char)arg1;
- (void)setListeners:(NSHashTable *)arg0;
- (void)setSupportedProtocols:(NSMutableArray *)arg0;
- (void)setQueuedEvents:(NSMutableArray *)arg0;
- (void)dispatchQueuedEventsToListener:(id)arg0;
- (NSObject *)invocationForProtocol:(NSObject *)arg0 selector:(SEL)arg1;
- (NSHashTable *)listeners;
- (NSMutableArray *)supportedProtocols;
- (char)shouldQueue;
- (void)setShouldQueue:(char)arg0;
- (NSMutableArray *)queuedEvents;

@end
