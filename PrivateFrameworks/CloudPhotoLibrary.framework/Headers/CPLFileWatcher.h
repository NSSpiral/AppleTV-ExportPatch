/* Runtime dump - CPLFileWatcher
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLFileWatcher : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _nodeSource;
    NSObject<OS_dispatch_source> * _parentSource;
    NSURL * _fileURL;
    <CPLFileWatcherDelegate> * _delegate;
}

@property (copy, nonatomic) NSURL * fileURL;
@property (weak, nonatomic) <CPLFileWatcherDelegate> * delegate;

- (void)setDelegate:(<CPLFileWatcherDelegate> *)arg0;
- (<CPLFileWatcherDelegate> *)delegate;
- (void).cxx_destruct;
- (NSURL *)fileURL;
- (void)_stopWatchingNode;
- (void)_startWatchingParent;
- (void)_startWatchingNode;
- (void)_stopWatchingParent;
- (CPLFileWatcher *)initWithFileURL:(NSURL *)arg0 delegate:(<CPLFileWatcherDelegate> *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)startWatching;
- (void)stopWatching;
- (void)setFileURL:(NSURL *)arg0;

@end
