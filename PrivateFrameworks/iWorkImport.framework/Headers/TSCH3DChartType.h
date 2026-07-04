/* Runtime dump - TSCH3DChartType
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartType : TSCH2DChartType

+ (struct tvec3<float>)adjustedScaleForInfoChartScale:(struct tvec3<float> *)arg0 chartType:(struct tvec3<float>)arg1 barShape:(int)arg2;
+ (TSCH3DChartType *)allAnimationFilters;

- (<TSCH3DAxisLabelPositioner> *)valueLabelPositioner;
- (<TSCH3DAxisLabelPositioner> *)categoryLabelPositioner;
- (char)supportsReferenceLines;
- (Class)repClass;
- (NSDictionary *)sceneWithChartInfo:(NSDictionary *)arg0 layoutSettings:(struct ?)arg1;
- (Class)stageClass;
- (float)sageMaxDepthRatio;
- (float)maxDepthRatio;
- (unsigned int)depthRatioDimension;
- (char)supportsSeriesFill;
- (char)supportsSeriesStroke;
- (char)supportsShadowOffset;
- (Class)presetImagerClass;
- (char)supportsBorderFrame;
- (char)supportsGroupedShadows;
- (char)supportsBackgroundFill;
- (char)supportsTrendLines;
- (char)supportsErrorBars;
- (char)supportsCategoryAxisMinorTickmarks;
- (char)supportsConnectingLines;
- (char)supportsBubbleOptions;
- (id)animationFiltersWithDefaultFilters:(id)arg0;
- (NSArray *)renderers;
- (Class)chartLayoutItemClass;
- (Class)chartLayoutClass;
- (Class)layoutClass;
- (Class)sageGeometeryHelperClass;
- (id)animationFilters;
- (char)supportsMinorGridlines;
- (char)supportsAxisLine;
- (int)labelOrientation;
- (char)isHomogeneous;
- (char)supportsBevels;
- (char)supportsColumnShape;
- (NSString *)columnShapeUIName;
- (NSObject *)animationDeliveryStylesForFilter:(NSObject *)arg0;
- (unsigned int)presentationDimension;
- (int)chartBodyBoundsDefinition;
- (struct CGSize)minimumChartBodySize;
- (char)approximatesTitleAccommodationUsingLegendSize;
- (char)supportsSeriesShadow;
- (char)supportsValueAxisLabelsPosition;
- (char)supportsAxisLabelsOrientation;
- (char)supportsTickmarks;
- (char)supportsIncrementalResize;
- (struct tvec3<float>)adjustedScaleForInfoChartScale:(struct tvec3<float> *)arg0 barShape:(struct tvec3<float>)arg1;
- (char)supportsInterSetDepthGap;
- (float)minDepthRatio;
- (char)needsRefinementForInwardLayout;
- (char)layoutFrameShouldEncloseInfoGeometry;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;

@end
