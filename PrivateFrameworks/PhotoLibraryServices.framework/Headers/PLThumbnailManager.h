/* Runtime dump - PLThumbnailManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLThumbnailManager : NSObject
{
    PLPhotoLibrary * _photoLibrary;
    NSLock * _lock;
    NSIndexSet * _occupiedIndexes;
    NSDictionary * _changedPhotosMap;
    NSArray * _changedPhotos;
    NSMutableDictionary * _thumbManagersByFormat;
    <PLThumbPersistenceManager> * _lastUsedThumbManager;
    int _lastUsedThumbManagerFormat;
    PLLargeImageLoader * _largeImageLoaderFullSize;
    PLLargeImageLoader * _largeImageLoaderFullScreen;
    PLLargeImageLoader * _largeImageLoaderFilledScreen;
    PLLargeImageLoader * _largeImageLoaderFilledHalfScreen;
    NSMutableSet * _previouslyRequestedThumbnailFixOIDs;
    NSMutableSet * _requestedThumbnailFixAssets;
    NSMutableArray * _alreadyFailedAssetObjectIDsForRebuild;
    struct _FigCascadeContext * _unicornContextPortrait;
    struct _FigCascadeContext * _unicornContextLandscape;
    id _observerToken;
}

@property (nonatomic) PLPhotoLibrary * photoLibrary;
@property (readonly, retain, nonatomic) NSMutableDictionary * thumbManagersByFormat;
@property (retain, nonatomic) id observerToken;

+ (char)isMissingThumbnailTables;
+ (char)hasObsoleteThumbnailTables;
+ (void)removeObsoleteMetadata;
+ (PLThumbnailManager *)defaultThumbnailsDirectoryV2;
+ (PLThumbnailManager *)defaultThumbnailsDirectory;
+ (char)hasRebuildThumbnailsRequest;
+ (int)thumbnailFormat;
+ (char)shouldUseLargerNonJPEGThumbnailFormat;
+ (NSArray *)_allPossibleThumbnailFormats;
+ (char)isRidingPowderSnow;
+ (char)isRidingCrudSnow;
+ (int)thumbnailVersion;
+ (int)thumbnailVersionCurrent;
+ (NSArray *)supportedThumbnailFormats;
+ (char)useImageTableForFormat:(int)arg0;
+ (void)removeRebuildThumbnailsRequest:(char *)arg0;
+ (void)resetThumbnails;
+ (void)saveCameraPreviewWellImageForAsset:(NSSet *)arg0;
+ (void)saveCameraPreviewWellImage:(struct CGImage *)arg0 uuid:(NSUUID *)arg1;
+ (NSOperationQueue *)cameraPreviewWellImageQueue;
+ (void)addRebuildThumbnailsRequest;
+ (void)rebuildAllMissingThumbnails;
+ (char)isRebuildingThumbnails;
+ (char)hasExceededRebuildThumbnailRequestLimit;
+ (void)handleRebuildThumbnailRequestPersistentFailure;
+ (int)largestNonJPEGThumbnailFormat;
+ (id)cameraPreviewWellAssetUUID;

- (void)dealloc;
- (void)setObserverToken:(NSString *)arg0;
- (NSString *)observerToken;
- (PLThumbnailManager *)initWithWeakPhotoLibrary:(NSObject *)arg0;
- (void)clearPhotoLibrary;
- (PLPhotoLibrary *)photoLibrary;
- (UIImage *)dataForPhoto:(UIImage *)arg0 format:(int)arg1 allowPlaceholder:(char)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (UIImage *)newImageForPhoto:(UIImage *)arg0 withFormat:(int)arg1 allowPlaceholder:(char)arg2 outImageProperties:(struct __CFDictionary * *)arg3 outDeliveredPlaceholder:(struct __CFDictionary *)arg4;
- (NSSet *)beginThumbnailSafePropertyUpdatesOnAsset:(NSSet *)arg0;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(NSSet *)arg0 withToken:(NSString *)arg1;
- (UIImage *)newImageForPhoto:(UIImage *)arg0 withFormat:(int)arg1 allowPlaceholder:(char)arg2 optimalSourcePixelSize:(struct CGSize)arg3 networkAccessAllowed:(char)arg4 networkAccessForced:(char)arg5 trackCPLDownload:(char)arg6 outImageProperties:(struct __CFDictionary * *)arg7 outImageDataInfo:(struct __CFDictionary *)arg8 outCPLDownloadContext:(id *)arg9;
- (int)_rebuildAssetThumbnailsWithLimit:(int)arg0 error:(id *)arg1;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (void)setPhotoLibrary:(PLPhotoLibrary *)arg0;
- (char)_canAccessImageForAsset:(NSSet *)arg0;
- (void)assetsdImageForPhoto:(UIImage *)arg0 withFormat:(int)arg1 allowPlaceholder:(char)arg2 wantURLOnly:(char)arg3 optimalSourcePixelSize:(struct CGSize)arg4 networkAccessAllowed:(char)arg5 networkAccessForced:(char)arg6 trackCPLDownload:(char)arg7 completion:(id /* block */)arg8;
- (NSString *)_thumbManagerForFormat:(int *)arg0;
- (NSSet *)_dataForAsset:(NSSet *)arg0 format:(int)arg1 width:(int *)arg2 height:(int *)arg3 bytesPerRow:(int *)arg4 dataWidth:(int *)arg5 dataHeight:(int *)arg6 imageDataOffset:(int *)arg7 imageDataFormat:(int *)arg8;
- (void)imageForPhoto:(UIImage *)arg0 withFormat:(int)arg1 allowPlaceholder:(char)arg2 optimalSourcePixelSize:(struct CGSize)arg3 networkAccessAllowed:(char)arg4 networkAccessForced:(char)arg5 trackCPLDownload:(char)arg6 completion:(id /* block */)arg7 sync:(/* block */ id)arg8;
- (void)_unicorn_setThumbnailsForPhoto:(UIImage *)arg0 withImage:(UIImage *)arg1;
- (void)_horse_setThumbnailsForPhoto:(UIImage *)arg0 withImage:(UIImage *)arg1;
- (id)_anyImageTable;
- (NSSet *)_dataForInFlightAsset:(NSSet *)arg0 format:(int)arg1 width:(int *)arg2 height:(int *)arg3 bytesPerRow:(int *)arg4 dataWidth:(int *)arg5 dataHeight:(int *)arg6 imageDataOffset:(int *)arg7 imageDataFormat:(int *)arg8;
- (UIImage *)newImageDataForPhoto:(UIImage *)arg0 withFormat:(int)arg1 allowPlaceholder:(char)arg2 wantURLOnly:(char)arg3 networkAccessAllowed:(char)arg4 networkAccessForced:(char)arg5 trackCPLDownload:(char)arg6 outImageDataInfo:(id *)arg7 outCPLDownloadContext:(id *)arg8;
- (void)setThumbnails:(struct __CFDictionary *)arg0 forPhoto:(UIImage *)arg1;
- (struct __CFDictionary *)placeholderThumbnailDataByFormatID;
- (char)copyThumbnailsFromAsset:(NSSet *)arg0 toAsset:(NSSet *)arg1;
- (void)setThumbnailsForPhoto:(UIImage *)arg0 withImage:(UIImage *)arg1;
- (void)deleteThumbnailsWithIdentifier:(NSString *)arg0 orIndex:(unsigned int)arg1 uuid:(NSUUID *)arg2;
- (NSArray *)preflightImageTableCompactionForPhotos:(id)arg0;
- (id)compactImageTables;
- (id)_tableDescriptions;
- (NSString *)preheatItemSourceForFormat:(int)arg0;
- (UIImage *)thumbnailJPEGPathForPhoto:(UIImage *)arg0;
- (NSMutableDictionary *)thumbManagersByFormat;

@end
