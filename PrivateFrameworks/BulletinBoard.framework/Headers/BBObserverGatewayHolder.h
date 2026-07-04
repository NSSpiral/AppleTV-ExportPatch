/* Runtime dump - BBObserverGatewayHolder
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverGatewayHolder : NSObject
{
    id _observersByFeed;
    NSObject<OS_dispatch_queue> * _queue;
    PCPersistentTimer * _timeoutTimer;
    NSMutableArray * _timeouts;
    BBObserverClientProxy * _gateway;
    unsigned int _gatewayPriority;
    unsigned int _feed;
    NSString * _name;
}

@property (retain, nonatomic) BBObserverClientProxy * gateway;
@property (nonatomic) unsigned int gatewayPriority;
@property (nonatomic) unsigned int feed;
@property (copy, nonatomic) NSString * name;

- (void)_invalidateTimer;
- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (unsigned int)gatewayPriority;
- (BBObserverClientProxy *)gateway;
- (unsigned int)feed;
- (void)sendObserversAddBulletin:(id)arg0 playLightsAndSirens:(char)arg1 forFeeds:(unsigned int)arg2;
- (BBObserverGatewayHolder *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 name:(NSString *)arg1;
- (void)setGateway:(BBObserverClientProxy *)arg0;
- (void)setGatewayPriority:(unsigned int)arg0;
- (void)setFeed:(unsigned int)arg0;
- (void)sendAddBulletin:(id)arg0 playLightsAndSirens:(char)arg1 forFeeds:(unsigned int)arg2 withTimeout:(double)arg3 handler:(id /* block */)arg4;
- (void)_handleTimeout;
- (void)_startNextTimer;
- (id)_addTimeout:(double)arg0 forBulletinID:(NSObject *)arg1 inSectionID:(NSObject *)arg2 handler:(id /* block */)arg3;
- (char)_invalidateTimeout:(id)arg0;
- (void)sendObserver:(NSObject *)arg0 addBulletin:(BBBulletin *)arg1 playLightsAndSirens:(char)arg2 forFeeds:(unsigned int)arg3 withHandler:(id /* block */)arg4;
- (void)_startTimerWithFireDate:(NSDate *)arg0;

@end
