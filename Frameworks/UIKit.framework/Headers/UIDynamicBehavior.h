/* Runtime dump - UIDynamicBehavior
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDynamicBehavior : NSObject
{
    UIDynamicAnimator * _context;
    NSMutableArray * _items;
    NSMutableArray * _behaviors;
    NSMutableArray * _addedBehaviors;
    char __isPrimitiveBehavior;
    id _action;
}

@property (readonly, copy, nonatomic) NSArray * childBehaviors;
@property (copy, nonatomic) id action;
@property (readonly, nonatomic) UIDynamicAnimator * dynamicAnimator;
@property (nonatomic) char _isPrimitiveBehavior;

+ (void)initialize;

- (void)dealloc;
- (UIDynamicBehavior *)init;
- (NSString *)description;
- (NSURL *)action;
- (EAGLContext *)_context;
- (NSMutableArray *)items;
- (void)setAction:(NSObject *)arg0;
- (NSMutableArray *)_items;
- (UIDynamicBehavior *)_init:(char)arg0;
- (void)_associate;
- (void)_dissociate;
- (void)_changedParameterForBody:(NSObject *)arg0;
- (void)_reevaluate:(unsigned int)arg0;
- (NSString *)_itemsDescription;
- (void)_setItems:(NSArray *)arg0;
- (void)_setContext:(NSObject *)arg0;
- (void)willMoveToAnimator:(id)arg0;
- (NSArray *)childBehaviors;
- (void)_step;
- (char)allowsAnimatorToStop;
- (void)_isPrimitiveBehavior:(char)arg0;
- (char)_isPrimitiveBehavior;
- (UIDynamicAnimator *)dynamicAnimator;
- (void)addChildBehavior:(id)arg0;
- (void)removeChildBehavior:(id)arg0;

@end
