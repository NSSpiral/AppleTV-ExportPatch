/* Runtime dump - PLPTPdAssetManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate>
{
    NSObject<PhotoLibraryPTPDelegate> * _delegate;
    NSArray * _albumObjectIDs;
    NSString * _firstDCIMFolderServiced;
    NSSet * _availableAssetIDs;
    PLPhotoLibrary * _photoLibrary;
    int _libraryStatus;
    NSMutableSet * _ptpDeletedAssets;
    NSObject<OS_dispatch_queue> * availableAssetsQueue;
    NSFileManager * fileManager;
}

@property (nonatomic) NSObject<PhotoLibraryPTPDelegate> * delegate;
@property (readonly, retain) PLManagedObjectContext * managedObjectContext;
@property (readonly, retain, nonatomic) NSArray * albumObjectIDs;
@property (readonly, retain, nonatomic) PLPhotoLibrary * photoLibrary;
@property (retain, nonatomic) NSFileManager * fileManager;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(NSObject<PhotoLibraryPTPDelegate> *)arg0;
- (PLPTPdAssetManager *)init;
- (NSObject<PhotoLibraryPTPDelegate> *)delegate;
- (PLManagedObjectContext *)managedObjectContext;
- (PLPhotoLibrary *)photoLibrary;
- (void)managedObjectContext:(PLManagedObjectContext *)arg0 libraryChangedWithInsertedAssetIDs:(id)arg1 deletedAssetIDs:(id)arg2 changedAssetIDs:(id)arg3;
- (void)setFileManager:(NSFileManager *)arg0;
- (NSFileManager *)fileManager;
- (void)_registerForFirstUnlockNotification;
- (void)handlePhotoLibraryAvailableNotification;
- (NSArray *)albumObjectIDs;
- (id)_fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)arg0;
- (id)albumHandles;
- (id)infoForAlbum:(struct NSObject *)arg0;
- (id)associationsInAlbum:(struct NSObject *)arg0;
- (id)assetsInAssociation:(struct NSObject *)arg0;
- (NSSet *)infoForAsset:(struct NSObject *)arg0;
- (void)deleteAsset:(struct NSObject *)arg0;
- (NSArray *)_ptpInformationForAllAssets;
- (void)_performBlockAndWait:(id)arg0;
- (char)ptpCanDeleteFiles;
- (void)_performTransactionAndWait:(id)arg0;
- (NSObject *)ptpInformationForPhotoWithObjectID:(NSObject *)arg0;
- (id)ptpInformationForFilesInDirectory:(id)arg0;
- (NSString *)ptpThumbnailForPhotoWithKey:(struct NSObject *)arg0;
- (char)ptpDeletePhotoWithKey:(struct NSObject *)arg0 andExtension:(id)arg1;
- (void)setPtpDelegate:(NSObject *)arg0;
- (NSArray *)ptpInformationForPhotosWithPrimaryKeys:(NSArray *)arg0;
- (char)libraryIsAvailable;
- (id)_allAssetObjectIDs;
- (char)_isPTPAlbum:(id)arg0;

@end
