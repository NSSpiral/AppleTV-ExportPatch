/* Runtime dump - PHChange
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHChange : NSObject
{
    NSSet * _insertedObjectIDs;
    NSSet * _changedObjectIDs;
    NSSet * _deletedObjectIDs;
    NSDictionary * _changedAttributesByOID;
    NSDictionary * _changedRelationshipsByOID;
    NSMutableDictionary * _updatedObjectsChangedAttributesByEntityName;
    NSMutableDictionary * _updatedObjectsChangedRelationshipsByEntityName;
    NSArray * _changedObjectIDsArray;
    NSMutableDictionary * _changeDetailsForObjects;
    NSMutableDictionary * _collectionChangeDetailsForObjects;
    NSObject<OS_dispatch_queue> * _changeDetailIsolation;
    NSMapTable * _changeHandlingMap;
    char _unknownMergeEvent;
}

+ (void)pl_simulateChangeWithAssetContainerList:(<PLAssetContainerList> *)arg0 handler:(id /* block */)arg1;
+ (NSObject<OS_dispatch_queue> *)handlerQueue;

- (NSSet *)insertedObjectIDs;
- (id)updatedObjectIDs;
- (NSSet *)deletedObjectIDs;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(NSArray *)arg0 handler:(id /* block */)arg1;
- (void)_prepareCachedValuesForEntity:(NSObject *)arg0;
- (char)contentChangedForPHAssetOID:(id)arg0;
- (PHChange *)initWithChangedIdentifiers:(id)arg0 unknownMergeEvent:(char)arg1;
- (NSDictionary *)changedAttributesByOID;
- (NSDictionary *)changedRelationshipsByOID;
- (char)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg0 ofEntity:(NSObject *)arg1;
- (char)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg0 ofEntity:(NSObject *)arg1;
- (void)preloadChangeDetailsForFetchResults:(NSArray *)arg0 inManagedObjectContext:(NSObject *)arg1 handler:(id /* block */)arg2;
- (PHChange *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)changeDetailsForFetchResult:(NSObject *)arg0;
- (NSObject *)changeDetailsForObject:(NSObject *)arg0;

@end
