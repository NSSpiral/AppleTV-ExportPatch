/* Runtime dump - NSFetchedResultsController
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSFetchedResultsController : NSObject
{
    NSFetchRequest * _fetchRequest;
    NSManagedObjectContext * _managedObjectContext;
    NSString * _sectionNameKeyPath;
    NSString * _sectionNameKey;
    NSString * _cacheName;
    void * _cache;
    struct _fetchResultsControllerFlags _flags;
    id _delegate;
    id _sortKeys;
    id _fetchedObjects;
    id _sections;
    id _sectionsByName;
    id _sectionIndexTitles;
    id _sectionIndexTitlesSections;
}

@property (readonly, nonatomic) NSFetchRequest * fetchRequest;
@property (readonly, nonatomic) NSManagedObjectContext * managedObjectContext;
@property (readonly, nonatomic) NSString * sectionNameKeyPath;
@property (readonly, nonatomic) NSString * cacheName;
@property (nonatomic) <NSFetchedResultsControllerDelegate> * delegate;
@property (readonly, nonatomic) NSArray * fetchedObjects;
@property (readonly, nonatomic) NSArray * sectionIndexTitles;
@property (readonly, nonatomic) NSArray * sections;

+ (NSString *)_CoreDataSectionCachesPath;
+ (void)deleteCacheWithName:(NSString *)arg0;
+ (unsigned int)_insertIndexForObject:(NSObject *)arg0 inArray:(NSArray *)arg1 lowIdx:(unsigned int)arg2 highIdx:(unsigned int)arg3 sortDescriptors:(NSArray *)arg4;
+ (void)initialize;

- (NSArray *)fetchedObjects;
- (char)_keyPathContainsNonPersistedProperties:(NSDictionary *)arg0;
- (void)_managedObjectContextDidSave:(id)arg0;
- (void)_managedObjectContextDidChange:(NSDictionary *)arg0;
- (char)_restoreCachedSectionInfo;
- (char)_computeSectionInfo:(NSDictionary *)arg0 error:(id *)arg1;
- (NSObject *)_sectionNameForObject:(NSObject *)arg0;
- (NSFetchedResultsController *)initWithFetchRequest:(NSFetchRequest *)arg0 managedObjectContext:(NSManagedObjectContext *)arg1 sectionNameKeyPath:(NSString *)arg2 cacheName:(NSString *)arg3;
- (char)performFetch:(id *)arg0;
- (NSString *)objectAtIndexPath:(NSIndexPath *)arg0;
- (NSObject *)indexPathForObject:(NSObject *)arg0;
- (NSString *)sectionIndexTitleForSectionName:(NSString *)arg0;
- (int)sectionForSectionIndexTitle:(NSString *)arg0 atIndex:(int)arg1;
- (NSString *)sectionNameKeyPath;
- (NSString *)cacheName;
- (NSString *)_sectionCachePath;
- (char)_computeSectionInfoWithGroupBy:(id)arg0 error:(id *)arg1;
- (NSString *)_resolveSectionIndexTitleForSectionName:(NSString *)arg0;
- (void)_makeMutableFetchedObjects;
- (char)_objectInResults:(NSArray *)arg0;
- (unsigned int)_indexOfFetchedID:(NSObject *)arg0;
- (NSObject *)_createNewSectionForObject:(NSObject *)arg0;
- (void)_insertObjectInFetchedObjects:(NSArray *)arg0 atIndex:(unsigned int)arg1;
- (void)_updateSectionOffsetsStartingAtSection:(id)arg0;
- (NSObject *)_indexPathForIndex:(unsigned int)arg0;
- (unsigned int)_sectionNumberForIndex:(unsigned int)arg0;
- (void)_removeObjectInFetchedObjectsAtIndex:(unsigned int)arg0;
- (char)_postprocessDeletedObjects:(NSArray *)arg0;
- (char)_postprocessInsertedObjects:(NSArray *)arg0;
- (char)_hasFetchedObjects;
- (id)_fetchedObjectsArrayOfObjectIDs;
- (void)_preprocessInsertedObjects:(NSArray *)arg0 insertsInfo:(NSDictionary *)arg1 newSectionNames:(id)arg2;
- (void)_preprocessDeletedObjects:(NSArray *)arg0 deletesInfo:(NSDictionary *)arg1 sectionsWithDeletes:(id)arg2;
- (void)_preprocessUpdatedObjects:(NSArray *)arg0 insertsInfo:(NSDictionary *)arg1 deletesInfo:(NSDictionary *)arg2 updatesInfo:(NSDictionary *)arg3 sectionsWithDeletes:(id)arg4 newSectionNames:(id)arg5 treatAsRefreshes:(char)arg6;
- (char)_postprocessUpdatedObjects:(NSArray *)arg0;
- (void)_appendAffectedStoreInfoToData:(NSData *)arg0 adjustedOffset:(long long *)arg1;
- (void)_updateCachedStoreInfo;
- (char)_didUseCachedSectionInfo;
- (char)_didUpdateOnlyStoreInfo;
- (char)_didFailPostprocessing;
- (char)_didUseGroupBy;
- (void)_dumpSectionInfo;
- (void)dealloc;
- (void)setDelegate:(<NSFetchedResultsControllerDelegate> *)arg0;
- (<NSFetchedResultsControllerDelegate> *)delegate;
- (NSArray *)sectionIndexTitles;
- (NSArray *)sections;
- (NSManagedObjectContext *)managedObjectContext;
- (NSFetchRequest *)fetchRequest;

@end
