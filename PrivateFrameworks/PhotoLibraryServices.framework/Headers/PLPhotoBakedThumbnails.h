/* Runtime dump - PLPhotoBakedThumbnails
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoBakedThumbnails : NSObject
{
    int _format;
    int _singleThumbnailImageLength;
    unsigned int _count;
    char _dataIsMutable;
    NSData * _thumbnailData;
    NSMutableArray * _thumbnailImages;
    NSMutableDictionary * _options;
    NSData * _optionsData;
    char _optionsAccessed;
    char _missingHeader;
    struct CGSize _size;
}

@property (readonly, nonatomic) int format;
@property (readonly, retain, nonatomic) NSMutableDictionary * options;
@property (readonly, retain, nonatomic) NSData * optionsData;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) int bitsPerComponent;
@property (readonly, nonatomic) int bytesPerPixel;
@property (readonly, nonatomic) unsigned int bitmapInfo;
@property (readonly, nonatomic) struct CGRect imageRect;

+ (NSString *)thumbnailsWithContentsOfFile:(NSString *)arg0 format:(int)arg1;
+ (char)saveBakedThumbnailsOfImages:(id)arg0 toFile:(NSString *)arg1 format:(int)arg2 orientation:(int *)arg3 options:(NSMutableDictionary *)arg4 delegate:(NSObject *)arg5;

- (void)dealloc;
- (struct CGSize)size;
- (unsigned int)count;
- (NSString *)description;
- (int)bitsPerComponent;
- (NSMutableDictionary *)options;
- (struct CGRect)imageRect;
- (int)format;
- (PLPhotoBakedThumbnails *)initWithImages:(id)arg0 format:(int)arg1 orientation:(int *)arg2 options:(NSMutableDictionary *)arg3 delegate:(NSObject *)arg4;
- (NSObject *)thumbnailDataAtIndex:(int)arg0;
- (int)bytesPerPixel;
- (PLPhotoBakedThumbnails *)initWithContentsOfFile:(NSString *)arg0 format:(int)arg1 readOnly:(char)arg2;
- (char)saveToFile:(NSString *)arg0;
- (PLPhotoBakedThumbnails *)initWithData:(NSData *)arg0 format:(int)arg1 readOnly:(char)arg2;
- (char)writeBorderedThumbnailOfImage:(struct CGImage *)arg0 toBuffer:(void *)arg1 orientation:(int *)arg2 format:(int)arg3 formatInfo:(struct ? *)arg4 delegate:(struct ?)arg5;
- (NSData *)_thumbnailData;
- (NSData *)serializedData;
- (char *)thumbnailBytesAtIndex:(int)arg0;
- (PLPhotoBakedThumbnails *)initWithData:(NSData *)arg0 format:(int)arg1;
- (PLPhotoBakedThumbnails *)initWithContentsOfFile:(NSString *)arg0 format:(int)arg1;
- (unsigned long)thumbnailLength;
- (struct CGImage *)thumbnailImageAtIndex:(int)arg0;
- (NSData *)optionsData;
- (unsigned int)bitmapInfo;

@end
