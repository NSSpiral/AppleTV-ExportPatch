/* Runtime dump - PLThumbFileManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbFileManager : NSObject <PLThumbPersistenceManager>
{
    int _format;
    struct CGSize _thumbnailSize;
    NSString * _path;
    NSString * _filename;
    char _readOnly;
    int _imageRowBytes;
    int _imageLength;
    int _entryLength;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSString * path;
@property (readonly, nonatomic) int imageFormat;
@property (readonly, nonatomic) int imageWidth;
@property (readonly, nonatomic) int imageHeight;
@property (readonly, nonatomic) int imageRowBytes;
@property (readonly, nonatomic) int imageLength;
@property (readonly, nonatomic) char isReadOnly;
@property (readonly, nonatomic) struct CGSize imageSize;

+ (void)deleteAllEntriesWithIdentifier:(NSString *)arg0 basePath:(NSString *)arg1;
+ (struct __CFDictionary *)decodeSessionOptions;
+ (NSDictionary *)baseSessionOptions;
+ (char)_deviceShouldUseLowPerformancePixelFormat;

- (void)dealloc;
- (NSString *)description;
- (NSString *)path;
- (struct CGSize)imageSize;
- (PLThumbFileManager *)initWithPath:(NSString *)arg0 imageFormat:(int)arg1 readOnly:(char)arg2;
- (int)imageLength;
- (int)imageFormat;
- (int)imageWidth;
- (int)imageHeight;
- (int)imageRowBytes;
- (NSString *)imageDataWithIdentifier:(NSString *)arg0 orIndex:(unsigned int)arg1 width:(int *)arg2 height:(int *)arg3 bytesPerRow:(int *)arg4 dataWidth:(int *)arg5 dataHeight:(int *)arg6 dataOffset:(int *)arg7;
- (void)setImageForEntry:(id)arg0 withIdentifier:(NSString *)arg1 orIndex:(unsigned int)arg2 videoDuration:(id)arg3 photoUUID:(NSString *)arg4;
- (void)setImageDataForEntry:(void *)arg0 withIdentifier:(void)arg1 orIndex:(NSObject *)arg2 asset:(unsigned int)arg3;
- (char)copyEntryFromOriginalAsset:(NSSet *)arg0 toAsset:(NSSet *)arg1;
- (NSSet *)beginThumbnailSafePropertyUpdatesOnAsset:(NSSet *)arg0;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(NSSet *)arg0 withToken:(NSString *)arg1;
- (char)usesThumbIdentifiers;
- (NSString *)_debugDescription;
- (NSString *)imageWithIdentifier:(NSString *)arg0;
- (NSString *)thumbnailPathForThumbIdentifier:(NSString *)arg0;
- (char)isReadOnly;
- (NSSet *)preheatItemForAsset:(NSSet *)arg0 format:(int)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3;
- (NSSet *)originalPreheatItemForAsset:(NSSet *)arg0 optimalSourcePixelSize:(struct CGSize)arg1 options:(unsigned int)arg2;
- (PLThumbFileManager *)initWithPath:(NSString *)arg0 imageFormat:(int)arg1;
- (UIImage *)thumbnailForImage:(UIImage *)arg0 videoDuration:(id)arg1;
- (void)_writeImage:(UIImage *)arg0 forThumbIdentifier:(NSString *)arg1;
- (void)_writeData:(NSData *)arg0 forThumbIdentifier:(NSString *)arg1;

@end
