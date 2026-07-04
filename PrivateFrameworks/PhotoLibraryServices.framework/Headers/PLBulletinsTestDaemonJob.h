/* Runtime dump - PLBulletinsTestDaemonJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBulletinsTestDaemonJob : PLDaemonJob
{
    NSString * _albumUUID;
    NSArray * _addedAssetUUIDs;
    PLPhotoLibrary * _photoLibrary;
    long long _bulletinType;
}

@property long long bulletinType;
@property (retain, nonatomic) NSString * albumUUID;
@property (retain, nonatomic) NSArray * addedAssetUUIDs;
@property (retain, nonatomic) PLPhotoLibrary * photoLibrary;

+ (void)notifyInvitationWasReceivedForAlbum:(id)arg0;
+ (void)notifyAssets:(NSArray *)arg0 wereAddedToAlbum:(id)arg1;
+ (void)notifyLikeWasReceivedForAssets:(NSArray *)arg0;
+ (void)notifyCommentWasReceivedForAssets:(NSArray *)arg0;

- (void)dealloc;
- (void)run;
- (PLPhotoLibrary *)photoLibrary;
- (void)setPhotoLibrary:(PLPhotoLibrary *)arg0;
- (void)setAlbumUUID:(NSString *)arg0;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLBulletinsTestDaemonJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (long long)bulletinType;
- (NSString *)albumUUID;
- (NSArray *)addedAssetUUIDs;
- (void)setBulletinType:(long long)arg0;
- (void)setAddedAssetUUIDs:(NSArray *)arg0;

@end
