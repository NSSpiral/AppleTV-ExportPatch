/* Runtime dump - PHFetchResultChangeDetails
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFetchResultChangeDetails : NSObject
{
    PHFetchResult * _fetchResultBeforeChanges;
    PHFetchResult * _fetchResultAfterChanges;
    NSArray * _previousItems;
    NSArray * _currentItems;
    NSIndexSet * _removedIndexes;
    NSIndexSet * _insertedIndexes;
    NSIndexSet * _movedIndexes;
    struct __CFArray * _movedFromIndexes;
    NSArray * _changedItems;
    NSIndexSet * _changedIndexes;
    char _skipIncrementalChanges;
}

@property (readonly) PHFetchResult * fetchResultBeforeChanges;
@property (readonly) PHFetchResult * fetchResultAfterChanges;
@property (readonly) char hasIncrementalChanges;
@property (readonly) NSIndexSet * removedIndexes;
@property (readonly) NSArray * removedObjects;
@property (readonly) NSIndexSet * insertedIndexes;
@property (readonly) NSArray * insertedObjects;
@property (readonly) NSIndexSet * changedIndexes;
@property (readonly) NSArray * changedObjects;
@property (readonly) char hasMoves;

+ (NSArray *)_oidsForPHObjects:(NSArray *)arg0;
+ (NSObject *)changeDetailsFromFetchResult:(NSObject *)arg0 toFetchResult:(NSObject *)arg1 changedObjects:(NSArray *)arg2;

- (PHFetchResultChangeDetails *)initWithManualFetchResultAfterChanges:(id)arg0;
- (void)calculateDiffs;
- (PHFetchResultChangeDetails *)initWithFetchResult:(NSObject *)arg0 currentFetchResult:(NSObject *)arg1 changedItems:(NSArray *)arg2 unknownMergeEvent:(char)arg3;
- (char)hasDiffs;
- (PHFetchResult *)fetchResultBeforeChanges;
- (NSArray *)currentItems;
- (NSString *)description;
- (NSArray *)removedObjects;
- (void).cxx_destruct;
- (char)hasIncrementalChanges;
- (NSIndexSet *)removedIndexes;
- (PHFetchResult *)fetchResultAfterChanges;
- (NSArray *)insertedObjects;
- (char)shouldReload;
- (NSIndexSet *)insertedIndexes;
- (void)enumerateMovesWithBlock:(id /* block */)arg0;
- (NSIndexSet *)changedIndexes;
- (char)hasMoves;
- (NSArray *)changedObjects;
- (unsigned int)snapshotIndexForContainedObject:(NSObject *)arg0;

@end
