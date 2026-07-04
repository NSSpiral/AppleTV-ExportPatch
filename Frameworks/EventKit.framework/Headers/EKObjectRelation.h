/* Runtime dump - EKObjectRelation
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKObjectRelation : NSObject
{
    EKObject * _owner;
    NSString * _relationName;
    char _dirty;
    char _loaded;
    NSString * _inverseName;
}

@property (readonly, nonatomic) EKObject * owner;
@property (readonly, nonatomic) NSString * relationName;
@property (readonly, nonatomic) NSString * inverseName;

- (void)refresh;
- (void)didCommit;
- (EKObjectRelation *)initWithOwner:(EKObject *)arg0 relationName:(NSString *)arg1 inverseRelationName:(NSString *)arg2;
- (void)updatePersistentObject;
- (id)committedValue;
- (void)relatedObjectDidChange;
- (NSString *)inverseName;
- (char)isWeak;
- (void)_addRelatedObject:(NSObject *)arg0 setInverse:(char)arg1 dirty:(char)arg2;
- (void)_removeRelatedObject:(NSObject *)arg0 setInverse:(char)arg1 dirty:(char)arg2;
- (NSString *)relationName;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)reset;
- (EKObject *)owner;
- (char)validate:(id *)arg0;
- (void)rollback;
- (char)isDirty;

@end
