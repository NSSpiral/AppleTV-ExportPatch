/* Runtime dump - TSDMutableGradientStop
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableGradientStop : TSDGradientStop

@property (copy, nonatomic) TSUColor * color;
@property (nonatomic) float fraction;
@property (nonatomic) float inflection;

- (void)setFraction:(float)arg0;
- (void)setInflection:(float)arg0;
- (void)setColor:(TSUColor *)arg0;

@end
