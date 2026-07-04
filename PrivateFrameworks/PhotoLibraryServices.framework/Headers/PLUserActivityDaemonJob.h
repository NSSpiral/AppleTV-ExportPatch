/* Runtime dump - PLUserActivityDaemonJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLUserActivityDaemonJob : PLDaemonJob
{
    NSString * _albumUUID;
    NSArray * _assetUUIDs;
    int _cloudFeedContent;
    long long _actionType;
}

@property long long actionType;
@property (copy, nonatomic) NSString * albumUUID;
@property (retain, nonatomic) NSArray * assetUUIDs;
@property (nonatomic) int cloudFeedContent;

+ (void)userDidDeleteSharedAlbum:(id)arg0;
+ (void)userDidDeleteSharedAssets:(NSArray *)arg0;
+ (void)userDidViewCloudFeedContent:(int)arg0;
+ (void)userDidNavigateIntoSharedAlbum:(id)arg0;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg0;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)arg0;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidReadCommentOnSharedAsset:(NSSet *)arg0;
+ (void)userDidLeavePhotosApplication;

- (void)dealloc;
- (void)run;
- (void)setAlbumUUID:(NSString *)arg0;
- (void)setAssetUUIDs:(NSArray *)arg0;
- (NSArray *)assetUUIDs;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLUserActivityDaemonJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (NSString *)albumUUID;
- (void)setActionType:(long long)arg0;
- (void)setCloudFeedContent:(int)arg0;
- (long long)actionType;
- (int)cloudFeedContent;

@end
