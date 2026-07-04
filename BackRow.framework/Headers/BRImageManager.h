/* Runtime dump - BRImageManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRAsyncTaskContext;
@interface BRImageManager : NSObject
{
    unsigned long long _maxCacheSize;
    unsigned long long _cacheSize;
    unsigned long long _maxCacheCount;
    unsigned long long _cacheCount;
    unsigned long long _cacheSizePurgeThreshhold;
    char _cachePurging;
    char _purgeCacheOnLoadAndQuit;
    NSString * _imageCachePath;
    NSObject<OS_dispatch_queue> * _imagesAccessQueue;
    NSMutableDictionary * _remoteImageRequests;
    NSLock * _remoteImageLock;
    NSObject<OS_dispatch_queue> * _loadJobAccessQueue;
    NSObject<OS_dispatch_queue> * _pendingImageWriteQueue;
    char _processJobs;
    BRAsyncTaskContext * _writeTaskContext;
    int _pruneCount;
    char _disableAccessDateUpdates;
    NSMutableDictionary * _images;
    NSMutableDictionary * _loadJobs;
    NSMutableDictionary * _pendingCachedImagesToFlush;
}

@property (nonatomic) int pruneCount;
@property (retain, nonatomic) NSMutableDictionary * images;
@property (retain, nonatomic) NSMutableDictionary * loadJobs;
@property (retain, nonatomic) NSMutableDictionary * pendingCachedImagesToFlush;
@property (nonatomic) char disableAccessDateUpdates;

+ (NSObject *)screenSaverManager;
+ (NSObject *)generalPurposeManager;
+ (void)_initSerialAsyncPurgeQueue;
+ (NSDictionary *)fullScreenImageResizingOptions;
+ (NSObject *)trickPlayManager;
+ (void)_queuePurgeForPath:(NSString *)arg0;
+ (char)_removeCachPath:(NSString *)arg0 error:(id *)arg1;

- (void)_lowMemoryNotification:(NSNotification *)arg0;
- (char)isImageAvailable:(id)arg0;
- (NSURL *)reallyWriteImageFromURL:(NSURL *)arg0 imageID:(NSString *)arg1;
- (BRImageManager *)initWithCachePath:(NSString *)arg0 purgeCacheOnLoadAndQuit:(char)arg1 maxCacheSizeInMB:(unsigned long long)arg2 maxCacheCount:(unsigned long long)arg3 cacheSizePurgeThreshholdInMB:(unsigned long long)arg4 pruneCount:(int)arg5 disableAccessDateUpdates:(char)arg6;
- (void)_imageLoadSucceeded:(id)arg0;
- (void)_imageLoadFailed:(id)arg0;
- (NSURL *)imageNameFromURL:(NSURL *)arg0;
- (void)_postUpdateNotification:(NSNotification *)arg0;
- (void)receivedRemoteImage:(UIImage *)arg0 forID:(NSObject *)arg1;
- (UIImage *)imageNamed:(NSString *)arg0 scaledToSize:(struct CGSize)arg1;
- (UIImage *)downSampleImage:(UIImage *)arg0 name:(NSString *)arg1 scaledToSize:(struct CGSize)arg2 writeToDisk:(char)arg3;
- (NSURL *)writeImageFromURL:(NSURL *)arg0 headerFields:(NSDictionary *)arg1 decryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg2;
- (char)isImageAvailable:(id)arg0 scaledToSize:(struct CGSize)arg1;
- (void)cancelWriteForImageWithURL:(NSURL *)arg0 imageID:(NSString *)arg1;
- (UIImage *)downSampleImage:(UIImage *)arg0 name:(NSString *)arg1 scaledToSize:(struct CGSize)arg2 writeToDisk:(char)arg3 original:(char)arg4 rotate:(char)arg5;
- (void)writeImage:(char)arg0 named:(NSString *)arg1 asynchronous:(char)arg2;
- (NSURL *)loadImageFromURL:(NSURL *)arg0 imageID:(NSString *)arg1 headerFields:(NSDictionary *)arg2 decryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg3 writeToCache:(char)arg4;
- (NSURL *)writeEncryptedImageFromURL:(NSURL *)arg0;
- (NSURL *)writeImageFromURL:(NSURL *)arg0;
- (void)writeCroppedImage:(UIImage *)arg0 named:(NSString *)arg1;
- (UIImage *)imageNamed:(NSString *)arg0 croppedToSize:(struct CGSize)arg1 create:(char)arg2;
- (void)writeImage:(char)arg0 named:(NSString *)arg1;
- (void)setDisableAccessDateUpdates:(char)arg0;
- (void)_terminateNotification:(NSNotification *)arg0;
- (char)disableAccessDateUpdates;
- (void)_ATVDataImageAvailable:(id)arg0;
- (NSString *)_imageRecordForName:(NSString *)arg0;
- (NSOperationQueue *)_imageFromWriteQueue:(NSObject *)arg0;
- (char)_updateExistingImageRecord:(NSObject *)arg0;
- (UIImage *)_cachedResizedImageKeyForImageID:(UIImage *)arg0 forSize:(struct CGSize)arg1;
- (NSURL *)writeImageFromURL:(NSURL *)arg0 decryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg1;
- (void)_decrementCacheSize:(unsigned long long)arg0;
- (void)_addLoadJobToQueue:(NSObject *)arg0;
- (void)_removeLoadJobFromQueue:(NSObject *)arg0;
- (void)_removeWriteJobFromQueue:(NSObject *)arg0;
- (void)_addWriteJobToQueue:(NSObject *)arg0 withImageID:(NSString *)arg1 height:(int)arg2 width:(int)arg3 cropped:(char)arg4;
- (UIImage *)_writeIDForImageID:(UIImage *)arg0 cropped:(char)arg1 size:(struct CGSize)arg2;
- (NSMutableDictionary *)pendingCachedImagesToFlush;
- (void)_writeImage:(UIImage *)arg0 named:(NSString *)arg1 forSize:(struct CGSize)arg2 cropped:(char)arg3;
- (UIImage *)_cachedCroppedImageKeyForImageID:(UIImage *)arg0 forSize:(struct CGSize)arg1;
- (void)_removeRemoteImageRequestNamed:(id)arg0;
- (void)_purgeRemoveDirectory:(char)arg0;
- (char)isImageWritten:(id)arg0;
- (NSObject *)writeImageFromImageProxy:(NSObject *)arg0;
- (NSURL *)loadImageFromURL:(NSURL *)arg0 headerFields:(NSDictionary *)arg1 decryptionAgent:(<BRMusicStoreImageDecryptionAgent> *)arg2;
- (void)writeScaledImage:(UIImage *)arg0 named:(NSString *)arg1 withSize:(struct CGSize)arg2;
- (UIImage *)cachedPathForImageID:(UIImage *)arg0;
- (void)purgeAndRemoveDirectory;
- (NSMutableDictionary *)loadJobs;
- (void)setLoadJobs:(NSMutableDictionary *)arg0;
- (void)setPendingCachedImagesToFlush:(NSMutableDictionary *)arg0;
- (void)_startWriteJob:(id)arg0;
- (void)_performWriteJob:(id)arg0;
- (UIImage *)_cachedOriginalImagePathForImageID:(UIImage *)arg0 extension:(id *)arg1;
- (UIImage *)_cachedCroppedImagePathForImageID:(UIImage *)arg0 forSize:(struct CGSize)arg1 extension:(id *)arg2;
- (UIImage *)_cachedResizedImagePathForImageID:(UIImage *)arg0 forSize:(struct CGSize)arg1 extension:(id *)arg2;
- (void)_incrementCacheSize:(unsigned long long)arg0;
- (void)_removeCacheFile:(NSString *)arg0;
- (void)_postWriteCompletedNotification:(NSNotification *)arg0 size:(struct CGSize)arg1 cropped:(char)arg2;
- (void)_postUnavailableImageNotification:(NSNotification *)arg0;
- (void)_scheduleMaintainCache;
- (void)_maintainImageCache;
- (NSString *)_cachedCommonImagePathForImageIDKey:(NSString *)arg0 extension:(id *)arg1;
- (NSDictionary *)_defaultResizingImageOptions;
- (UIImage *)_extensionForImageID:(UIImage *)arg0;
- (void)dealloc;
- (NSMutableDictionary *)images;
- (UIImage *)imageNamed:(NSString *)arg0;
- (void)setImages:(NSMutableDictionary *)arg0;
- (void)purge;
- (void).cxx_destruct;
- (NSString *)cachePath;
- (int)pruneCount;
- (void)setPruneCount:(int)arg0;
- (void)_checkCache;
- (float)cacheSize;

@end
