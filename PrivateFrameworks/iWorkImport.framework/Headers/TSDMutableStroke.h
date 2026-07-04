/* Runtime dump - TSDMutableStroke
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMutableStroke : TSDStroke

@property (nonatomic) char dontClearBackground;
@property (copy, nonatomic) TSUColor * color;
@property (nonatomic) float width;
@property (nonatomic) float actualWidth;
@property (nonatomic) int cap;
@property (nonatomic) int join;
@property (nonatomic) float miterLimit;
@property (copy, nonatomic) TSDStrokePattern * pattern;

+ (TSDMutableStroke *)emptyStroke;
+ (OADStroke *)stroke;

- (void)setPropertiesFromStroke:(id)arg0;
- (void)setPatternPropertiesFromStroke:(id)arg0;
- (void)setDontClearBackground:(char)arg0;
- (TSDMutableStroke *)copyWithZone:(struct _NSZone *)arg0;

@end
