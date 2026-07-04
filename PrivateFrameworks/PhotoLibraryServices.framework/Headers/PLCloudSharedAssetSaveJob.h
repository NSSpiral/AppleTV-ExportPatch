/* Runtime dump - PLCloudSharedAssetSaveJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharedAssetSaveJob : PLCloudSharingJob
{
    char _replacingOriginalWithDerivative;
    AssetCollectionInfo * _currentAssetCollectionInfo;
    char _isVideo;
    NSString * _currentFilePath;
    NSString * _currentCloudAssetGUID;
    unsigned int _currentCloudAssetMediaAssetType;
    NSString * _cloudAlbumGUID;
    NSString * _cloudPersonID;
    MSASAssetCollection * _currentCloudAssetCollection;
    NSArray * _assetCollectionInfos;
    NSArray * _cloudAssetGUIDsToDelete;
    NSDictionary * _mstreamdInfoDictionary;
    long long _jobType;
}

@property (retain, nonatomic) NSString * currentFilePath;
@property (retain, nonatomic) NSString * currentCloudAssetGUID;
@property (nonatomic) unsigned int currentCloudAssetMediaAssetType;
@property (retain, nonatomic) NSString * cloudAlbumGUID;
@property (retain, nonatomic) NSString * cloudPersonID;
@property (retain, nonatomic) MSASAssetCollection * currentCloudAssetCollection;
@property (retain, nonatomic) NSArray * assetCollectionInfos;
@property (nonatomic) char isVideo;
@property (retain, nonatomic) NSArray * cloudAssetGUIDsToDelete;
@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSDictionary * mstreamdInfoDictionary;

+ (NSObject *)nextDCIMSaveFileURLForCloudPersonID:(NSObject *)arg0 cloudAlbumGUID:(NSString *)arg1 fileExtension:(NSString *)arg2;
+ (void)processMetadataForAssetCollections:(id)arg0 inAlbum:(MSASAlbum *)arg1 personID:(NSString *)arg2 info:(NSDictionary *)arg3;
+ (NSString *)_lightweightReimportPhotoCloudSharingAlbumInfoForAlbumWithCloudGUID:(NSString *)arg0 cloudPersonID:(NSString *)arg1;
+ (char)_lightweightReimportCacheDirectoryExists;
+ (NSString *)pathForInFlightAssetCollectionWithGUID:(NSString *)arg0 mediaAssetType:(unsigned int)arg1;
+ (NSURL *)_dcimDirectoryForFileURL:(NSURL *)arg0;
+ (void)downloadPendingAssetsForPersonID:(NSObject *)arg0 info:(NSDictionary *)arg1;
+ (void)saveCloudSharedAssetAtPath:(NSString *)arg0 forAssetCollectionWithGUID:(NSString *)arg1 mediaAssetType:(unsigned int)arg2 albumGUID:(NSString *)arg3 personID:(NSString *)arg4 info:(NSDictionary *)arg5 shouldPrioritize:(char)arg6;
+ (void)deleteCloudSharedAssetsWithCloudGUIDs:(id)arg0 info:(NSDictionary *)arg1;
+ (void)replaceRecentlyUploadedOriginalWithDerivativeForCollection:(id)arg0 inAlbum:(MSASAlbum *)arg1 personID:(NSString *)arg2;
+ (NSDictionary *)placeholderImageProperties;

- (void)dealloc;
- (PLCloudSharedAssetSaveJob *)init;
- (NSString *)description;
- (void)run;
- (char)isVideo;
- (NSString *)cloudPersonID;
- (void)setCloudPersonID:(NSString *)arg0;
- (void)setIsVideo:(char)arg0;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLCloudSharedAssetSaveJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (NSString *)currentFilePath;
- (NSString *)cloudAlbumGUID;
- (NSString *)currentCloudAssetGUID;
- (unsigned int)currentCloudAssetMediaAssetType;
- (NSArray *)cloudAssetGUIDsToDelete;
- (NSArray *)assetCollectionInfos;
- (NSDictionary *)mstreamdInfoDictionary;
- (long long)jobType;
- (void)setCurrentFilePath:(NSString *)arg0;
- (void)setCurrentCloudAssetMediaAssetType:(unsigned int)arg0;
- (void)setCurrentCloudAssetGUID:(NSString *)arg0;
- (void)setCloudAlbumGUID:(NSString *)arg0;
- (void)setCloudAssetGUIDsToDelete:(NSArray *)arg0;
- (void)setAssetCollectionInfos:(NSArray *)arg0;
- (void)setMstreamdInfoDictionary:(NSDictionary *)arg0;
- (void)setJobType:(long long)arg0;
- (char)isProcessingThumbnail;
- (void)executeDaemonOperationSaveAssetMetadataForCollectionsJobType;
- (void)executeDaemonOperationSaveAssetJobType;
- (void)executeDaemonOperationDeleteAssetJobType;
- (void)executeDaemonOperationReplaceRecentlyUploadedOriginalJobType;
- (void)executeDaemonOperationDownloadPendingAssetsJobType;
- (short)placeHolderKindFromAssetMetadataType:(unsigned int)arg0;
- (void)saveJobAssetWithPlaceholderKind:(short)arg0;
- (char)_parseISO6709String:(NSString *)arg0 outLatitude:(double *)arg1 outLongitude:(double *)arg2;
- (unsigned int)_insertionIndexForAsset:(NSSet *)arg0 inAlbum:(MSASAlbum *)arg1;
- (void)_processInFlightCommentsForAsset:(NSSet *)arg0 inAlbum:(MSASAlbum *)arg1 inPhotoLibrary:(NSObject *)arg2;
- (char)_processSaveAssetWithPlaceholderKind:(short)arg0 withAssetDataFilePath:(NSString *)arg1;
- (char)_createPlaceHolderInSharedAlbum:(id)arg0;
- (short)attemptLightweightReimportAssetData;
- (MSASAssetCollection *)currentCloudAssetCollection;
- (void)setCurrentCloudAssetCollection:(MSASAssetCollection *)arg0;

@end
