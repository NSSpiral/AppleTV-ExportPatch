/* Runtime dump - SKLabelNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKLabelNode : SKNode
{
    float _fontSize;
    struct ? _fontColor;
    NSString * _fontName;
    NSString * _text;
    SKBitmapFont * _bmf;
    NSMutableArray * _textSprites;
    UIColor * _labelColor;
    float _labelColorBlend;
    int _labelBlendMode;
    SKSpriteNode * _textSprite;
    int _horizontalAlignmentMode;
    int _verticalAlignmentMode;
    struct CGRect _textRect;
}

@property (nonatomic) int verticalAlignmentMode;
@property (nonatomic) int horizontalAlignmentMode;
@property (copy, nonatomic) NSString * fontName;
@property (copy, nonatomic) NSString * text;
@property (nonatomic) float fontSize;
@property (retain, nonatomic) UIColor * fontColor;
@property (nonatomic) float colorBlendFactor;
@property (retain, nonatomic) UIColor * color;
@property (nonatomic) int blendMode;

+ (SKLabelNode *)labelNodeWithFontNamed:(id)arg0;
+ (SKLabelNode *)labelNodeWithText:(NSString *)arg0;
+ (SKLabelNode *)_labelNodeWithFontNamed:(id)arg0;
+ (NSObject *)_labelNodeWithFontTexture:(NSObject *)arg0 fontDataString:(NSString *)arg1;

- (NSObject *)nodeAtPoint:(struct CGPoint)arg0 recursive:(char)arg1;
- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (float)colorBlendFactor;
- (void)setColorBlendFactor:(float)arg0;
- (char)isEqualToNode:(NSObject *)arg0;
- (void)_initialize;
- (void)_scaleFactorChangedFrom:(float)arg0 to:(float)arg1;
- (void)_flippedChangedFrom:(char)arg0 to:(char)arg1;
- (NSObject *)nodesAtPoint:(struct CGPoint)arg0;
- (NSObject *)childrenInRect:(struct CGRect)arg0;
- (id)_getTextSprites;
- (void)createSpritesForText;
- (int)verticalAlignmentMode;
- (int)horizontalAlignmentMode;
- (SKLabelNode *)initWithFontNamed:(id)arg0;
- (void)setHorizontalAlignmentMode:(int)arg0;
- (void)setVerticalAlignmentMode:(int)arg0;
- (void)createBitmapSpritesForText;
- (SKLabelNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKLabelNode *)init;
- (SKLabelNode *)copy;
- (struct CGRect)frame;
- (NSString *)description;
- (SKLabelNode *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (UIColor *)color;
- (NSString *)fontName;
- (void)setColor:(UIColor *)arg0;
- (void)setFontSize:(float)arg0;
- (void).cxx_construct;
- (void)setFontName:(NSString *)arg0;
- (void).cxx_destruct;
- (float)fontSize;
- (UIColor *)fontColor;
- (void)setFontColor:(UIColor *)arg0;

@end
