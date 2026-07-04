/* Runtime dump - PLFileSystemAssetImporter
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFileSystemAssetImporter : NSObject
{
    PLPhotoLibrary * _photoLibrary;
    NSString * _photoLibraryStoreUUID;
    NSMutableIndexSet * _thumbIndexes;
    char _hasProcessedAnyAssets;
    NSMutableSet * _existingUUIDs;
    NSMutableDictionary * _existingUUIDsByPath;
    NSMutableDictionary * _existingOIDsByUUID;
    unsigned int _thumbnailBatchFetchSize;
}

@property (retain, nonatomic) NSMutableSet * existingUUIDs;
@property (retain, nonatomic) NSMutableDictionary * existingUUIDsByPath;
@property (retain, nonatomic) NSMutableDictionary * existingOIDsByUUID;
@property (nonatomic) unsigned int thumbnailBatchFetchSize;

- (void)dealloc;
- (PLFileSystemAssetImporter *)initWithPhotoLibrary:(PLPhotoLibrary *)arg0;
- (void)setExistingUUIDs:(NSMutableSet *)arg0;
- (void)setExistingUUIDsByPath:(NSMutableDictionary *)arg0;
- (void)setExistingOIDsByUUID:(NSMutableDictionary *)arg0;
- (id)addAssetWithURLs:(id)arg0 forceInsert:(char)arg1 forceUpdate:(char)arg2;
- (void)setThumbnailBatchFetchSize:(unsigned int)arg0;
- (id)assetURLisInDatabase:(id)arg0;
- (NSURL *)_addAssetWithURL:(NSString *)arg0 existingOID:(id)arg1;
- (char)setupPhotoAsset:(NSSet *)arg0 withURL:(NSString *)arg1;
- (char)setupVideoAsset:(NSSet *)arg0 withURL:(NSString *)arg1;
- (void)setModificationAndCreationDateOnAsset:(NSSet *)arg0 withURL:(NSString *)arg1;
- (unsigned int)nextThumbnailIndex;
- (unsigned int)thumbnailBatchFetchSize;
- (id)addAssetWithURLs:(id)arg0;
- (void)addAvailableThumbnailIndex:(unsigned int)arg0;
- (NSMutableSet *)existingUUIDs;
- (NSMutableDictionary *)existingUUIDsByPath;
- (NSMutableDictionary *)existingOIDsByUUID;

@end
