/* Runtime dump - SKPhysicsGrid
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsGrid : NSObject
{
    float _width;
    float _height;
}

@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;

+ (NSObject *)vectorGridFromTexture:(NSObject *)arg0 accuracy:(float)arg1;
+ (NSArray *)gridFromOccupancyArray:(char *)arg0 width:(int)arg1 height:(int)arg2;
+ (NSObject *)gridFromTexture:(NSObject *)arg0 alphaThreshold:(float)arg1 accuracy:(float)arg2;

- (void)spritesFromGrid:(id)arg0 gridSize:(struct CGSize)arg1 zPosition:(float)arg2 edgeColor:(UIColor *)arg3 interiorColor:(UIColor *)arg4 spriteSize:(struct CGSize)arg5 physicsBody:(NSObject *)arg6;
- (void)spritesFromGrid:(id)arg0 xDivisions:(int)arg1 zPosition:(float)arg2 spriteSize:(struct CGSize)arg3 texture:(NSObject *)arg4 physicsBody:(NSObject *)arg5;
- (float)width;
- (float)height;

@end
