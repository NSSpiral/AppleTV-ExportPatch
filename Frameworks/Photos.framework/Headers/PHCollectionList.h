/* Runtime dump - PHCollectionList
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollectionList : PHCollection
{
    int _collectionListType;
    int _collectionListSubtype;
    NSString * _localizedTitle;
    NSDate * _startDate;
    NSDate * _endDate;
    NSArray * _localizedLocationNames;
    NSArray * _collections;
    PHQuery * _query;
    NSString * _transientIdentifier;
    int _plAlbumKind;
    id _childCollectionsSortingComparator;
    unsigned int _unreadAssetCollectionsCount;
    unsigned int _estimatedChildCollectionCount;
}

@property (readonly, nonatomic) int collectionListType;
@property (readonly, nonatomic) int collectionListSubtype;
@property (readonly, nonatomic) NSDate * startDate;
@property (readonly, nonatomic) NSDate * endDate;
@property (readonly, nonatomic) NSArray * localizedLocationNames;
@property (readonly, copy, nonatomic) id childCollectionsSortingComparator;
@property (readonly, nonatomic) unsigned int unreadAssetCollectionsCount;
@property (readonly, nonatomic) unsigned int estimatedChildCollectionCount;
@property (readonly, nonatomic) NSString * transientIdentifier;
@property (readonly, nonatomic) NSArray * collections;
@property (readonly, nonatomic) PHQuery * query;

+ (NSString *)managedEntityName;
+ (NSPredicate *)fetchPredicateFromComparisonPredicate:(NSPredicate *)arg0;
+ (NSString *)entityKeyForPropertyKey:(NSString *)arg0;
+ (PHCollectionList *)propertiesToFetchWithHint:(unsigned int)arg0;
+ (char)managedObjectSupportsTrashedState;
+ (PHCollectionList *)identifierCode;
+ (NSObject *)transientCollectionListWithCollectionsFetchResult:(NSObject *)arg0 title:(NSString *)arg1;
+ (PHCollectionList *)transientCollectionListWithCollections:(NSArray *)arg0 title:(NSString *)arg1 identifier:(NSString *)arg2;
+ (NSObject *)transientCollectionListWithCollectionsFetchResult:(NSObject *)arg0 title:(NSString *)arg1 identifier:(NSString *)arg2;
+ (PHCollectionList *)fetchCollectionListsContainingCollection:(id)arg0 options:(NSDictionary *)arg1;
+ (PHCollectionList *)fetchCollectionListsWithLocalIdentifiers:(NSArray *)arg0 options:(NSDictionary *)arg1;
+ (PHCollectionList *)fetchCollectionListsWithCloudIdentifiers:(id)arg0 options:(NSDictionary *)arg1;
+ (NSObject *)fetchCollectionListsWithType:(int)arg0 subtype:(int)arg1 options:(NSDictionary *)arg2;
+ (NSDictionary *)fetchRootAlbumCollectionListWithOptions:(NSDictionary *)arg0;
+ (PHCollectionList *)fetchMomentListsWithSubtype:(int)arg0 containingMoment:(id)arg1 options:(NSDictionary *)arg2;
+ (PHCollectionList *)fetchMomentListsWithSubtype:(int)arg0 options:(NSDictionary *)arg1;
+ (PHCollectionList *)transientCollectionListWithAssetCollections:(id)arg0 title:(NSString *)arg1;
+ (NSObject *)transientCollectionListWithAssetCollectionsFetchResult:(PHFetchResult *)arg0 title:(NSString *)arg1;
+ (PHCollectionList *)transientCollectionListWithAssetCollections:(id)arg0 title:(NSString *)arg1 identifier:(NSString *)arg2;
+ (NSObject *)transientCollectionListWithAssetCollectionsFetchResult:(PHFetchResult *)arg0 title:(NSString *)arg1 identifier:(NSString *)arg2;
+ (PHCollectionList *)transientCollectionListWithCollections:(NSArray *)arg0 title:(NSString *)arg1;

- (NSArray *)collections;
- (char)collectionHasFixedOrder;
- (PHCollectionList *)initWithFetchDictionary:(NSDictionary *)arg0 propertyHint:(unsigned int)arg1 photoLibrary:(PLPhotoLibrary *)arg2;
- (Class)changeRequestClass;
- (int)collectionListType;
- (NSString *)transientIdentifier;
- (PHCollectionList *)initTransientWithCollections:(NSArray *)arg0 orQuery:(NSObject *)arg1 title:(NSString *)arg2 identifier:(NSString *)arg3;
- (int)collectionListSubtype;
- (char)canContainCollections;
- (id /* block */)childCollectionsSortingComparator;
- (unsigned int)unreadAssetCollectionsCount;
- (unsigned int)estimatedChildCollectionCount;
- (NSArray *)pl_assetContainerList;
- (NSString *)description;
- (PHQuery *)query;
- (void).cxx_destruct;
- (NSString *)localizedTitle;
- (char)canPerformEditOperation:(int)arg0;
- (NSArray *)localizedLocationNames;
- (NSDate *)startDate;
- (NSDate *)endDate;

@end
