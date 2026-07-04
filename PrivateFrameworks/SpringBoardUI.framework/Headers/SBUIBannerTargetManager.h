/* Runtime dump - SBUIBannerTargetManager
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIBannerTargetManager : NSObject
{
    NSHashTable * _proxies;
    NSMapTable * _implementationToProxyMap;
    NSHashTable * _observers;
}

@property (readonly, retain, nonatomic) NSArray * targets;

+ (SBUIBannerTargetManager *)sharedInstance;

- (NSArray *)targets;
- (void)dealloc;
- (SBUIBannerTargetManager *)init;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (void)_notifyObservers:(id)arg0;
- (void)_registerTargetImplementation:(id)arg0;
- (void)_unregisterTargetImplementation:(id)arg0;
- (id)_proxyForTargetImplementation:(id)arg0;

@end
