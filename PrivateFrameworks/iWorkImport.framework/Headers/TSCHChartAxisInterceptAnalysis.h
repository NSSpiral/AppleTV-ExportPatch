/* Runtime dump - TSCHChartAxisInterceptAnalysis
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisInterceptAnalysis : NSObject
{
    int _gridValueType;
    double _axisInterceptPosition;
}

@property (nonatomic) double axisInterceptPosition;
@property (nonatomic) int gridValueType;

- (double)axisInterceptPosition;
- (void)setGridValueType:(int)arg0;
- (int)gridValueType;
- (void)setAxisInterceptPosition:(double)arg0;

@end
