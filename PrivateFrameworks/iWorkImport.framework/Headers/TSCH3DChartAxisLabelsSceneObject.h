/* Runtime dump - TSCH3DChartAxisLabelsSceneObject
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartAxisLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject
{
    <TSCH3DAxisLabelPositioner><NSObject> * mValueLabelPositioner;
    <TSCH3DAxisLabelPositioner><NSObject> * mCategoryLabelPositioner;
}

@property (retain) <TSCH3DAxisLabelPositioner> * valueLabelPositioner;
@property (retain) <TSCH3DAxisLabelPositioner> * categoryLabelPositioner;

+ (unsigned int)valueAxisLabelAlignmentForScene:(NSObject *)arg0;
+ (struct TSCH3DScenePart)partWithEnumerator:(NSEnumerator *)arg0 chartInfo:(NSDictionary *)arg1 styleIndex:(unsigned int)arg2;
+ (void)setSelectionPath:(TSKSelectionPath *)arg0 selectionMode:(int)arg1 forScene:(NSObject *)arg2;
+ (void)cacheValueAxisLabelAlignmentForScene:(NSObject *)arg0;

- (<TSCH3DAxisLabelPositioner> *)valueLabelPositioner;
- (unsigned int)alignmentForPositioner:(id)arg0 scene:(NSObject *)arg1 enumerator:(NSEnumerator *)arg2 returningDirection:(struct tvec3<float> *)arg3;
- (struct tvec3<float>)labelPositionDirectionForScene:(NSObject *)arg0 enumerator:(NSEnumerator *)arg1;
- (struct tvec3<float>)p_valueLabelsOffsetFromAccessor:(struct ChartScenePropertyAccessor *)arg0;
- (void)p_renderLabels:(id)arg0 labelType:(int)arg1 part:(struct TSCH3DScenePart)arg2 positioner:(TPDrawableAttachmentPositioner *)arg3 offset:(struct tvec3<float> *)arg4 offset2DBlock:(struct tvec3<float>)arg5 strideBlock:(id /* block */)arg6 skipFirst:(/* block */ id)arg7 showLast:(id)arg8;
- (<TSCH3DAxisLabelPositioner> *)categoryLabelPositioner;
- (struct tvec3<float>)p_categoryLabelsOffsetFromAccessor:(struct ChartScenePropertyAccessor *)arg0;
- (int)p_categoryStride:(id)arg0;
- (void)p_setOffset:(struct tvec3<float> *)arg0 forLabelType:(struct tvec3<float>)arg1 pipeline:(int)arg2 part:(id)arg3 positioner:(struct TSCH3DScenePart)arg4;
- (void)postRenderBounds:(id)arg0;
- (void)p_renderValueLabels:(id)arg0;
- (void)p_renderCategoryLabels:(id)arg0;
- (NSDictionary *)selectionPathForInfo:(NSDictionary *)arg0 axis:(id)arg1 selectionPathLabelIndex:(unsigned int)arg2;
- (void)renderLabels:(id)arg0;
- (void)renderAnnotatedLabels:(id)arg0;
- (NSDictionary *)selectionPathForInfo:(NSDictionary *)arg0 scene:(NSObject *)arg1 pickedPoint:(TSCH3DPickedPoint *)arg2;
- (id)convertSelectionPathTo3D:(id)arg0 path:(NSString *)arg1;
- (int)knobsModeForLabelType:(int)arg0 scene:(NSObject *)arg1;
- (char)canRenderSelectionPath:(NSString *)arg0 forInfo:(NSDictionary *)arg1;
- (char)canEditTextForSelectionPath:(NSString *)arg0 forInfo:(NSDictionary *)arg1;
- (NSString *)renderInfoForSelectionPath:(NSString *)arg0 info:(NSDictionary *)arg1;
- (void)setValueLabelPositioner:(<TSCH3DAxisLabelPositioner> *)arg0;
- (void)setCategoryLabelPositioner:(<TSCH3DAxisLabelPositioner> *)arg0;
- (void)dealloc;
- (NSArray *)effects;

@end
