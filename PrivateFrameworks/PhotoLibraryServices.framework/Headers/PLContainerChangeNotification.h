/* Runtime dump - PLContainerChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLContainerChangeNotification : PLChangeNotification
{
    id _object;
    PLObjectSnapshot * _snapshot;
    NSArray * _changedObjects;
    char _didCalculateDiffs;
    char _shouldReload;
    NSIndexSet * _deletedIndexes;
    NSIndexSet * _insertedIndexes;
    NSIndexSet * _movedIndexes;
    struct __CFArray * _movedFromIndexes;
    NSIndexSet * _changedIndexes;
    char _countDidChange;
}

@property (nonatomic) char _didCalculateDiffs;
@property (readonly, retain, nonatomic) PLManagedObject * _managedObject;
@property (readonly, retain, nonatomic) NSString * _contentRelationshipName;
@property (readonly, retain, nonatomic) NSArray * _changedObjects;
@property (readonly, retain, nonatomic) PLObjectSnapshot * snapshot;
@property (readonly, retain, nonatomic) NSString * _diffDescription;
@property (readonly, nonatomic) char countDidChange;
@property (readonly, nonatomic) char shouldReload;
@property (readonly, retain, nonatomic) NSIndexSet * deletedIndexes;
@property (readonly, retain, nonatomic) NSIndexSet * insertedIndexes;
@property (readonly, nonatomic) char hasMoves;
@property (readonly, retain, nonatomic) NSIndexSet * changedIndexes;
@property (readonly, retain, nonatomic) NSIndexSet * changedIndexesRelativeToSnapshot;
@property (readonly, retain, nonatomic) NSArray * deletedObjects;
@property (readonly, retain, nonatomic) NSArray * insertedObjects;
@property (readonly, retain, nonatomic) NSArray * changedObjects;

- (void)dealloc;
- (PLContainerChangeNotification *)init;
- (NSString *)name;
- (PLContainerChangeNotification *)_init;
- (PLObjectSnapshot *)snapshot;
- (NSObject *)object;
- (NSArray *)insertedObjects;
- (NSArray *)deletedObjects;
- (char)shouldReload;
- (NSIndexSet *)deletedIndexes;
- (NSIndexSet *)insertedIndexes;
- (void)enumerateMovesWithBlock:(id /* block */)arg0;
- (NSIndexSet *)changedIndexes;
- (PLManagedObject *)_managedObject;
- (void)_calculateDiffs;
- (NSString *)_diffDescription;
- (void)_calculateDiffsIfNecessary;
- (NSObject *)_initWithObject:(NSObject *)arg0 snapshot:(PLObjectSnapshot *)arg1 changedObjects:(NSArray *)arg2;
- (char)_getOldSet:(id *)arg0 newSet:(id *)arg1;
- (NSArray *)_changedObjects;
- (NSString *)_contentRelationshipName;
- (char)countDidChange;
- (char)hasMoves;
- (NSIndexSet *)changedIndexesRelativeToSnapshot;
- (NSArray *)changedObjects;
- (unsigned int)snapshotIndexForContainedObject:(NSObject *)arg0;
- (char)_didCalculateDiffs;
- (void)_setDidCalculateDiffs:(char)arg0;

@end
