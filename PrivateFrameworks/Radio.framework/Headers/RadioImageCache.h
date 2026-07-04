/* Runtime dump - RadioImageCache
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioImageCache : NSObject
{
    NSOperationQueue * _imageRequestQueue;
}

+ (RadioImageCache *)sharedCache;
+ (struct _CFURLCache *)_sharedCFURLCache;
+ (struct __CFURLStorageSession *)_newSharedCacheStorageSession;

- (void)dealloc;
- (RadioImageCache *)init;
- (RadioImageCache *)_init;
- (void).cxx_destruct;
- (UIImage *)_requestForRadioArtwork:(UIImage *)arg0;
- (NSURLRequest *)_cachedResponseForRequest:(NSURLRequest *)arg0;
- (UIImage *)cachedImageDataForRadioArtwork:(UIImage *)arg0 MIMEType:(id *)arg1;
- (void)loadImageForRadioArtwork:(UIImage *)arg0 withCompletionHandler:(id /* block */)arg1;
- (id)cachedImageDataForStation:(id)arg0 withExactSize:(struct CGSize)arg1 MIMEType:(id *)arg2;
- (void)loadImageForStation:(id)arg0 withSize:(struct CGSize)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeAllCachedImages;

@end
