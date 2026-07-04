/* Runtime dump - FMFMapImageCache
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFMapImageCache : NSObject
{
    NSCache * __cache;
}

@property (retain, nonatomic) NSCache * _cache;

+ (FMFMapImageCache *)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (id)cachedMapForHandles:(id)arg0;
- (void)cacheMap:(NSObject *)arg0 forHandles:(id)arg1;
- (id)_keyForHandles:(id)arg0;
- (NSObject *)_imageForMap:(NSObject *)arg0;
- (NSCache *)_cache;
- (NSString *)_orientationKey;
- (void)set_cache:(NSCache *)arg0;

@end
