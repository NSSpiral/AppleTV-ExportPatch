/* Runtime dump - TSCH3DAxisLabelEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator
{
    TSCHChartAxis * mAxis;
    TSCH3DAxisLabelKind * mKind;
}

@property (readonly, nonatomic) TSCH3DAxisLabelKind * kind;

+ (TSCH3DAxisLabelEnumerator *)enumeratorWithAxis:(id)arg0 kind:(TSCH3DAxisLabelKind *)arg1;

- (char)shouldRender;
- (NSArray *)stringForLabelResources:(NSArray *)arg0;
- (TSCH3DAxisLabelEnumerator *)initWithAxis:(id)arg0 kind:(TSCH3DAxisLabelKind *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)string;
- (void)update;
- (TSCH3DAxisLabelKind *)kind;
- (int)labelPosition;

@end
