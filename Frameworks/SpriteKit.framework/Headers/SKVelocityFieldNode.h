/* Runtime dump - SKVelocityFieldNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKVelocityFieldNode : SKFieldNode
{
    SKTexture * _velocityTexture;
}

@property (retain, nonatomic) SKTexture * velocityTexture;
@property (nonatomic) id velocity;

- (void)setVelocityTexture:(SKTexture *)arg0;
- (NSString *)_descriptionClassName;
- (void)_initialize;
- (SKTexture *)velocityTexture;
- (SKVelocityFieldNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKVelocityFieldNode *)init;
- (void)setVelocity:(PKPhysicsFieldVelocity *)arg0;
- (struct SCNVector3)velocity;
- (void).cxx_destruct;

@end
