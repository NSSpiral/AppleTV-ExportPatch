/* Runtime dump - SBFMappedImageCache
 * Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMappedImageCache : NSObject
{
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _path;
    NSMutableDictionary * _images;
    NSMutableSet * _allKeys;
}

+ (NSCache *)wallpaperCache;

- (NSMutableSet *)allKeys;
- (void)dealloc;
- (void)removeAllObjects;
- (SBFMappedImageCache *)initWithDescription:(NSString *)arg0;
- (void)removeImageForKey:(NSString *)arg0;
- (NSString *)imageForKey:(NSString *)arg0;
- (void)setImage:(UIImage *)arg0 forKey:(NSString *)arg1;
- (NSString *)imageForKey:(NSString *)arg0 options:(int)arg1;
- (NSString *)imageForKey:(NSString *)arg0 options:(int)arg1 generateImageWithBlockIfNecessary:(id)arg2;
- (NSString *)imageForKey:(NSString *)arg0 generateImageWithBlockIfNecessary:(id)arg1;
- (void)warmupImageForKey:(NSString *)arg0;

@end
