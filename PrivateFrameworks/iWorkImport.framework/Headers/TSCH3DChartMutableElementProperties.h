/* Runtime dump - TSCH3DChartMutableElementProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartMutableElementProperties : TSCH3DChartElementProperties
{
    TSCH3DArray2D * mLightingModels;
    TSCH3DLabelResources * mLabels;
    TSCH3DTransform * mChartTransform;
    TSCH3DTransform * mElementsTransform;
}

@property (retain, nonatomic) TSCH3DArray2D * lightingModels;
@property (retain, nonatomic) TSCH3DLabelResources * labels;
@property (retain, nonatomic) TSCH3DTransform * chartTransform;
@property (retain, nonatomic) TSCH3DTransform * elementsTransform;

- (void)setChartTransform:(TSCH3DTransform *)arg0;
- (TSCH3DTransform *)chartTransform;
- (id)renderingLightingModelForSeries:(id)arg0;
- (TSCH3DTransform *)elementsTransform;
- (TSCH3DArray2D *)lightingModels;
- (void)setLightingModels:(TSCH3DArray2D *)arg0;
- (void)setElementsTransform:(TSCH3DTransform *)arg0;
- (void)dealloc;
- (TSCH3DChartMutableElementProperties *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLabels:(TSCH3DLabelResources *)arg0;
- (TSCH3DLabelResources *)labels;

@end
