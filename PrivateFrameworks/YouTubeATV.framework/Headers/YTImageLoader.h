/* Runtime dump - YTImageLoader
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTImageLoader : NSObject
{
    NSLock * _queueLock;
    NSMutableArray * _loadQueue;
    NSMutableSet * _loadsInProgress;
    NSLock * _cacheLock;
    NSMutableDictionary * _imageCache;
    NSMutableDictionary * _roundedThumbnailImageCache;
    NSMutableDictionary * _largeThumbnailImageCache;
    NSMutableDictionary * _pluginImageCache;
    NSMutableArray * _imageCacheLRU;
    struct __CFRunLoop * _loaderRunLoop;
    struct __CFRunLoopSource * _loaderSource;
    NSNotificationCenter * _notificationCenter;
    NSTimer * _loadStatusNotificationTimer;
    struct _opaque_pthread_mutex_t _startupLock;
    struct _opaque_pthread_cond_t _startupCondition;
}

+ (YTImageLoader *)sharedImageLoader;

- (YTImageLoader *)init;
- (NSNotificationCenter *)notificationCenter;
- (void)_imageLoadFinished:(id)arg0;
- (void)_startLoader;
- (void)_mainThread_postLoadingStatusChanged;
- (void)_postLoadingStatusChanged;
- (char)_locked_URLIsLoading:(id)arg0;
- (void)_postImageLoadedNotification:(NSNotification *)arg0;
- (void)_loadingStatusChanged;
- (char)isLoadingImages;
- (void)_locked_imageLoadStarted:(id)arg0;
- (void)_setImageData:(NSData *)arg0 videoID:(NSString *)arg1 forURL:(NSURL *)arg2 cacheLocked:(char)arg3;
- (struct CGImage *)createRoundedThumbnailWithImage:(struct CGImage *)arg0;
- (void)_loadImageURL:(NSURL *)arg0 videoID:(NSString *)arg1;
- (NSCache *)_locked_saveImageCache:(NSObject *)arg0;
- (NSCache *)_locked_loadImageCache:(NSObject *)arg0;
- (struct CGImage *)_largeThumbnailOverlay;
- (struct CGImage *)createSheenedThumbnailWithImage:(struct CGImage *)arg0 overlay:(struct CGImage *)arg1 width:(int)arg2 height:(int)arg3;
- (struct CGImage *)imageForURL:(NSURL *)arg0 rounded:(char)arg1 videoID:(NSString *)arg2 loadIfAbsent:(char)arg3;
- (struct CGImage *)largeImageForURL:(NSURL *)arg0 videoID:(NSString *)arg1 loadIfAbsent:(char)arg2;
- (struct CGImage *)pluginImageForURL:(NSURL *)arg0 videoID:(NSString *)arg1 loadIfAbsent:(char)arg2;
- (void)saveCache:(NSObject *)arg0;
- (void)loadCache:(NSObject *)arg0;
- (void)_locked_loadImageForURL:(NSURL *)arg0 videoID:(NSString *)arg1;

@end
