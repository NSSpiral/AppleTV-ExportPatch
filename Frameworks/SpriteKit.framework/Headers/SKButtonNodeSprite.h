/* Runtime dump - SKButtonNodeSprite
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKButtonNodeSprite : SKSpriteNode
{
    NSObject<SKButtonNodeSpriteDelegate> * _delegate;
    SKAction * _downAction;
    SKAction * _upAction;
    id _downBlock;
    id _upBlock;
    id _upInsideBlock;
    int _touches;
}

@property (weak, nonatomic) NSObject<SKButtonNodeSpriteDelegate> * delegate;
@property (retain, nonatomic) SKAction * downAction;
@property (retain, nonatomic) SKAction * upAction;

+ (SKButtonNodeSprite *)buttonWithFontNamed:(id)arg0;

- (void)setDownAction:(SKAction *)arg0;
- (void)setUpAction:(SKAction *)arg0;
- (void)touchBegan:(unsigned int)arg0 location:(struct CGPoint)arg1;
- (void)touchEnded:(unsigned int)arg0 location:(struct CGPoint)arg1;
- (void)touchMoved:(unsigned int)arg0 location:(struct CGPoint)arg1;
- (void)onTouchUpInside:(id)arg0;
- (void)onTouchUp:(id)arg0;
- (void)onTouchDownInside:(id)arg0;
- (SKAction *)downAction;
- (SKAction *)upAction;
- (SKButtonNodeSprite *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(NSObject<SKButtonNodeSpriteDelegate> *)arg0;
- (SKButtonNodeSprite *)init;
- (NSObject<SKButtonNodeSpriteDelegate> *)delegate;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (SKButtonNodeSprite *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;

@end
