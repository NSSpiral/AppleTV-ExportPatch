/* Runtime dump - NSMergePolicy
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMergePolicy : NSObject
{
    unsigned int _type;
    void * _reserved2;
    void * _reserved3;
}

@property (readonly) unsigned int mergeType;

+ (char)accessInstanceVariablesDirectly;
+ (void)load;

- (unsigned int)mergeType;
- (void)_mergeChangesStoreUpdatesTrumpForObject:(NSObject *)arg0 withRecord:(NSObject *)arg1;
- (void)_mergeChangesObjectUpdatesTrumpForObject:(NSObject *)arg0 withRecord:(NSObject *)arg1;
- (void)mergeToManyRelationshipForSourceObject:(NSObject *)arg0 withOldSnapshot:(char)arg1 newSnapshot:(NSObject *)arg2 andAncestor:(id)arg3 andLegacyPath:(char)arg4;
- (void)_mergeDeletionWithStoreChangesForObject:(NSObject *)arg0 withRecord:(NSObject *)arg1;
- (char)resolveConflict:(id)arg0;
- (void)dealloc;
- (NSMergePolicy *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)type;
- (NSMergePolicy *)copyWithZone:(struct _NSZone *)arg0;
- (NSMergePolicy *)initWithType:(unsigned int)arg0;
- (NSMergePolicy *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSMergePolicy *)initWithMergeType:(unsigned int)arg0;
- (char)resolveConflicts:(id)arg0 error:(id *)arg1;

@end
