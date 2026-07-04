/* Runtime dump - HMObjectMergeCollection
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMObjectMergeCollection : NSObject
{
    NSMutableArray * _currentExistingObjects;
    HMObjectMergeOperations * _currentOperations;
    NSMutableArray * _currentAddedObjects;
    NSMutableArray * _currentRemovedObjects;
    NSMutableArray * _currentModifiedObjects;
    NSMapTable * _commonObjectsMaps;
}

@property (readonly, nonatomic) NSArray * addedObjects;
@property (readonly, nonatomic) NSArray * removedObjects;
@property (readonly, nonatomic) NSArray * modifiedObjects;
@property (readonly, nonatomic) NSArray * existingObjects;
@property (readonly, nonatomic) char modified;
@property (readonly, nonatomic) unsigned int modifiedCount;
@property (retain, nonatomic) NSMutableArray * currentExistingObjects;
@property (retain, nonatomic) HMObjectMergeOperations * currentOperations;
@property (retain, nonatomic) NSMutableArray * currentAddedObjects;
@property (retain, nonatomic) NSMutableArray * currentRemovedObjects;
@property (retain, nonatomic) NSMutableArray * currentModifiedObjects;
@property (retain, nonatomic) NSMapTable * commonObjectsMaps;

- (HMObjectMergeCollection *)initWithExistingObjects:(NSArray *)arg0 newObjects:(NSArray *)arg1 operations:(HMObjectMergeOperations *)arg2;
- (void)_enumerateObjectRemoveWithBlock:(id /* block */)arg0;
- (void)_replaceAddedObjectsWithObjectsFromArray:(NSArray *)arg0;
- (void)_enumerateObjectAdditionWithBlock:(id /* block */)arg0;
- (char)isModified;
- (NSMutableArray *)currentExistingObjects;
- (unsigned int)modifiedCount;
- (NSMutableArray *)currentAddedObjects;
- (NSMutableArray *)currentRemovedObjects;
- (NSMutableArray *)currentModifiedObjects;
- (void)setCurrentAddedObjects:(NSMutableArray *)arg0;
- (HMObjectMergeOperations *)currentOperations;
- (NSMapTable *)commonObjectsMaps;
- (NSArray *)existingObjects;
- (NSArray *)modifiedObjects;
- (void)_mergeCommonObjects;
- (void)mergeCommonObjectsNoMergeCount;
- (void)setCurrentExistingObjects:(NSMutableArray *)arg0;
- (void)setCurrentOperations:(HMObjectMergeOperations *)arg0;
- (void)setCurrentRemovedObjects:(NSMutableArray *)arg0;
- (void)setCurrentModifiedObjects:(NSMutableArray *)arg0;
- (void)setCommonObjectsMaps:(NSMapTable *)arg0;
- (HMObjectMergeCollection *)init;
- (NSArray *)addedObjects;
- (NSArray *)removedObjects;
- (void).cxx_destruct;

@end
