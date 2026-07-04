/* Runtime dump - BBNotificationBehaviorUtilitiesClient
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol>
{
    NSXPCConnection * _connection;
    id _filteringStateChangeHandler;
    id _activeBehaviorOverridesChangeHandler;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BBNotificationBehaviorUtilitiesClient *)clientInterface;

- (void)dealloc;
- (BBNotificationBehaviorUtilitiesClient *)init;
- (void)invalidate;
- (void)activeBehaviorOverrideTypesChanged:(unsigned int)arg0 source:(unsigned int)arg1;
- (void)notificationPresentationFilteringChangedToEnabled:(char)arg0;
- (void)setFilteringStateChangeHandler:(id /* block */)arg0;
- (void)setActiveBehaviorOverridesChangeHandler:(id /* block */)arg0;
- (void)shouldPresentNotificationOfType:(int)arg0 fromSender:(NSObject *)arg1 withHandler:(id /* block */)arg2;

@end
