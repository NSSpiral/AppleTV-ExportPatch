/* Runtime dump - SKScene
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKScene : SKEffectNode
{
    double _lastUpdate;
    double _pausedTime;
    struct CGRect _visibleRect;
    int _scaleMode;
    NSMutableDictionary * _touchMap;
    NSMutableArray * _allChildenWithConstraints;
    struct CGRect _bounds;
    char _isSetup;
    char _usesExplicitUpdate;
    char _usesExplicitRender;
    SKPhysicsBody * _scenePinBody;
    id _view;
    char __needsUpdate;
    char __needsRender;
    SKPhysicsWorld * _physicsWorld;
    <SKSceneDelegate> * _delegate;
    PKPhysicsWorld * __pkPhysicsWorld;
}

@property char _usesExplicitUpdate;
@property char _usesExplicitRender;
@property (nonatomic) struct CGSize size;
@property (nonatomic) int scaleMode;
@property (retain, nonatomic) UIColor * backgroundColor;
@property (nonatomic) <SKSceneDelegate> * delegate;
@property (nonatomic) struct CGPoint anchorPoint;
@property (readonly, nonatomic) SKPhysicsWorld * physicsWorld;
@property (readonly, weak, nonatomic) SKView * view;
@property char _needsUpdate;
@property char _needsRender;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic) struct CGSize visibleRectSize;
@property (nonatomic) struct CGPoint visibleRectCenter;
@property (retain, nonatomic) PKPhysicsWorld * _pkPhysicsWorld;

+ (SKScene *)sceneWithContentsOfFile:(NSString *)arg0;
+ (SKScene *)sceneWithSize:(struct CGSize)arg0;
+ (SKScene *)sceneWithContentsOfFile:(NSString *)arg0 size:(struct CGSize)arg1;

- (void)setScaleMode:(int)arg0;
- (SKPhysicsWorld *)physicsWorld;
- (int)scaleMode;
- (void)willMoveFromView:(NSObject *)arg0;
- (void)_didMoveToView:(NSObject *)arg0;
- (void)didChangeSize:(struct CGSize)arg0;
- (char)_usesExplicitUpdate;
- (char)_needsUpdate;
- (void)set_needsUpdate:(char)arg0;
- (void)set_pkPhysicsWorld:(PKPhysicsWorld *)arg0;
- (void)set_usesExplicitRender:(char)arg0;
- (void)set_usesExplicitUpdate:(char)arg0;
- (void)didMoveToView:(NSObject *)arg0;
- (void)didEvaluateActions;
- (void)didSimulatePhysics;
- (float)zRotation;
- (void)setZRotation:(float)arg0;
- (void)didApplyConstraints;
- (void)didFinishUpdate;
- (char)_hasConstraints;
- (void)_registerConstraintsForNode:(NSObject *)arg0;
- (void)_removeConstraintsForNode:(NSObject *)arg0;
- (struct CGPoint)convertPointFromView:(struct CGPoint)arg0;
- (struct CGPoint)convertPointToView:(struct CGPoint)arg0;
- (void)setVisibleRectSize:(struct CGSize)arg0;
- (struct CGSize)visibleRectSize;
- (void)setVisibleRectCenter:(struct CGPoint)arg0;
- (struct CGPoint)visibleRectCenter;
- (char)_needsRender;
- (void)set_needsRender:(char)arg0;
- (PKPhysicsWorld *)_pkPhysicsWorld;
- (char)_usesExplicitRender;
- (void)didContinueContact:(id)arg0;
- (void)_setNeedsRender;
- (struct CGSize)size;
- (void)setBackgroundColor:(UIColor *)arg0;
- (SKScene *)initWithCoder:(NSCoder *)arg0;
- (UIColor *)backgroundColor;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<SKSceneDelegate> *)arg0;
- (SKScene *)init;
- (NSString *)description;
- (<SKSceneDelegate> *)delegate;
- (SKView *)view;
- (SKScene *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSize:(struct CGSize)arg0;
- (void)setPosition:(struct CGPoint)arg0;
- (struct CGPoint)position;
- (SKScene *)initWithSize:(struct CGSize)arg0;
- (struct CGPoint)anchorPoint;
- (void)setScale:(float)arg0;
- (void)setAnchorPoint:(struct CGPoint)arg0;
- (struct CGRect)visibleRect;
- (void)update:(double)arg0;
- (void)setPaused:(char)arg0;
- (void).cxx_construct;
- (void)setZPosition:(float)arg0;
- (void)setVisibleRect:(struct CGRect)arg0;
- (void).cxx_destruct;
- (void)_update:(double)arg0;
- (void)_setNeedsUpdate;
- (float)xScale;
- (void)setXScale:(float)arg0;
- (float)yScale;
- (void)setYScale:(float)arg0;
- (float)zPosition;

@end
