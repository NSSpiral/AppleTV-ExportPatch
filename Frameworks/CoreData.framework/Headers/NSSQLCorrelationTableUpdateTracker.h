/* Runtime dump - NSSQLCorrelationTableUpdateTracker
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLCorrelationTableUpdateTracker : NSObject
{
    NSSQLManyToMany * _relationship;
    id _inserts;
    id _deletes;
    id _masterUpdates;
    id _otherUpdates;
}

@property (readonly) NSSQLManyToMany * relationship;

- (NSSQLManyToMany *)relationship;
- (NSSQLCorrelationTableUpdateTracker *)initForRelationship:(OCXRelationship *)arg0;
- (void)trackInserts:(id)arg0 deletes:(CPLEngineRemappedDeletes *)arg1 reorders:(id)arg2 forObjectWithID:(int)arg3;
- (void)trackReorders:(id)arg0 forObjectWithID:(int)arg1;
- (void)enumerateInsertsUsingBlock:(id /* block */)arg0;
- (void)enumerateDeletesUsingBlock:(id /* block */)arg0;
- (char)hasMasterReorders;
- (void)enumerateMasterReordersUsingBlock:(id /* block */)arg0;
- (void)enumerateMasterReordersPart2UsingBlock:(id /* block */)arg0;
- (char)hasReorders;
- (void)enumerateReordersUsingBlock:(id /* block */)arg0;
- (NSArray *)_organizeValues:(NSArray *)arg0;
- (void)dealloc;
- (char)hasInserts;
- (char)hasDeletes;

@end
