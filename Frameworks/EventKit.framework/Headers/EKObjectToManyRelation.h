/* Runtime dump - EKObjectToManyRelation
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKObjectToManyRelation : EKObjectRelation
{
    NSMutableSet * _loadedItems;
    NSMutableSet * _effectiveItems;
    NSMutableSet * _addedItems;
    NSMutableSet * _removedItems;
}

@property (copy, nonatomic) NSSet * items;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) char itemsWereAdded;
@property (readonly, nonatomic) char itemsWereRemoved;
@property (retain, nonatomic) NSMutableSet * loadedItems;
@property (retain, nonatomic) NSMutableSet * effectiveItems;
@property (retain, nonatomic) NSMutableSet * addedItems;
@property (retain, nonatomic) NSMutableSet * removedItems;

- (void)refresh;
- (void)didCommit;
- (void)updatePersistentObject;
- (char)itemsWereAdded;
- (char)itemsWereRemoved;
- (id)committedValue;
- (char)isWeak;
- (NSArray *)_effectiveItems;
- (void)_addRelatedObject:(NSObject *)arg0 setInverse:(char)arg1 dirty:(char)arg2;
- (NSArray *)_loadedItems;
- (void)_removeRelatedObject:(NSObject *)arg0 setInverse:(char)arg1 dirty:(char)arg2;
- (void)_forgetRelatedObject:(NSObject *)arg0;
- (NSMutableSet *)loadedItems;
- (void)setLoadedItems:(NSMutableSet *)arg0;
- (NSMutableSet *)effectiveItems;
- (void)setEffectiveItems:(NSMutableSet *)arg0;
- (NSMutableSet *)addedItems;
- (void)setAddedItems:(NSMutableSet *)arg0;
- (NSMutableSet *)removedItems;
- (void)setRemovedItems:(NSMutableSet *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)description;
- (void)reset;
- (NSSet *)items;
- (void)setItems:(NSSet *)arg0;
- (void)addItem:(NSObject *)arg0;
- (void)removeItem:(void *)arg0;
- (char)validate:(id *)arg0;
- (void)rollback;

@end
