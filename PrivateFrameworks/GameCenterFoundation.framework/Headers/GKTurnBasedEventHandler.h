/* Runtime dump - GKTurnBasedEventHandler
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedEventHandler : NSObject
{
    char _didBecomeActive;
    NSObject<GKTurnBasedEventHandlerDelegate> * _delegateWeak;
    NSObject<OS_dispatch_queue> * _lookForEventQueue;
}

@property (nonatomic) NSObject<GKTurnBasedEventHandlerDelegate> * delegate;
@property (nonatomic) char didBecomeActive;
@property (nonatomic) NSObject<OS_dispatch_queue> * lookForEventQueue;

+ (GKTurnBasedEventHandler *)sharedTurnBasedEventHandler;

- (void)dealloc;
- (void)setDelegate:(NSObject<GKTurnBasedEventHandlerDelegate> *)arg0;
- (GKTurnBasedEventHandler *)init;
- (NSObject<GKTurnBasedEventHandlerDelegate> *)delegate;
- (void)lookForEvent;
- (void)callTurnEventForMatch:(id)arg0 userTapped:(char)arg1;
- (char)didBecomeActive;
- (void)setDidBecomeActive:(char)arg0;
- (NSObject<OS_dispatch_queue> *)lookForEventQueue;
- (void)setLookForEventQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
