/* Runtime dump - TSCH3DGenericAxisLabelPositioner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGenericAxisLabelPositioner : NSObject <TSCH3DAxisLabelPositioner>
{
    struct tvec2<float> mRange;
    unsigned int mAxis;
    float mOffset;
    unsigned int mAlignment;
}

+ (NSObject *)horizontalWithRange:(struct tvec2<float> *)arg0;
+ (NSObject *)verticalWithRange:(struct tvec2<float> *)arg0;
+ (NSObject *)horizontalWithRange:(struct tvec2<float> *)arg0 offset:(float)arg1;
+ (NSObject *)verticalWithRange:(struct tvec2<float> *)arg0 offset:(float)arg1;
+ (char)vertical;
+ (char)horizontal;

- (unsigned int)alignmentForChartDirection:(struct tvec3<float> *)arg0;
- (struct tvec3<float>)positionForValue:(double)arg0 count:(unsigned int)arg1 chartDirection:(struct tvec3<float> *)arg2;
- (float)labelGapForCount:(unsigned int)arg0;
- (TSCH3DGenericAxisLabelPositioner *)initWithAxis:(int)arg0 alignment:(unsigned int)arg1 offset:(float)arg2 range:(struct tvec2<float> *)arg3;
- (TSCH3DGenericAxisLabelPositioner *)init;
- (void).cxx_construct;
- (char)isHorizontal;
- (char)hasOffset;

@end
