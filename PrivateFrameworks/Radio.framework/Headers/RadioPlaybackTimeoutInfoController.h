/* Runtime dump - RadioPlaybackTimeoutInfoController
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPlaybackTimeoutInfoController : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    long long _activeAccountIdentifier;
    RadioPlaybackTimeoutInfo * _currentTimeoutInfo;
    RadioLoadStoreBagRequest * _loadStoreBagRequest;
    RadioStoreBag * _storeBag;
    NSMutableArray * _currentTimeoutInfoLoadCompletionHandlers;
    NSDictionary * _syncOverrideTimeoutDictionary;
}

+ (void)_clearAccountRelatedTimeoutInfo;

- (void)dealloc;
- (RadioPlaybackTimeoutInfoController *)init;
- (void).cxx_destruct;
- (void)_invalidateCurrentTimeoutInfoAllowingChangeNotification:(char)arg0;
- (void)_storeBagDidLoadNotification:(NSNotification *)arg0;
- (void)_radioRequestDidFinishNotification:(NSNotification *)arg0;
- (void)_setSyncOverrideTimeoutDictionary:(NSDictionary *)arg0;
- (double)_playbackTimeoutForRadioConfigurationKey:(NSString *)arg0 fallbackRadioConfigurationKey:(NSString *)arg1 syncOverrideTimeoutKey:(NSString *)arg2 fallbackSyncOverrideTimeoutKey:(NSString *)arg3 defaultValue:(double)arg4;
- (id)_generateCurrentTimeoutInfoReturningReady:(char *)arg0;
- (void)getCurrentTimeoutInfoWithCompletionHandler:(id /* block */)arg0;
- (void)_accountStoreDidChangeNotification:(NSNotification *)arg0;

@end
