/* Runtime dump - PFUbiquityMetadataFactory
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityMetadataFactory : NSObject
{
    NSMutableDictionary * _rootLocationToPeerIDToEntry;
    NSRecursiveLock * _rootLocationToPeerIDToEntryLock;
    NSManagedObjectModel * _cachedModel;
}

+ (PFUbiquityMetadataFactory *)sharedFactory;
+ (void)initialize;

- (NSObject *)newMetadataManagedObjectModel;
- (NSObject *)newStackForLocalPeerID:(NSObject *)arg0 storeName:(NSString *)arg1 andUbiquityRootLocation:(NSObject *)arg2 error:(id *)arg3;
- (NSObject *)entryForLocalPeerID:(NSObject *)arg0 storeName:(NSString *)arg1 andUbiquityRootLocation:(NSObject *)arg2;
- (void)removeCachedCoordinatorsForLocalPeerID:(NSObject *)arg0 storeName:(NSString *)arg1 andUbiquityRootLocation:(NSObject *)arg2;
- (char)cacheEntryForLocalPeerID:(NSObject *)arg0 storeName:(NSString *)arg1 andUbiquityRootLocation:(NSObject *)arg2 error:(id *)arg3;
- (NSObject *)newMetadataEntryForLocalPeerID:(NSObject *)arg0 storeName:(NSString *)arg1 andUbiquityRootLocation:(NSObject *)arg2 error:(id *)arg3;
- (NSObject *)createMetadataModel;
- (NSString *)newEntityForName:(NSString *)arg0;
- (id)newAttributeNamed:(id)arg0 attributeType:(unsigned int)arg1 isOptional:(char)arg2 isTransient:(char)arg3 withDefaultValue:(NSString *)arg4 andMinValue:(id)arg5 andMaxValue:(id)arg6;
- (id)newRelationshipNamed:(id)arg0 withDestinationEntity:(NSObject *)arg1 andInverseRelationship:(id)arg2 isOptional:(char)arg3 isToMany:(char)arg4 andDeleteRule:(unsigned int)arg5;
- (void)addModelingToolUserInfoToEntity:(NSObject *)arg0;
- (void)addModelingToolUserInfoToProperty:(NSObject *)arg0;
- (void)removeAllCoordinatorsForRootLocation:(NSObject *)arg0;
- (void)dealloc;
- (PFUbiquityMetadataFactory *)init;
- (NSString *)description;

@end
