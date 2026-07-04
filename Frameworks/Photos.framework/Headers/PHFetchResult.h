/* Runtime dump - PHFetchResult
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration>
{
    PHBatchFetchingArray * _fetchedObjects;
    NSArray * _seedOIDs;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    char _registeredForChangeNotificationDeltas;
    unsigned int _photosCount;
    unsigned int _videosCount;
    unsigned int _audiosCount;
    _PHFetchRequestWrapper * _fetchRequestWrapper;
    int _chunkSizeForFetch;
    PHQuery * _query;
}

@property (readonly) unsigned int count;
@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id lastObject;
@property (readonly) NSArray * fetchedObjectIDs;
@property (readonly) NSArray * fetchedObjects;
@property (readonly) NSFetchRequest * fetchRequest;
@property int chunkSizeForFetch;
@property (readonly) PHQuery * query;

+ (NSObject *)pl_fetchResultContainingAssetContainer:(NSObject *)arg0 includeTrash:(char)arg1;
+ (NSArray *)pl_fetchResultForAssetContainerList:(NSArray *)arg0;
+ (NSObject *)pl_fetchResultContainingAssetContainer:(NSObject *)arg0;
+ (NSObject *)pl_filterPredicateForAssetContainer:(NSObject *)arg0;
+ (PHFetchResult *)pl_fetchResultForStandInAssetCollection:(id)arg0;
+ (NSArray *)fetchObjectIDsForCombinableFetchResults:(NSArray *)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSObject *)cleanedAndSortedOIDsFrom:(NSObject *)arg0 usingFetchOptions:(NSDictionary *)arg1;
+ (PHFetchResult *)fetchObjectIDs:(id)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (PHFetchResult *)_batchFetchingArrayForObjectIDs:(id)arg0 fetchResult:(NSObject *)arg1;

- (NSArray *)fetchedObjects;
- (NSArray *)fetchedObjectIDs;
- (NSObject *)pl_photoLibraryObject;
- (int)collectionFetchType;
- (NSString *)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg0 withChange:(NSDictionary *)arg1 usingManagedObjectContext:(NSObject *)arg2;
- (int)chunkSizeForFetch;
- (char)interestedInChange:(NSDictionary *)arg0;
- (void)prefetchObjectsAtIndexes:(NSArray *)arg0;
- (id)fetchResultWithChangeHandlingValue:(id)arg0;
- (void)updateRegistrationForChangeNotificationDeltas;
- (PHFetchResult *)initWithQuery:(PHQuery *)arg0 oids:(NSArray *)arg1 registerIfNeeded:(char)arg2 usingManagedObjectContext:(NSObject *)arg3;
- (NSString *)fetchedObjectsUsingManagedObjectContext:(NSObject *)arg0;
- (void)setRegisteredForChangeNotificationDeltas:(char)arg0;
- (char)isRegisteredForChangeNotificationDeltas;
- (NSSet *)fetchedObjectIDsSet;
- (void)getMediaTypeCounts;
- (NSDictionary *)copyWithOptions:(NSDictionary *)arg0;
- (unsigned int)countOfAssetsWithMediaType:(int)arg0;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (NSObject *)firstObject;
- (NSObject *)lastObject;
- (NSObject *)objectAtIndexedSubscript:(unsigned int)arg0;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg0;
- (unsigned int)indexOfObject:(struct objc_method *)arg0;
- (NSString *)description;
- (void)enumerateObjectsWithOptions:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (char)containsObject:(NSObject *)arg0;
- (PHQuery *)query;
- (PHFetchResult *)copyWithZone:(struct _NSZone *)arg0;
- (NSIndexSet *)objectsAtIndexes:(struct objc_method *)arg0;
- (void).cxx_destruct;
- (PHFetchResult *)initWithQuery:(PHQuery *)arg0;
- (void)setChunkSizeForFetch:(int)arg0;
- (NSObject *)objectIDAtIndex:(unsigned int)arg0;
- (PLPhotoLibrary *)photoLibrary;
- (NSString *)containerIdentifier;
- (NSFetchRequest *)fetchRequest;
- (unsigned int)indexOfObject:(struct objc_method *)arg0 inRange:(struct _NSRange)arg1;
- (void)enumerateObjectsAtIndexes:(NSArray *)arg0 options:(unsigned int)arg1 usingBlock:(id /* block */)arg2;

@end
