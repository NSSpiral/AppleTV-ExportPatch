/* Runtime dump - PLAssetContainerDataSource
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAssetContainerDataSource : NSObject <PHAssetCollectionDataSource>
{
    PHFetchResult * _assetCollectionsFetchResult;
    NSMutableDictionary * _assetsFetchResultByAssetCollection;
    unsigned int _allAssetsCount;
    unsigned int * _containerCounts;
    char _cachedValuesNeedUpdate;
    unsigned int _lastAssetCollectionIndex;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) PHFetchResult * assetCollectionsFetchResult;

- (void)dealloc;
- (NSString *)description;
- (PHFetchResult *)assetCollectionsFetchResult;
- (PLAssetContainerDataSource *)initWithAssetCollectionsFetchResult:(PHFetchResult *)arg0 collectionsAssetsFetchResults:(NSArray *)arg1;
- (NSSet *)indexPathOfAsset:(NSSet *)arg0;
- (NSString *)decrementAssetIndexPath:(NSIndexPath *)arg0 insideCurrentAssetContainer:(char)arg1 andWrap:(char)arg2;
- (NSString *)incrementAssetIndexPath:(NSIndexPath *)arg0 insideCurrentAssetContainer:(char)arg1 andWrap:(char)arg2;
- (NSString *)assetAtIndexPath:(NSIndexPath *)arg0;
- (PHFetchResult *)assetsInAssetCollection:(PHAssetCollection *)arg0;
- (void)viewControllerPhotoLibraryDidChange:(NSDictionary *)arg0;
- (char)hasAssetAtIndexPath:(NSIndexPath *)arg0;
- (unsigned int)allAssetsCount;
- (unsigned int)indexOfContainer:(NSObject *)arg0;
- (NSObject *)assetWithObjectID:(NSObject *)arg0;
- (unsigned int)globalIndexForIndexPath:(NSIndexPath *)arg0;
- (NSObject *)assetsInAssetCollectionAtIndex:(unsigned int)arg0;
- (NSString *)findNearestIndexPath:(NSIndexPath *)arg0 preferNext:(char)arg1;
- (unsigned int)incrementGlobalIndex:(unsigned int)arg0 insideCurrentAssetContainer:(char)arg1 andWrap:(char)arg2;
- (unsigned int)decrementGlobalIndex:(unsigned int)arg0 insideCurrentAssetContainer:(char)arg1 andWrap:(char)arg2;
- (NSObject *)assetContainerAtIndex:(unsigned int)arg0;
- (NSObject *)assetAtGlobalIndex:(unsigned int)arg0;
- (NSObject *)indexPathForGlobalIndex:(unsigned int)arg0;
- (unsigned int)assetCountForContainerAtIndex:(unsigned int)arg0;
- (NSArray *)pl_fetchAllAssets;
- (unsigned int)globalIndexOfAsset:(NSSet *)arg0;
- (NSSet *)assetContainerForAsset:(NSSet *)arg0;
- (NSObject *)assetContainerForAssetGlobalIndex:(unsigned int)arg0;
- (unsigned int)indexOffsetForAssetContainerAtAssetIndex:(unsigned int)arg0;
- (NSObject *)assetInAssetContainer:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSString *)lastAssetIndexPath;
- (NSString *)firstAssetIndexPath;
- (unsigned int)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(unsigned int)arg0 wrap:(char)arg1;
- (unsigned int)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(unsigned int)arg0 wrap:(char)arg1;
- (void)_updateCachedValues;
- (void)_updateCachedCount:(unsigned int)arg0 forContainerAtContainerIndex:(unsigned int)arg1;
- (NSArray *)newAssetsFetchResults;
- (unsigned int)assetCountForContainer:(NSObject *)arg0;

@end
