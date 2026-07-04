/* Runtime dump - TSCH3DMutableVector
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DMutableVector : TSCH3DVector

@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float z;
@property (nonatomic) float w;

- (void)setValue4:(struct tvec4<float>)arg0;
- (void)setValue3:(struct tvec3<float>)arg0;
- (void)setValue2:(struct tvec2<float>)arg0;
- (void)swapXY;
- (void)setValue:(struct tvec4<float>)arg0;
- (void)setX:(float)arg0;
- (void)setY:(float)arg0;
- (void)setZ:(float)arg0;
- (void)setW:(float)arg0;

@end
