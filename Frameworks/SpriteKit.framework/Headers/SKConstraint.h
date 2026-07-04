/* Runtime dump - SKConstraint
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKConstraint : NSObject <NSCoding, NSCopying>
{
    char _enabled;
    SKNode * _referenceNode;
}

@property char enabled;
@property (retain) SKNode * referenceNode;

+ (id)positionX:(NSNumber *)arg0;
+ (id)positionY:(NSNumber *)arg0;
+ (id)positionX:(NSNumber *)arg0 Y:(id)arg1;
+ (SKConstraint *)distance:(PKPhysicsJointDistance *)arg0 toNode:(NSObject *)arg1;
+ (SKConstraint *)distance:(PKPhysicsJointDistance *)arg0 toPoint:(struct CGPoint)arg1;
+ (SKConstraint *)distance:(PKPhysicsJointDistance *)arg0 toPoint:(struct CGPoint)arg1 inNode:(NSObject *)arg2;
+ (SKConstraint *)zRotation:(float)arg0;
+ (NSObject *)orientToPoint:(struct CGPoint)arg0 inNode:(NSObject *)arg1 offset:(NSSet *)arg2;
+ (NSObject *)orientToNode:(NSObject *)arg0 offset:(NSSet *)arg1;
+ (NSObject *)orientToPoint:(struct CGPoint)arg0 offset:(NSSet *)arg1;
+ (SKConstraint *)width:(int *)arg0;
+ (SKConstraint *)height:(int *)arg0;
+ (SKConstraint *)width:(int *)arg0 height:(int *)arg1;
+ (SKConstraint *)scaleX:(float)arg0;
+ (SKConstraint *)scaleY:(float)arg0;
+ (SKConstraint *)scaleX:(float)arg0 scaleY:(float)arg1;
+ (SKConstraint *)scale:(SCNActionScale *)arg0;

- (void)setReferenceNode:(SKNode *)arg0;
- (SKConstraint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKConstraint *)init;
- (NSString *)description;
- (void)setEnabled:(char)arg0;
- (SKConstraint *)copyWithZone:(struct _NSZone *)arg0;
- (char)enabled;
- (void).cxx_destruct;
- (SKNode *)referenceNode;

@end
