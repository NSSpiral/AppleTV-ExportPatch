/* Runtime dump - PLJPEGPreheatItem
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLJPEGPreheatItem : PLPreheatItem
{
    NSObject<OS_dispatch_queue> * _queue;
    UIImage * _cachedImage;
    char _cachedImageCancelled;
    unsigned long _requestID;
    NSObject<OS_dispatch_group> * _requestGroup;
    NSObject<OS_dispatch_group> * _waitGroup;
    char _dataIsLoading;
    unsigned int _loadingOptions;
    unsigned int _cancelled;
    unsigned int _hasCachedImage;
    NSString * _imagePath;
}

@property (readonly, nonatomic) unsigned int options;
@property (readonly, nonatomic) NSString * imagePath;
@property char _hasCachedImage;

+ (PLJPEGPreheatItem *)jpegDataLoadSemaphore;

- (void)dealloc;
- (char)isCancelled;
- (unsigned int)options;
- (void)_cancel;
- (void)startPreheatRequestWithCompletionHandler:(id /* block */)arg0;
- (void)_cacheImage;
- (char)_hasCachedImage;
- (struct __CFDictionary *)decodeSessionOptions;
- (UIImage *)createDecodedImage:(struct CGImage *)arg0 data:(NSData *)arg1;
- (void)_setHasCachedImage:(char)arg0;
- (NSData *)preheatData;
- (void)_uncancel;
- (void)_leaveWaitGroupIfNeeded;
- (void)loadPreheatDataWithHandler:(id /* block */)arg0;
- (PLJPEGPreheatItem *)initWithImagePath:(NSString *)arg0 format:(int)arg1 imageType:(int)arg2 optimalSourcePixelSize:(struct CGSize)arg3 options:(unsigned int)arg4;
- (UIImage *)cachedImage:(char *)arg0;
- (id)cachedImageIfAvailable:(char *)arg0;
- (char)addImageHandler:(id /* block */)arg0;
- (NSDictionary *)initialDecodeSessionOptions;
- (void)cancelPreheatRequestWithCompletionHandler:(id /* block */)arg0;
- (char)originalIsJpeg;
- (NSString *)imagePath;

@end
