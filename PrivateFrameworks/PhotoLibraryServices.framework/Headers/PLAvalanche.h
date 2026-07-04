/* Runtime dump - PLAvalanche
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAvalanche : NSObject <PLAssetContainer, PLAssetChangeObserver>
{
    NSString * _uuid;
    NSOrderedSet * _assets;
    PLPhotoLibrary * _photoLibrary;
    NSIndexSet * __originalAutoPickIndexes;
    NSMutableIndexSet * __autoPickIndexes;
    NSIndexSet * __originalUserFavoriteIndexes;
    NSMutableIndexSet * __userFavoriteIndexes;
    unsigned int __originalStackIndex;
    unsigned int __stackIndex;
    PLManagedAsset * __aNewPick;
    PLManagedAsset * __anOldPick;
    id __completionHandler;
}

@property (retain, nonatomic) NSString * uuid;
@property (retain, nonatomic) NSOrderedSet * assets;
@property (retain, nonatomic) PLPhotoLibrary * photoLibrary;
@property (retain, nonatomic) NSIndexSet * _originalAutoPickIndexes;
@property (retain, nonatomic) NSMutableIndexSet * _autoPickIndexes;
@property (retain, nonatomic) NSIndexSet * _originalUserFavoriteIndexes;
@property (retain, nonatomic) NSMutableIndexSet * _userFavoriteIndexes;
@property (nonatomic) unsigned int _originalStackIndex;
@property (nonatomic) unsigned int _stackIndex;
@property (retain, nonatomic) PLManagedAsset * _aNewPick;
@property (retain, nonatomic) PLManagedAsset * _anOldPick;
@property (copy, nonatomic) id _completionHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, retain, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * localizedTitle;
@property (readonly, nonatomic) unsigned int approximateCount;
@property (readonly, nonatomic) unsigned int assetsCount;
@property (readonly, nonatomic) unsigned int photosCount;
@property (readonly, nonatomic) unsigned int videosCount;
@property (readonly, nonatomic) char isEmpty;
@property (retain, nonatomic) PLManagedAsset * keyAsset;
@property (retain, nonatomic) PLManagedAsset * secondaryKeyAsset;
@property (retain, nonatomic) PLManagedAsset * tertiaryKeyAsset;
@property (readonly, nonatomic) char canShowComments;
@property (readonly, nonatomic) char canShowAvalancheStacks;
@property (readonly, copy, nonatomic) NSArray * localizedLocationNames;
@property (readonly, retain, nonatomic) NSDate * startDate;
@property (readonly, retain, nonatomic) NSDate * endDate;

+ (void)removeFavoriteStatus:(id)arg0;
+ (char)shouldOnlyShowAvalanchePicks;
+ (char)shouldHideAvalanchesFromPhotoStream;
+ (PLAvalanche *)assetsWithAvalancheUUID:(NSString *)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSArray *)_updatePropertiesForAssets:(NSArray *)arg0 autoPicks:(id)arg1 stackAsset:(NSSet *)arg2 userFavorites:(id)arg3 deleteNonPicks:(char)arg4;
+ (void)_updateMembershipForAssets:(NSArray *)arg0 autoPicks:(id)arg1 stackAsset:(NSSet *)arg2 userFavorites:(id)arg3 deleteNonPicks:(char)arg4 inLibrary:(NSObject *)arg5;
+ (char)isValidBurstWithAssets:(NSOrderedSet *)arg0;
+ (void)revalidateAvalancheAssets:(NSArray *)arg0 inLibrary:(NSObject *)arg1;
+ (void)_handleUpdatesForContextWillSave:(id)arg0;
+ (NSArray *)_visibleIndexesAmongAssets:(NSArray *)arg0 fromUserFavoriteIndexes:(NSArray *)arg1 stackIndex:(unsigned int)arg2;
+ (NSArray *)_assetAmongAssets:(NSArray *)arg0 fromIndexes:(NSArray *)arg1 excludingIndexes:(NSArray *)arg2;
+ (unsigned int)_calculateStackAssetForAssetCount:(unsigned int)arg0 autoPicks:(id)arg1 userFavorites:(id)arg2;
+ (unsigned int)countForAvalancheUUID:(id)arg0 inLibrary:(NSObject *)arg1;
+ (UIImage *)avalancheStackForImage:(UIImage *)arg0 backgroundColor:(UIColor *)arg1;
+ (UIImage *)partialAvalancheStackForImage:(UIImage *)arg0 backgroundColor:(UIColor *)arg1;
+ (struct CGRect)frameOfTopImageInStackForStackFrame:(NSObject *)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSString *)title;
- (char)isEmpty;
- (void)_setCompletionHandler:(id /* block */)arg0;
- (id /* block */)_completionHandler;
- (NSString *)uuid;
- (NSString *)localizedTitle;
- (char)canPerformEditOperation:(unsigned int)arg0;
- (NSOrderedSet *)assets;
- (unsigned int)approximateCount;
- (unsigned int)assetsCount;
- (unsigned int)photosCount;
- (unsigned int)videosCount;
- (PLManagedAsset *)keyAsset;
- (void)setKeyAsset:(PLManagedAsset *)arg0;
- (PLManagedAsset *)secondaryKeyAsset;
- (void)setSecondaryKeyAsset:(PLManagedAsset *)arg0;
- (PLManagedAsset *)tertiaryKeyAsset;
- (void)setTertiaryKeyAsset:(PLManagedAsset *)arg0;
- (char)canShowComments;
- (char)canShowAvalancheStacks;
- (NSArray *)localizedLocationNames;
- (void)applyTrashedState:(short)arg0;
- (PLPhotoLibrary *)photoLibrary;
- (PLAvalanche *)initWithUUID:(NSString *)arg0 photoLibrary:(PLPhotoLibrary *)arg1;
- (NSSet *)stackAsset;
- (void)setUuid:(NSString *)arg0;
- (id)autoPicks;
- (id)userFavorites;
- (void)applyChangesAndDeleteNonPicks:(char)arg0 currentContainer:(NSObject *)arg1 completionHandler:(id /* block */)arg2;
- (void)setPhotoLibrary:(PLPhotoLibrary *)arg0;
- (void)setAssets:(NSOrderedSet *)arg0;
- (void)assetsDidChange:(NSDictionary *)arg0;
- (void)_recalculateStackAsset;
- (NSMutableIndexSet *)_autoPickIndexes;
- (unsigned int)_stackIndex;
- (NSMutableIndexSet *)_userFavoriteIndexes;
- (void)addUserFavorite:(id)arg0;
- (unsigned int)_originalStackIndex;
- (NSIndexSet *)_originalUserFavoriteIndexes;
- (void)_setAnOldPick:(id)arg0;
- (void)_setANewPick:(id)arg0;
- (PLManagedAsset *)_anOldPick;
- (PLManagedAsset *)_aNewPick;
- (NSIndexSet *)_originalAutoPickIndexes;
- (void)removeUserFavorite:(id)arg0;
- (char)isUserFavorite:(id)arg0;
- (char)isAutoPick:(id)arg0;
- (id)proposedStackAssetAfterRemovingFavorite:(id)arg0;
- (void)set_originalAutoPickIndexes:(NSIndexSet *)arg0;
- (void)set_autoPickIndexes:(NSMutableIndexSet *)arg0;
- (void)set_originalUserFavoriteIndexes:(NSIndexSet *)arg0;
- (void)set_userFavoriteIndexes:(NSMutableIndexSet *)arg0;
- (void)set_originalStackIndex:(unsigned int)arg0;
- (void)set_stackIndex:(unsigned int)arg0;

@end
