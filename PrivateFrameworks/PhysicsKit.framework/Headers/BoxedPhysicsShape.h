/* Runtime dump - BoxedPhysicsShape
 * Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface BoxedPhysicsShape : NSObject
{
    int shapeType;
    NSArray * points;
}

+ (BoxedPhysicsShape *)boxPhysicsShape:(struct PKPhysicsShape *)arg0;

- (void).cxx_destruct;
- (struct PKPhysicsShape *)unboxShape;

@end
