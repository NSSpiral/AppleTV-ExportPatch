/* Runtime dump - TSDMutableContactShadow
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableContactShadow : TSDContactShadow

@property (nonatomic) float height;
@property (nonatomic) float perspective;
@property (nonatomic) float offset;
@property (nonatomic) struct CGColor * color;
@property (nonatomic) float radius;
@property (nonatomic) char enabled;
@property (copy, nonatomic) TSUColor * TSUColor;

- (void)setTSUColor:(UIColor *)arg0;
- (void)setOpacity:(float)arg0;
- (void)setOffset:(float)arg0;
- (void)setColor:(struct CGColor *)arg0;
- (void)setHeight:(float)arg0;
- (void)setRadius:(float)arg0;
- (void)setPerspective:(float)arg0;

@end
