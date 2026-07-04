/* Runtime dump - PHCollection
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollection : PHObject
{
    char _customSortAscending;
    unsigned int _estimatedPhotosCount;
    unsigned int _estimatedVideosCount;
    int _customSortKey;
}

@property (readonly, nonatomic) char canContainAssets;
@property (readonly, nonatomic) char canContainCollections;
@property (readonly, nonatomic) NSString * localizedTitle;
@property (readonly, nonatomic) unsigned int estimatedPhotosCount;
@property (readonly, nonatomic) unsigned int estimatedVideosCount;
@property (readonly, nonatomic) char customSortAscending;
@property (readonly, nonatomic) int customSortKey;

+ (NSString *)managedEntityName;
+ (NSPredicate *)fetchPredicateFromComparisonPredicate:(NSPredicate *)arg0;
+ (NSString *)entityKeyForPropertyKey:(NSString *)arg0;
+ (NSObject *)_transformValueExpression:(NSObject *)arg0 forKeyPath:(NSString *)arg1;
+ (char)managedObjectSupportsTrashedState;
+ (NSDictionary *)fetchTopLevelUserCollectionsWithOptions:(NSDictionary *)arg0;
+ (PHCollection *)fetchMomentsForAssetsWithLocalIdentifiers:(NSArray *)arg0 options:(NSDictionary *)arg1;
+ (NSArray *)fetchCollectionsInCollectionList:(NSArray *)arg0 options:(NSDictionary *)arg1;

- (char)collectionHasFixedOrder;
- (PHCollection *)initWithFetchDictionary:(NSDictionary *)arg0 propertyHint:(unsigned int)arg1 photoLibrary:(PLPhotoLibrary *)arg2;
- (unsigned int)estimatedPhotosCount;
- (unsigned int)estimatedVideosCount;
- (char)collectionCanBePinned;
- (char)canContainAssets;
- (char)canContainCollections;
- (NSString *)description;
- (NSString *)localizedTitle;
- (char)canPerformEditOperation:(int)arg0;
- (char)customSortAscending;
- (int)customSortKey;

@end
