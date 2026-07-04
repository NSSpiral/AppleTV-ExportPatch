/* Runtime dump - EKObject
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKObject : NSObject
{
    NSMutableDictionary * _dirtyProperties;
    NSMutableDictionary * _cachedProperties;
    EKPersistentObject * _persistentObject;
    NSString * _propertyName;
    EKObjectRelation * _owningRelation;
    NSMutableDictionary * _relations;
    NSMutableSet * _weakRelations;
    unsigned long _flags;
}

@property (nonatomic) EKObjectRelation * owningRelation;
@property (retain, nonatomic) NSMutableDictionary * dirtyProperties;
@property (retain, nonatomic) NSMutableDictionary * cachedProperties;
@property (retain, nonatomic) EKPersistentObject * persistentObject;
@property (copy, nonatomic) NSString * propertyName;
@property (retain, nonatomic) NSMutableDictionary * relations;
@property (retain, nonatomic) NSMutableSet * weakRelations;
@property (nonatomic) unsigned long flags;

- (void)setPropertyName:(NSString *)arg0;
- (NSMutableDictionary *)relations;
- (char)isNew;
- (char)refresh;
- (EKObject *)initWithPersistentObject:(EKPersistentObject *)arg0;
- (EKEventStore *)eventStore;
- (void)didCommit;
- (EKPersistentObject *)persistentObject;
- (void)setFlags:(unsigned long)arg0;
- (NSString *)persistentOrDirtyPropertyForKey:(NSString *)arg0;
- (void)setPropertyValue:(id)arg0 forKey:(NSString *)arg1;
- (NSString *)relationForKey:(NSString *)arg0;
- (NSMutableDictionary *)dirtyProperties;
- (char)isPropertyDirty:(id)arg0;
- (void)insertPersistentObjectIfNeeded;
- (void)updatePersistentObject;
- (void)deletePersistentObject;
- (NSString *)lazyLoadRelationForKey:(NSString *)arg0;
- (NSString *)committedValueForKey:(NSString *)arg0;
- (void)updatePersistentValueForKeyIfNeeded:(id)arg0;
- (void)setPersistentObject:(EKPersistentObject *)arg0;
- (char)rebase;
- (void)clearPropertyValueForKey:(NSString *)arg0;
- (char)propertyValueForKey:(NSString *)arg0 value:(id *)arg1;
- (int)intPropertyForKey:(NSString *)arg0 withPersistentFallback:(char)arg1;
- (char)boolPropertyForKey:(NSString *)arg0 withPersistentFallback:(char)arg1;
- (NSString *)propertyForKey:(NSString *)arg0 withPersistentFallback:(char)arg1;
- (void)cachePropertyValue:(id)arg0 forKey:(NSString *)arg1;
- (char)existsInStore;
- (void)faultPropertiesWithNames:(id)arg0;
- (NSString *)propertyValueForKey:(NSString *)arg0;
- (void)childRelationChanged:(NSNotification *)arg0;
- (void)addWeakRelation:(id)arg0;
- (void)removeWeakRelation:(id)arg0;
- (void)setDirtyProperties:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)cachedProperties;
- (void)setCachedProperties:(NSMutableDictionary *)arg0;
- (EKObjectRelation *)owningRelation;
- (void)setOwningRelation:(EKObjectRelation *)arg0;
- (void)setRelations:(NSMutableDictionary *)arg0;
- (NSMutableSet *)weakRelations;
- (void)setWeakRelations:(NSMutableSet *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (void)reset;
- (NSString *)owner;
- (char)validate:(id *)arg0;
- (unsigned long)flags;
- (char)hasChanges;
- (struct _NSScalarObjectID *)objectID;
- (void)rollback;
- (NSString *)propertyName;

@end
