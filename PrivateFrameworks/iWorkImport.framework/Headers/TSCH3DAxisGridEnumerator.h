/* Runtime dump - TSCH3DAxisGridEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DAxisGridEnumerator : TSCH3DValueEnumerator
{
    TSCHChartAxis * mAxis;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) TSCHChartAxis * axis;

+ (TSCH3DAxisGridEnumerator *)enumeratorWithAxis:(TSCHChartAxis *)arg0;

- (TSCH3DAxisGridEnumerator *)initWithAxis:(TSCHChartAxis *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (int)type;
- (struct AxisGridLocation)position;
- (TSCHChartAxis *)axis;
- (void)update;

@end
