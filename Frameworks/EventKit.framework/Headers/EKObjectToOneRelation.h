/* Runtime dump - EKObjectToOneRelation
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKObjectToOneRelation : EKObjectRelation
{
    EKObject * _relatedObject;
    char _weak;
}

- (void)refresh;
- (void)didCommit;
- (EKObjectToOneRelation *)initWithObject:(NSObject *)arg0 relationName:(NSString *)arg1 inverseRelationName:(NSString *)arg2 weak:(char)arg3;
- (EKObject *)relatedObject;
- (void)setRelatedObject:(EKObject *)arg0;
- (void)updatePersistentObject;
- (void)_clear;
- (id)committedValue;
- (char)isWeak;
- (void)_addRelatedObject:(NSObject *)arg0 setInverse:(char)arg1 dirty:(char)arg2;
- (void)_removeRelatedObject:(NSObject *)arg0 setInverse:(char)arg1 dirty:(char)arg2;
- (void)_unload;
- (void)_setRelatedObject:(NSObject *)arg0 setInverse:(char)arg1 dirty:(char)arg2;
- (void)dealloc;
- (NSString *)description;
- (void)reset;
- (char)validate:(id *)arg0;
- (void)rollback;

@end
