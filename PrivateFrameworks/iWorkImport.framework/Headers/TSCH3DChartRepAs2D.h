/* Runtime dump - TSCH3DChartRepAs2D
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartRepAs2D : TSCHChartRep
{
    TSCHChartRep * m2DRep;
}

- (TSCH3DChartRepAs2D *)initWithLayout:(TSDLayout *)arg0 canvas:(TSDCanvas *)arg1;
- (void)p_create2DRep;
- (void)p_convert3DFillFromSeries:(id)arg0 toSeries:(CHDPieSeries *)arg1;
- (NSDictionary *)p_layoutFrom3DInfo:(NSDictionary *)arg0 layout3D:(id)arg1;
- (void)p_update2DLayout;
- (void)renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect)arg1;
- (void)layoutInRootChangedFrom:(NSObject *)arg0 to:(NSObject *)arg1 translatedOnly:(char)arg2;
- (void)dealloc;
- (void)drawInContext:(struct CGContext *)arg0;

@end
