/* Runtime dump - CPLEngineSystemMonitor
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, CPLEngineComponent>
{
    NSURL * _volumeURL;
    NSObject<OS_dispatch_queue> * _queue;
    CPLNetworkWatcher * _watcher;
    CPLEngineLibrary * _engineLibrary;
}

@property (readonly, weak, nonatomic) CPLEngineLibrary * engineLibrary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)componentName;
- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)arg0;
- (CPLEngineLibrary *)engineLibrary;
- (void)closeAndDeactivate:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg0;
- (CPLEngineSystemMonitor *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (void)networkStateDidChangeForNetworkWatched:(id)arg0;
- (unsigned int)diskPressureState;
- (char)isNetworkConnected;

@end
