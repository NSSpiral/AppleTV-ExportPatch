/* Runtime dump - PLPhotosStateLog
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotosStateLog : NSObject
{
    NSObject<OS_dispatch_group> * _group;
    PLPhotoLibrary * _photoLibrary;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_group> * group;
@property (readonly, retain, nonatomic) PLPhotoLibrary * photoLibrary;

- (void)dealloc;
- (PLPhotosStateLog *)init;
- (NSObject<OS_dispatch_group> *)group;
- (PLPhotoLibrary *)photoLibrary;
- (PLPhotosStateLog *)initWithPhotoLibrary:(PLPhotoLibrary *)arg0;
- (void)_logAssets:(NSArray *)arg0 forAlbum:(MSASAlbum *)arg1 indent:(unsigned int)arg2;
- (void)logAlbum:(id)arg0 index:(unsigned int)arg1 indent:(unsigned int)arg2 completeMetadata:(char)arg3 printAssets:(char)arg4;
- (char)compressFileFromPath:(NSString *)arg0 toPath:(NSString *)arg1;
- (char)copyFilesMatching:(id)arg0 andExcluding:(id)arg1 fromPath:(NSString *)arg2 toPath:(NSString *)arg3 usingCompression:(char)arg4;
- (void)logMoments;
- (void)logAlbumLists;
- (void)logAllAlbums;
- (void)logAssetCounts;
- (void)logDescription:(NSString *)arg0;
- (void)createSnapshot;

@end
