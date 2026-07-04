/* Runtime dump - CUIPSDGradient
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradient : NSObject
{
    CUIPSDGradientEvaluator * evaluator;
    float drawingAngle;
    unsigned int gradientStyle;
}

@property (retain) CUIPSDGradientEvaluator * evaluator;
@property float drawingAngle;
@property unsigned int gradientStyle;

+ (NSArray *)getMidpointLocationFromArray:(NSArray *)arg0 atIndex:(int)arg1 withPolicy:(int)arg2;
+ (CUIPSDGradient *)cuiPSDGradientWithColors:(NSArray *)arg0 locations:(id *)arg1 midpointLocations:(id)arg2 angle:(float)arg3 isRadial:(char)arg4;

- (void)dealloc;
- (CUIPSDGradientEvaluator *)evaluator;
- (unsigned int)gradientStyle;
- (float)drawingAngle;
- (CUIPSDGradient *)initWithEvaluator:(CUIPSDGradientEvaluator *)arg0 drawingAngle:(float)arg1 gradientStyle:(unsigned int)arg2;
- (void)setEvaluator:(CUIPSDGradientEvaluator *)arg0;
- (void)setDrawingAngle:(float)arg0;
- (void)setGradientStyle:(unsigned int)arg0;

@end
