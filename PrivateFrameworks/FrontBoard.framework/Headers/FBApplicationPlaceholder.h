/* Runtime dump - FBApplicationPlaceholder
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationPlaceholder : FBBundleInfo
{
    NSObject<OS_dispatch_queue> * _queue;
    char _queue_isNewsstand;
    char _queue_isRestricted;
    char _queue_installType;
    double _queue_cachedPercentComplete;
    NSProgress * _queue_progress;
    NSMutableSet * _queue_observers;
}

@property (readonly, nonatomic) char newsstand;
@property (readonly, nonatomic) char restricted;
@property (readonly, nonatomic) double percentComplete;
@property (readonly, nonatomic) unsigned int installType;
@property (readonly, nonatomic) unsigned int installState;
@property (readonly, nonatomic) unsigned int installPhase;
@property (readonly, nonatomic) char cancellable;
@property (readonly, nonatomic) char pausable;
@property (retain, nonatomic) LSApplicationProxy * proxy;

- (void)prioritize;
- (char)isCancellable;
- (char)isPausable;
- (unsigned int)installState;
- (unsigned int)installType;
- (unsigned int)installPhase;
- (void)cancel;
- (void)dealloc;
- (NSString *)description;
- (double)percentComplete;
- (void)removeObserver:(NSObject *)arg0;
- (void)resume;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)pause;
- (void)addObserver:(NSObject *)arg0;
- (FBApplicationPlaceholder *)initWithApplicationProxy:(NSString *)arg0;
- (void)_setProxy:(NSObject *)arg0;
- (void)_noteChangedSignificantly;
- (LSApplicationProxy *)_proxy;
- (void)_setProxy:(NSObject *)arg0 force:(char)arg1;
- (char)_queue_setProgress:(id)arg0;
- (double)_normalizedProgress:(double)arg0;
- (void)_queue_startObservingProgress:(id)arg0;
- (void)_queue_stopObservingProgress:(id)arg0;
- (void)_dispatchToObservers:(id)arg0 block:(id /* block */)arg1;
- (void)_queue_progressChanged;
- (NSMutableSet *)_queue_observers;
- (void)_sendToObserversInstallStateDidChange:(NSDictionary *)arg0;
- (void)_sendToObserversInstallPhaseDidChange:(NSDictionary *)arg0;
- (void)_sendToObserversPercentCompleteDidChange:(NSDictionary *)arg0;
- (void)_sendToObserversCancellabilityDidChange:(NSDictionary *)arg0;
- (void)_sendToObserversPausabilityDidChange:(NSDictionary *)arg0;
- (void)_sendToObserversPlaceholderDidChangeSignificantly:(id)arg0;
- (NSDictionary *)_iconDictionary;
- (char)isRestricted;
- (char)isNewsstand;

@end
