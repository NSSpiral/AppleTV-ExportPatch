/* Runtime dump - TSDMutableBrushStroke
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableBrushStroke : TSDBrushStroke

@property (copy, nonatomic) TSUColor * color;
@property (nonatomic) float width;
@property (nonatomic) float actualWidth;
@property (nonatomic) int cap;
@property (nonatomic) int join;
@property (nonatomic) float miterLimit;
@property (copy, nonatomic) TSDStrokePattern * pattern;
@property (copy, nonatomic) NSString * strokeName;

- (void)setPropertiesFromStroke:(id)arg0;
- (void)setPatternPropertiesFromStroke:(id)arg0;
- (TSDMutableBrushStroke *)copyWithZone:(struct _NSZone *)arg0;

@end
