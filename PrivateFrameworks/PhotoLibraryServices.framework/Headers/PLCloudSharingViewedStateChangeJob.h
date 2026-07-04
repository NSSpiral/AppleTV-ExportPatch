/* Runtime dump - PLCloudSharingViewedStateChangeJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob
{
    char _albumHasUnseenContent;
    char _assetCollectionHasUnreadComments;
    NSString * _albumGUID;
    NSString * _assetCollectionGUID;
    NSDate * _assetCollectionLastViewedCommentDate;
    long long _jobType;
    long long _albumUnviewedAssetCount;
}

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSString * albumGUID;
@property (nonatomic) char albumHasUnseenContent;
@property (nonatomic) long long albumUnviewedAssetCount;
@property (retain, nonatomic) NSString * assetCollectionGUID;
@property (nonatomic) char assetCollectionHasUnreadComments;
@property (retain, nonatomic) NSDate * assetCollectionLastViewedCommentDate;

+ (void)markAlbum:(id)arg0 asHavingUnseenContent:(char)arg1;
+ (void)updateUnviewedAssetCollectionCount:(int)arg0 forAlbum:(MSASAlbum *)arg1;
+ (void)markAssetCollection:(id)arg0 asHavingUnreadComments:(char)arg1 inAlbum:(MSASAlbum *)arg2;
+ (void)setLastViewedCommentDate:(NSDate *)arg0 forAssetCollection:(PHAssetCollection *)arg1 inAlbum:(MSASAlbum *)arg2;

- (void)dealloc;
- (NSString *)description;
- (void)run;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLCloudSharingViewedStateChangeJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (NSString *)albumGUID;
- (long long)jobType;
- (void)setJobType:(long long)arg0;
- (void)setAlbumGUID:(NSString *)arg0;
- (void)setAlbumHasUnseenContent:(char)arg0;
- (void)setAlbumUnviewedAssetCount:(long long)arg0;
- (void)setAssetCollectionGUID:(NSString *)arg0;
- (void)setAssetCollectionHasUnreadComments:(char)arg0;
- (void)setAssetCollectionLastViewedCommentDate:(NSDate *)arg0;
- (char)albumHasUnseenContent;
- (long long)albumUnviewedAssetCount;
- (NSString *)assetCollectionGUID;
- (char)assetCollectionHasUnreadComments;
- (NSDate *)assetCollectionLastViewedCommentDate;
- (void)_executeAlbumViewedStateChanged;
- (void)_executeAlbumUnviewedAssetCountChangedWithGroup;
- (void)_executeAssetCommentsReadStateChangedWithGroup;
- (void)_executeAssetLastViewedCommentDateChangedWithGroup;

@end
