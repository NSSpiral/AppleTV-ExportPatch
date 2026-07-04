/* Runtime dump - WebNetworkStateObserver
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebNetworkStateObserver : NSObject
{
    struct NetworkStateNotifier * _notifier;
}

@property (nonatomic) struct NetworkStateNotifier * notifier;

- (void)dealloc;
- (void)networkStateChanged:(NSNotification *)arg0;
- (WebNetworkStateObserver *)initWithNotifier:(struct NetworkStateNotifier *)arg0;
- (struct NetworkStateNotifier *)notifier;
- (void)setNotifier:(struct NetworkStateNotifier *)arg0;

@end
