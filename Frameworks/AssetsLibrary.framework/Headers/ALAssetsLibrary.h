/* Runtime dump - ALAssetsLibrary
 * Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetsLibrary : NSObject
{
    id _internal;
}

@property (retain, nonatomic) ALAssetsLibraryPrivate * internal;

+ (char)_linkedBefore7;
+ (void)disableSharedPhotoStreamsSupport;
+ (struct CGImage *)_thumbnailForAssetURL:(NSURL *)arg0;
+ (struct CGImage *)_aspectRatioThumbnailForAssetURL:(NSURL *)arg0;
+ (NSURL *)_filePathForVideoURL:(NSURL *)arg0 outMetadata:(id *)arg1;
+ (long long)_estimatedOutputFileLengthForVideoURL:(NSURL *)arg0 fallbackFilePath:(NSString *)arg1 exportPreset:(NSSet *)arg2 exportProperties:(NSDictionary *)arg3;
+ (long long)_estimatedOutputFileLengthForVideoFilePath:(NSString *)arg0 metadata:(NSDictionary *)arg1 exportPreset:(NSSet *)arg2 exportProperties:(NSDictionary *)arg3;
+ (NSURL *)_exportSessionForVideoURL:(NSURL *)arg0 fallbackFilePath:(NSString *)arg1 exportPreset:(NSSet *)arg2;
+ (NSString *)_exportSessionForVideoFilePath:(NSString *)arg0 metadata:(NSDictionary *)arg1 exportPreset:(NSSet *)arg2;
+ (NSURL *)_playerItemForVideoURL:(NSURL *)arg0 fallbackFilePath:(NSString *)arg1;
+ (NSString *)_playerItemForVideoFilePath:(NSString *)arg0 metadata:(NSDictionary *)arg1;
+ (int)authorizationStatus;
+ (PLPhotoLibrary *)_library;

- (void)_writeImageToSavedPhotosAlbum:(struct CGImage *)arg0 orientation:(int)arg1 imageData:(NSData *)arg2 metadata:(NSDictionary *)arg3 internalProperties:(NSDictionary *)arg4 completionBlock:(id /* block */)arg5;
- (void)_writeVideoAtPathToSavedPhotosAlbum:(id)arg0 internalProperties:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
- (NSString *)publicErrorForPrivateDomain:(NSString *)arg0 withPrivateCode:(int)arg1;
- (NSError *)publicErrorFromPrivateError:(NSError *)arg0;
- (void)registerAlbum:(struct NSObject *)arg0 assetGroupPrivate:(id)arg1;
- (char)_libraryIsAvailable;
- (void)_addGroupForAlbum:(struct NSObject *)arg0 ofType:(unsigned int)arg1 toArray:(NSArray *)arg2;
- (void)_addGroupListForContainerList:(NSArray *)arg0 ofType:(unsigned int)arg1 toArray:(NSArray *)arg2;
- (NSURL *)_copyGroupForURL:(NSURL *)arg0;
- (void)enumerateGroupsWithTypes:(unsigned int)arg0 usingBlock:(id /* block */)arg1 failureBlock:(/* block */ id)arg2;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage *)arg0 orientation:(int)arg1 completionBlock:(id /* block */)arg2;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage *)arg0 metadata:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
- (void)writeImageDataToSavedPhotosAlbum:(id)arg0 metadata:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
- (void)writeVideoAtPathToSavedPhotosAlbum:(id)arg0 completionBlock:(id /* block */)arg1;
- (char)videoAtPathIsCompatibleWithSavedPhotosAlbum:(NSObject<PLAlbumProtocol> *)arg0;
- (void)groupForURL:(NSURL *)arg0 resultBlock:(id /* block */)arg1 failureBlock:(/* block */ id)arg2;
- (void)addAssetsGroupAlbumWithName:(NSString *)arg0 resultBlock:(id /* block */)arg1 failureBlock:(/* block */ id)arg2;
- (void)deleteAssetForURL:(NSURL *)arg0 completionBlock:(id /* block */)arg1;
- (NSObject *)assetsGroupsRelatedToAssetsGroup:(NSObject *)arg0;
- (ALAssetsLibraryPrivate *)internal;
- (void)dealloc;
- (ALAssetsLibrary *)init;
- (char)isValid;
- (void)assetForURL:(NSURL *)arg0 resultBlock:(id /* block */)arg1 failureBlock:(/* block */ id)arg2;
- (void)setInternal:(ALAssetsLibraryPrivate *)arg0;
- (void)_performBlock:(id /* block */)arg0;
- (char)hasCompletedRestorePostProcessing;
- (void)_performBlockAndWait:(id)arg0;

@end
