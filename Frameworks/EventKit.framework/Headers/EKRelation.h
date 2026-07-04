/* Runtime dump - EKRelation
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRelation : NSObject
{
    NSString * _entityName;
    char _toMany;
    char _ownsRelated;
    NSSet * _inversePropertyNames;
    id _inversePropertyIsApplicable;
}

@property (readonly, nonatomic) char toMany;
@property (readonly, nonatomic) NSSet * inversePropertyNames;
@property (readonly, nonatomic) char ownsRelatedObject;
@property (copy, nonatomic) id inversePropertyIsApplicable;

+ (EKRelation *)relationWithEntityName:(NSString *)arg0 toMany:(char)arg1 inversePropertyNames:(NSSet *)arg2 ownsRelated:(char)arg3;
+ (EKRelation *)relationWithEntityName:(NSString *)arg0 toMany:(char)arg1 inversePropertyNames:(NSSet *)arg2;

- (char)toMany;
- (char)ownsRelatedObject;
- (NSSet *)inversePropertyNames;
- (char)shouldSetInverseProperty:(NSObject *)arg0 onObject:(NSObject *)arg1 forObject:(NSObject *)arg2;
- (EKRelation *)initWithEntityName:(NSString *)arg0 toMany:(char)arg1 inversePropertyNames:(NSSet *)arg2 ownsRelated:(char)arg3;
- (id)inversePropertyIsApplicable;
- (void)setInversePropertyIsApplicable:(id)arg0;
- (void)dealloc;
- (NSString *)description;

@end
