/* Runtime dump - TSDMutableColorFill
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableColorFill : TSDColorFill <NSCopying>

@property (copy, nonatomic) TSUColor * color;
@property (nonatomic) float opacity;
@property (nonatomic) float hue;
@property (nonatomic) float saturation;
@property (nonatomic) float brightness;

- (void)setHue:(float)arg0;
- (void)setSaturation:(float)arg0;
- (TSDMutableColorFill *)copyWithZone:(struct _NSZone *)arg0;
- (void)setOpacity:(float)arg0;
- (void)setColor:(TSUColor *)arg0;
- (void)setBrightness:(float)arg0;

@end
