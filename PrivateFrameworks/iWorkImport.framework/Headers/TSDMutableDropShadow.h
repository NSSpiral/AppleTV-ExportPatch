/* Runtime dump - TSDMutableDropShadow
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableDropShadow : TSDDropShadow

@property (nonatomic) float angle;
@property (nonatomic) float offset;
@property (nonatomic) float radius;
@property (nonatomic) float opacity;
@property (nonatomic) struct CGColor * color;
@property (nonatomic) char enabled;

- (void)setTSUColor:(UIColor *)arg0;
- (void)setEnabled:(char)arg0;
- (TSDMutableDropShadow *)copyWithZone:(struct _NSZone *)arg0;
- (void)setOpacity:(float)arg0;
- (void)setOffset:(float)arg0;
- (void)setColor:(struct CGColor *)arg0;
- (void)setAngle:(float)arg0;
- (void)setRadius:(float)arg0;

@end
