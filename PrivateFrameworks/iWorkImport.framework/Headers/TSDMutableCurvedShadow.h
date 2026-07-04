/* Runtime dump - TSDMutableCurvedShadow
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableCurvedShadow : TSDCurvedShadow

@property (nonatomic) float curve;
@property (nonatomic) float offset;
@property (nonatomic) float angle;
@property (nonatomic) struct CGColor * color;
@property (nonatomic) float radius;
@property (nonatomic) float opacity;
@property (nonatomic) char enabled;
@property (copy, nonatomic) TSUColor * TSUColor;

- (void)setTSUColor:(UIColor *)arg0;
- (void)setCurve:(float)arg0;
- (void)setOpacity:(float)arg0;
- (void)setOffset:(float)arg0;
- (void)setColor:(struct CGColor *)arg0;
- (void)setAngle:(float)arg0;
- (void)setRadius:(float)arg0;

@end
