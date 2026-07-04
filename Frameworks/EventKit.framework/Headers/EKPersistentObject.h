/* Runtime dump - EKPersistentObject
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentObject : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    EKEventStore * _eventStore;
    id _objectID;
    struct __CFDictionary * _loadedProperties;
    NSMutableDictionary * _referencers;
    NSMutableSet * _dirtyProperties;
    unsigned int _flags;
    NSMutableDictionary * _committedProperties;
}

@property (readonly, nonatomic) EKEventStore * eventStore;
@property (readonly, nonatomic) int entityType;
@property (retain, nonatomic) NSMutableDictionary * committedProperties;

+ (EKPersistentObject *)defaultPropertiesToLoad;
+ (NSMutableDictionary *)relations;

- (void)primitiveSetStringValue:(id)arg0 forKey:(NSString *)arg1;
- (NSString *)primitiveStringValueForKey:(NSString *)arg0;
- (NSString *)primitiveURLValueForKey:(NSString *)arg0;
- (void)primitiveSetURLValue:(id)arg0 forKey:(NSString *)arg1;
- (int)primitiveIntValueForKey:(NSString *)arg0;
- (void)primitiveSetIntValue:(int)arg0 forKey:(NSString *)arg1;
- (void)primitiveSetRelationValue:(id)arg0 forKey:(NSString *)arg1;
- (NSString *)primitiveRelationValueForKey:(NSString *)arg0;
- (void)_setEventStore:(NSObject *)arg0;
- (char)isNew;
- (char)refresh;
- (void)_setPendingInsert:(char)arg0;
- (void)_setPendingUpdate:(char)arg0;
- (void)_setPendingDelete:(char)arg0;
- (EKEventStore *)eventStore;
- (char)_isPendingInsert;
- (void)takeValues:(NSArray *)arg0 forProperties:(id *)arg1;
- (void)_setObjectID:(NSObject *)arg0;
- (void)takeValuesForDefaultProperties:(NSDictionary *)arg0 inSet:(NSSet *)arg1;
- (char)_isPendingDelete;
- (char)_isPendingUpdate;
- (char)pushDirtyProperties:(id *)arg0;
- (void)saved;
- (void)unloadPropertyForKey:(NSString *)arg0;
- (NSMutableSet *)dirtyProperties;
- (char)isPropertyDirty:(id)arg0;
- (NSString *)committedValueForKey:(NSString *)arg0;
- (void)_clearReferences;
- (void)_clearWeakRelations;
- (void)_releaseLoadedProperties;
- (NSArray *)_loadedPropertyKeys;
- (NSString *)_relationForKey:(NSString *)arg0;
- (void)_setDefaultPropertiesLoaded:(char)arg0;
- (char)_shouldRetainPropertyForKey:(NSString *)arg0;
- (void)_addReference:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)_propertyForKey:(NSString *)arg0;
- (void)_removeReference:(NSObject *)arg0 forKey:(NSString *)arg1;
- (char)_loadRelationForKey:(NSString *)arg0 value:(id *)arg1;
- (void)_loadDefaultPropertiesIfNeeded;
- (char)_loadChildIdentifiersForKey:(NSString *)arg0 values:(id *)arg1;
- (void)_addDirtyProperty:(NSObject *)arg0;
- (void)_addObjectCore:(id)arg0 toValues:(NSArray *)arg1 relation:(EKRelation *)arg2;
- (void)primitiveValueChangedForKey:(NSString *)arg0;
- (void)_removeObjectCore:(id)arg0 fromValues:(NSArray *)arg1 relation:(EKRelation *)arg2;
- (NSString *)_primitiveValueForKey:(NSString *)arg0 loader:(RUILoader *)arg1;
- (void)_primitiveSetValue:(DOMCSSPrimitiveValue *)arg0 forKey:(NSString *)arg1 daemonSetter:(id)arg2;
- (NSString *)primitiveNumberValueForKey:(NSString *)arg0;
- (NSString *)_loadStringValueForKey:(NSString *)arg0;
- (void)_takeValues:(NSArray *)arg0 forProperties:(id *)arg1;
- (void)_fastpathSetProperty:(NSObject *)arg0 forKey:(NSString *)arg1 isRelation:(char)arg2;
- (char)isPropertyLoaded:(id)arg0;
- (void)_takeValuesForDefaultProperties:(NSDictionary *)arg0 inSet:(NSSet *)arg1;
- (char)_areDefaultPropertiesLoaded;
- (char)existsInStore;
- (char)refreshExcludingProperties:(NSDictionary *)arg0;
- (void)primitiveAddRelatedObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)primitiveRemoveRelatedObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)primitiveSetNumberValue:(id)arg0 forKey:(NSString *)arg1;
- (double)primitiveDoubleValueForKey:(NSString *)arg0;
- (void)primitiveSetDoubleValue:(double)arg0 forKey:(NSString *)arg1;
- (char)primitiveBoolValueForKey:(NSString *)arg0;
- (void)primitiveSetBoolValue:(char)arg0 forKey:(NSString *)arg1;
- (NSString *)primitiveDateValueForKey:(NSString *)arg0;
- (void)primitiveSetDateValue:(id)arg0 forKey:(NSString *)arg1;
- (NSString *)primitiveDataValueForKey:(NSString *)arg0;
- (void)primitiveSetDataValue:(id)arg0 forKey:(NSString *)arg1;
- (void)faultPropertiesWithNames:(id)arg0;
- (NSMutableDictionary *)committedProperties;
- (void)setCommittedProperties:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (EKPersistentObject *)init;
- (char)isEqual:(NSObject *)arg0;
- (void)reset;
- (EKPersistentObject *)initCommon;
- (char)validate:(id *)arg0;
- (void)_setProperty:(NSObject *)arg0 forKey:(NSString *)arg1;
- (id)dump;
- (int)entityType;
- (struct _NSScalarObjectID *)objectID;
- (void)rollback;
- (char)isDirty;
- (void)changed;

@end
