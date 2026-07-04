/* Runtime dump - SKCropNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKCropNode : SKNode
{
    SKNode * _mask;
    struct SKCSprite * _csprite;
}

@property (retain, nonatomic) SKNode * maskNode;

- (char)isEqualToNode:(NSObject *)arg0;
- (void)setMaskNode:(SKNode *)arg0;
- (SKNode *)maskNode;
- (SKCropNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKCropNode *)init;
- (void).cxx_destruct;

@end
