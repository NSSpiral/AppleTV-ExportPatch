/* Runtime dump - UICollisionBehavior
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollisionBehavior : UIDynamicBehavior
{
    char _usesImplicitBounds;
    struct UIEdgeInsets _implicitBoundsInsets;
    PKExtendedPhysicsBody * _implicitBoundsBody;
    NSMutableDictionary * _boundaryBodies;
    NSMutableDictionary * _boundaryPaths;
    unsigned int _collisionMode;
    <UICollisionBehaviorDelegate> * _collisionDelegate;
    unsigned int _groupVID;
    unsigned int _groupBID;
    struct ? _collisionBehaviorFlags;
}

@property (readonly, copy, nonatomic) NSArray * items;
@property (nonatomic) unsigned int collisionMode;
@property (nonatomic) char translatesReferenceBoundsIntoBoundary;
@property (readonly, copy, nonatomic) NSArray * boundaryIdentifiers;
@property (nonatomic) <UICollisionBehaviorDelegate> * collisionDelegate;

- (void)dealloc;
- (UICollisionBehavior *)init;
- (NSString *)description;
- (NSArray *)items;
- (UICollisionBehavior *)initWithItems:(NSArray *)arg0;
- (void)_associate;
- (void)_dissociate;
- (void)addBoundaryWithIdentifier:(NSString *)arg0 fromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)setCollisionDelegate:(<UICollisionBehaviorDelegate> *)arg0;
- (void)_reevaluate:(unsigned int)arg0;
- (void)addItem:(NSObject *)arg0;
- (void)removeItem:(void *)arg0;
- (<UICollisionBehaviorDelegate> *)collisionDelegate;
- (void)_didBeginContact:(id)arg0;
- (void)_didEndContact:(id)arg0;
- (void)_addItem:(NSObject *)arg0;
- (void)_setCollisions:(char)arg0 forBody:(NSObject *)arg1 isEdge:(char)arg2;
- (unsigned int)collisionMode;
- (void)_setupImplicitBoundaries;
- (void)_applySettings;
- (void)_setupExplicitBoundaries;
- (void)_removeImplicitBoundaries;
- (void)_removeExplicitBoundaries;
- (void)_setTranslatesReferenceItemBounds:(char)arg0 intoBoundaryWithInsets:(struct UIEdgeInsets)arg1;
- (char)translatesReferenceBoundsIntoBoundary;
- (void)setCollisionMode:(unsigned int)arg0;
- (void)setTranslatesReferenceBoundsIntoBoundary:(char)arg0;
- (void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(struct UIEdgeInsets)arg0;
- (void)addBoundaryWithIdentifier:(NSString *)arg0 forPath:(NSString *)arg1;
- (NSString *)boundaryWithIdentifier:(NSString *)arg0;
- (void)removeBoundaryWithIdentifier:(NSString *)arg0;
- (NSArray *)boundaryIdentifiers;
- (void)removeAllBoundaries;

@end
