/* Runtime dump - PLImageCacheList
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageCacheList : NSObject
{
    NSObject<OS_dispatch_queue> * _isolation;
    unsigned int _length;
    unsigned int _lastFailLocation;
    id * _keys;
    unsigned int * _keyHashes;
    id * _images;
    id _dummy;
}

+ (NSArray *)newImageCacheList;

- (void)dealloc;
- (PLImageCacheList *)init;
- (PLImageCacheList *)_init;
- (void)removeImageForKey:(NSString *)arg0;
- (NSString *)imageForKey:(NSString *)arg0;
- (void)setImage:(UIImage *)arg0 forKey:(NSString *)arg1;

@end
