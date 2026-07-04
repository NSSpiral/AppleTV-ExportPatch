/* Runtime dump - SKReach
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKReach : SKAction
{
    SKNode * _ikRoot;
    struct CGPoint _goalPosition;
    NSMutableArray * _ikChain;
    float _velocity;
    char _timeConstrained;
    float _zRotationSpeed;
}

+ (SKReach *)reachTo:(struct CGPoint)arg0 rootNode:(NSObject *)arg1 duration:(double)arg2;
+ (SKReach *)reachTo:(struct CGPoint)arg0 rootNode:(NSObject *)arg1 velocity:(float)arg2;
+ (SKReach *)reachToNode:(NSObject *)arg0 rootNode:(NSObject *)arg1 duration:(double)arg2;
+ (SKReach *)reachToNode:(NSObject *)arg0 rootNode:(NSObject *)arg1 velocity:(float)arg2;
+ (SKReach *)reachTo:(struct CGPoint)arg0 rootNode:(NSObject *)arg1 zRotationSpeed:(float)arg2 maxDuration:(double)arg3;
+ (SKReach *)reachTo:(struct CGPoint)arg0 rootNode:(NSObject *)arg1 duration:(double)arg2 maxZRotationSpeed:(float)arg3;

- (void)updateWithTarget:(NSObject *)arg0 forTime:(double)arg1;
- (void)willStartWithTarget:(NSObject *)arg0 atTime:(double)arg1;
- (void)solveIKWithTarget:(NSObject *)arg0;
- (SKReach *)init;
- (SKReach *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
