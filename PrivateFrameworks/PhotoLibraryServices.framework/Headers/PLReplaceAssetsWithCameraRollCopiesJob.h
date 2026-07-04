/* Runtime dump - PLReplaceAssetsWithCameraRollCopiesJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob
{
    NSArray * _assets;
    PLManagedAlbum * _album;
    PLPhotoLibrary * _photoLibrary;
}

@property (copy, nonatomic) NSArray * assets;
@property (retain, nonatomic) PLManagedAlbum * album;
@property (retain, nonatomic) PLPhotoLibrary * photoLibrary;
@property (readonly, retain, nonatomic) PLManagedObjectContext * managedObjectContext;
@property (readonly, retain, nonatomic) NSPersistentStoreCoordinator * coordinator;

+ (void)replaceAssets:(NSArray *)arg0 withCameraRollCopiesInAlbum:(id)arg1;

- (void)dealloc;
- (void)run;
- (PLManagedObjectContext *)managedObjectContext;
- (NSArray *)assets;
- (PLPhotoLibrary *)photoLibrary;
- (void)setPhotoLibrary:(PLPhotoLibrary *)arg0;
- (void)setAssets:(NSArray *)arg0;
- (void)setAlbum:(PLManagedAlbum *)arg0;
- (PLManagedAlbum *)album;
- (void)encodeToXPCObject:(NSObject *)arg0;
- (PLReplaceAssetsWithCameraRollCopiesJob *)initFromXPCObject:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (NSPersistentStoreCoordinator *)coordinator;
- (NSSet *)_cameraRollAssetDerivedFromAsset:(NSSet *)arg0;

@end
