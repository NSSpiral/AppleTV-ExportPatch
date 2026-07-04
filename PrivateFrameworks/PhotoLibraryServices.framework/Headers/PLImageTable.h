/* Runtime dump - PLImageTable
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageTable : NSObject <PLThumbPersistenceManager>
{
    int _format;
    NSString * _path;
    struct CGSize _thumbnailSize;
    int _imageRowBytes;
    int _imageLength;
    int _entryLength;
    char _readOnly;
    char _dying;
    int _fid;
    long long _fileLength;
    int _entryCount;
    unsigned long _segmentLength;
    unsigned int _segmentCount;
    NSMutableArray * _allSegments;
    NSMutableIndexSet * _preheatIndexes;
    NSObject<OS_dispatch_queue> * _preheatIndexIsolation;
    NSObject<OS_dispatch_queue> * _preheatQueue;
}

@property (readonly, nonatomic) NSDictionary * photoUUIDToIndexMap;
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

+ (void)writeImage:(UIImage *)arg0 toData:(id *)arg1 thumbnailFormat:(int)arg2 videoDuration:(id)arg3 width:(int *)arg4 height:(int *)arg5 bytesPerRow:(int *)arg6 dataWidth:(int *)arg7 dataHeight:(int *)arg8 dataOffset:(int *)arg9;
+ (void)releaseSegmentCache;

- (void)dealloc;
- (NSString *)path;
- (struct CGSize)imageSize;
- (int)_fileDescriptor;
- (PLImageTable *)initWithPath:(NSString *)arg0 imageFormat:(int)arg1 readOnly:(char)arg2;
- (void)_releaseSegmentAtIndex:(int)arg0;
- (NSObject *)_segmentAtIndex:(int)arg0;
- (void)_reloadSegmentAtIndex:(int)arg0;
- (void)_addEntriesIfNecessaryForIndex:(int)arg0;
- (void)_updateSegmentCount;
- (void)_setEntryCount:(int)arg0;
- (void)_flushEntryAtAddress:(void *)arg0 count:(int)arg1;
- (NSObject *)dataForEntryAtIndex:(unsigned int)arg0 createIfNeeded:(char)arg1;
- (void)_flushEntryAtAddress:(void *)arg0;
- (char)_compactWithOccupiedIndexes:(NSIndexSet *)arg0 outPhotoUUIDToIndexMap:(id *)arg1;
- (void)_verifyThumbnailDataForIndex:(unsigned int)arg0 uuid:(NSUUID *)arg1;
- (int)imageLength;
- (int)imageFormat;
- (int)imageWidth;
- (int)imageHeight;
- (int)imageRowBytes;
- (NSIndexSet *)_getAndClearPreheatIndexes;
- (void)_adviseWillNeedEntriesInRange:(struct _NSRange)arg0;
- (void)_doPreheatWithCompletionHandler:(id /* block */)arg0;
- (NSString *)imageDataWithIdentifier:(NSString *)arg0 orIndex:(unsigned int)arg1 width:(int *)arg2 height:(int *)arg3 bytesPerRow:(int *)arg4 dataWidth:(int *)arg5 dataHeight:(int *)arg6 dataOffset:(int *)arg7;
- (void)setImageForEntry:(id)arg0 withIdentifier:(NSString *)arg1 orIndex:(unsigned int)arg2 videoDuration:(id)arg3 photoUUID:(NSString *)arg4;
- (void)setImageDataForEntry:(void *)arg0 withIdentifier:(void)arg1 orIndex:(NSObject *)arg2 asset:(unsigned int)arg3;
- (char)copyEntryFromOriginalAsset:(NSSet *)arg0 toAsset:(NSSet *)arg1;
- (NSSet *)beginThumbnailSafePropertyUpdatesOnAsset:(NSSet *)arg0;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(NSSet *)arg0 withToken:(NSString *)arg1;
- (char)usesThumbIdentifiers;
- (NSString *)_debugDescription;
- (void)deleteEntryWithIdentifier:(NSString *)arg0 orIndex:(unsigned int)arg1 uuid:(NSUUID *)arg2;
- (void)preheatImageDataAtIndex:(unsigned int)arg0 completionHandler:(id /* block */)arg1;
- (void)preheatImageDataAtIndexes:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (int)entryCount;
- (char)isReadOnly;
- (NSSet *)preheatItemForAsset:(NSSet *)arg0 format:(int)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3;
- (NSSet *)originalPreheatItemForAsset:(NSSet *)arg0 optimalSourcePixelSize:(struct CGSize)arg1 options:(unsigned int)arg2;
- (NSObject *)imageDataAtIndex:(unsigned int)arg0 width:(int *)arg1 height:(int *)arg2 bytesPerRow:(int *)arg3 dataWidth:(int *)arg4 dataHeight:(int *)arg5 dataOffset:(int *)arg6;
- (PLImageTable *)initWithPath:(NSString *)arg0 imageFormat:(int)arg1;
- (unsigned long)_segmentLength;
- (void)_releaseSegment:(id)arg0;
- (NSDictionary *)photoUUIDToIndexMap;
- (NSIndexSet *)preflightCompactionWithOccupiedIndexes:(NSIndexSet *)arg0;
- (void)compactWithOccupiedIndexes:(NSIndexSet *)arg0;
- (void)finishUnicornEntryAtIndex:(unsigned int)arg0 withImageData:(NSData *)arg1 imageSize:(struct CGSize)arg2 asset:(NSSet *)arg3;

@end
