/* Runtime dump - UIKBEdgeEffect
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBEdgeEffect : NSObject <UIKBRenderEffect>
{
    NSString * _colorName;
    unsigned int _edges;
    float _inset;
    float _weight;
    UIKBGradient * _gradient;
    float _opacity;
}

@property (nonatomic) unsigned int edges;
@property (nonatomic) float inset;
@property (retain, nonatomic) UIKBGradient * gradient;
@property (nonatomic) float opacity;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char renderUnder;
@property (readonly, nonatomic) SEL renderSelector;
@property (nonatomic) float weight;

+ (UIColor *)effectWithColor:(UIColor *)arg0 edges:(unsigned int)arg1 inset:(float)arg2 weight:(float)arg3;

- (void)dealloc;
- (void)setInset:(float)arg0;
- (struct CGColor *)CGColor;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setEdges:(unsigned int)arg0;
- (char)isValid;
- (UIKBEdgeEffect *)copyWithZone:(struct _NSZone *)arg0;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (void)setGradient:(UIKBGradient *)arg0;
- (unsigned int)edges;
- (UIKBGradient *)gradient;
- (float)weight;
- (UIKBEdgeEffect *)initWithColor:(UIColor *)arg0 edges:(unsigned int)arg1 inset:(float)arg2 weight:(float)arg3;
- (float)inset;
- (char)renderUnder;
- (SEL)renderSelector;
- (void)setWeight:(float)arg0;

@end
