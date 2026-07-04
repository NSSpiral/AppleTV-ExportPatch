/* Runtime dump - PLFetchingAlbum
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFetchingAlbum : _PLFetchingAlbum
{
    unsigned int _countForDisplay;
    unsigned int _photosCount;
    unsigned int _videosCount;
    int _emptyState;
    NSArray * _cachedKeyAssets;
    NSPredicate * _ALAssetsGroupFilterPredicate;
    unsigned int _batchSize;
}

@property (retain, nonatomic) NSFetchRequest * fetchRequest;
@property (retain, nonatomic) NSData * customQueryParameters;
@property (retain, nonatomic) NSString * customQueryType;
@property (readonly, retain, nonatomic) NSPredicate * extraFilterPredicate;
@property (retain, nonatomic) NSPredicate * ALAssetsGroupFilterPredicate;
@property (nonatomic) unsigned int batchSize;
@property (readonly, nonatomic) char hasAssetsCache;
@property (retain, nonatomic) NSOrderedSet * fetchedAssets;

+ (PLFetchingAlbum *)predicateForAlbumKind:(int)arg0;
+ (NSPredicate *)_panoramasAlbumPredicate;
+ (PLFetchingAlbum *)sortDescriptorsForAlbumKind:(int)arg0;
+ (char)contextShouldIgnoreChangesForFetchedAssets;
+ (char)contextShouldIgnoreChangesForFetchedAssetsSet;
+ (char)contextShouldIgnoreChangesForFetchRequest;
+ (char)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;

- (void)dealloc;
- (unsigned int)count;
- (char)isEmpty;
- (unsigned int)batchSize;
- (void)batchFetchAssets:(NSArray *)arg0;
- (NSPredicate *)filteredIndexesForPredicate:(NSPredicate *)arg0;
- (NSMutableOrderedSet *)mutableAssets;
- (void)setBatchSize:(unsigned int)arg0;
- (char)canPerformEditOperation:(unsigned int)arg0;
- (NSArray *)assets;
- (unsigned int)approximateCount;
- (NSSet *)keyAsset;
- (void)setKeyAsset:(NSSet *)arg0;
- (PLManagedAsset *)secondaryKeyAsset;
- (void)setSecondaryKeyAsset:(PLManagedAsset *)arg0;
- (PLManagedAsset *)tertiaryKeyAsset;
- (void)setTertiaryKeyAsset:(PLManagedAsset *)arg0;
- (void)awakeFromInsert;
- (NSArray *)primitiveAssets;
- (void)awakeFromFetch;
- (void)didTurnIntoFault;
- (void)updateSnapshotAndClearCaches:(id)arg0;
- (NSPredicate *)extraFilterPredicate;
- (void)setupFetchRequest;
- (NSPredicate *)ALAssetsGroupFilterPredicate;
- (void)setFetchRequest:(NSFetchRequest *)arg0;
- (NSFetchRequest *)fetchRequest;
- (NSURLRequest *)_performFetchWithRequest:(NSURLRequest *)arg0;
- (unsigned int)_fetchedCountForAssetsOfKind:(short)arg0;
- (NSArray *)_cachedKeyAssets;
- (void)setALAssetsGroupFilterPredicate:(NSPredicate *)arg0;
- (void)setAssets:(NSArray *)arg0;
- (unsigned int)countForAssetsOfKind:(short)arg0;
- (char)hasAssetsCache;
- (NSArray *)fastPointerAccessSetForAssets:(NSArray *)arg0;
- (char)mayHaveAssetsInCommon:(id)arg0;

@end
