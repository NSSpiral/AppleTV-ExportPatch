/* Runtime dump - PLPublishCloudSharedAssetsJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob
{
    char _isNewAlbum;
    NSString * _publishAlbumCloudGUID;
    NSArray * _originalAssetUUIDs;
    NSDictionary * _trimmedVideoPathInfo;
    NSString * _batchCommentText;
}

@property (retain, nonatomic) NSString * publishAlbumCloudGUID;
@property (retain, nonatomic) NSArray * originalAssetUUIDs;
@property (retain, nonatomic) NSDictionary * trimmedVideoPathInfo;
@property (nonatomic) char isNewAlbum;
@property (retain, nonatomic) NSString * batchCommentText;

+ (void)publishBatchOfOriginalAssets:(NSArray *)arg0 toSharedAlbum:(PHCloudSharedAlbum *)arg1 withTrimmedVideoPathInfo:(NSDictionary *)arg2 isNewAlbum:(char)arg3 batchCommentText:(NSString *)arg4;

- (void)dealloc;
- (NSString *)description;
- (void)run;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLPublishCloudSharedAssetsJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)executeDaemonOperation;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (char)shouldArchiveXPCToDisk;
- (void)setOriginalAssetUUIDs:(NSArray *)arg0;
- (void)setPublishAlbumCloudGUID:(NSString *)arg0;
- (void)setIsNewAlbum:(char)arg0;
- (void)setBatchCommentText:(NSString *)arg0;
- (void)setTrimmedVideoPathInfo:(NSDictionary *)arg0;
- (NSString *)publishAlbumCloudGUID;
- (NSArray *)originalAssetUUIDs;
- (char)isNewAlbum;
- (NSString *)batchCommentText;
- (NSDictionary *)trimmedVideoPathInfo;

@end
