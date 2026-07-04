/* Runtime dump - PLPlaceholderThumbnailManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPlaceholderThumbnailManager : NSObject
{
    NSCache * _placeholderDataCache;
    NSCache * _placeholderImageCache;
    NSObject<OS_dispatch_queue> * _isolation;
}

+ (PLPlaceholderThumbnailManager *)sharedManager;

- (void)dealloc;
- (PLPlaceholderThumbnailManager *)init;
- (NSString *)newPlaceholderImageForFormat:(int)arg0 photoImageSize:(struct CGSize)arg1;
- (NSString *)placeholderDataForFormat:(int)arg0 photoImageSize:(struct CGSize)arg1 width:(int *)arg2 height:(int *)arg3 bytesPerRow:(int *)arg4 dataWidth:(int *)arg5 dataHeight:(int *)arg6 imageDataOffset:(int *)arg7;
- (NSString *)_cacheKeyForFormat:(int)arg0 photoImageSize:(struct CGSize)arg1;
- (NSString *)_placeholderImageForFormat:(int)arg0;

@end
