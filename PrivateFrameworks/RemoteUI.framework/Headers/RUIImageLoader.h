/* Runtime dump - RUIImageLoader
 * Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIImageLoader : NSObject
{
    NSLock * _queueLock;
    NSMutableArray * _loadQueue;
    NSMutableSet * _loadsInProgress;
    NSLock * _cacheLock;
    NSMutableDictionary * _imageCache;
    NSMutableArray * _imageCacheLRU;
    struct __CFRunLoop * _loaderRunLoop;
    struct __CFRunLoopSource * _loaderSource;
    NSNotificationCenter * _notificationCenter;
    NSTimer * _loadStatusNotificationTimer;
    struct _opaque_pthread_mutex_t _startupLock;
    struct _opaque_pthread_cond_t _startupCondition;
}

+ (RUIImageLoader *)sharedImageLoader;

- (RUIImageLoader *)init;
- (void).cxx_destruct;
- (NSNotificationCenter *)notificationCenter;
- (void)_imageLoadFinished:(id)arg0;
- (void)_setImageData:(NSData *)arg0 forURL:(NSURL *)arg1 cacheLocked:(char)arg2;
- (void)_startLoader;
- (void)_loadImageURL:(NSURL *)arg0;
- (void)_mainThread_postLoadingStatusChanged;
- (void)_postLoadingStatusChanged;
- (char)_locked_URLIsLoading:(id)arg0;
- (void)_locked_loadImageForURL:(NSURL *)arg0;
- (void)_postImageLoadedNotification:(NSNotification *)arg0;
- (void)_loadingStatusChanged;
- (char)isLoadingImages;
- (struct CGImage *)imageForURL:(NSURL *)arg0 loadIfAbsent:(char)arg1;
- (void)_locked_imageLoadStarted:(id)arg0;

@end
