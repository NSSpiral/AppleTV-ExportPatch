/* Runtime dump - TSCHChartFeature
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeature : NSObject <TSCHUnretainedParent>
{
    TSCHChartType * mChartType;
    NSArray * mValueAxisIDs;
    NSArray * mCategoryAxisIDs;
}

@property (readonly, retain, nonatomic) NSArray * valueAxisIDs;
@property (readonly, retain, nonatomic) NSArray * categoryAxisIDs;

- (void)clearParent;
- (<TSCH3DAxisLabelPositioner> *)valueLabelPositioner;
- (<TSCH3DAxisLabelPositioner> *)categoryLabelPositioner;
- (char)supportsSeriesLabels;
- (char)supportsReferenceLines;
- (NSArray *)supportedAxisScales;
- (unsigned int)maxCellsToCheckForGridValueType;
- (Class)stageClass;
- (NSArray *)valueAxisIDs;
- (unsigned int)styleIndexForAxisID:(NSObject *)arg0;
- (Class)valueAxisClassForID:(NSObject *)arg0 scale:(int)arg1;
- (NSArray *)categoryAxisIDs;
- (char)supportsMultipleSeriesTypes;
- (char)requiresYAxisOrdinal;
- (NSString *)defaultDataFileName;
- (float)sageMaxDepthRatio;
- (float)maxDepthRatio;
- (NSDictionary *)genericToSpecificPropertyMap;
- (char)supportsValueLabels;
- (int)stackingSignRule;
- (TSCHChartFeature *)initWithChartType:(NSObject *)arg0;
- (Class)presetImagerClass;
- (NSArray *)supportedSeriesTypes;
- (char)supportsBorderFrame;
- (char)supportsEditingForAxisID:(NSObject *)arg0;
- (char)reverseSingleColumnLegendOrder;
- (char)drawValueLabelsForZero;
- (char)supportsGroupedShadows;
- (char)supportsEditing;
- (char)supportsBackgroundFill;
- (char)supportsReverseChunking;
- (char)supportsTrendLines;
- (char)supportsErrorBars;
- (char)supportsElementSeriesNames;
- (char)supportsLabelExplosion;
- (char)supportsPercentNumberFormatting;
- (char)supportsSymbolOverhang;
- (char)supportsElementChunking;
- (char)supportsCategoryAxisMinorTickmarks;
- (char)supportsCategoryAxisSeriesNames;
- (char)supportsConnectingLines;
- (char)supportsMoreThanOneLiveCategory;
- (char)supportsCategoryLabelsInChartRangeEditor;
- (char)supportsSharedAndSeparateX;
- (char)supportsBubbleOptions;
- (unsigned int)gridOffsetToSeriesForScatterFormat:(int)arg0;
- (int)representativeGridValueAxisType;
- (void)updateTitlesForExportingModel:(NSObject *)arg0 info:(NSDictionary *)arg1;
- (char)supportsShowLabelsInFrontOption;
- (id)filteredStyleOwnersFromStyleOwners:(id)arg0;
- (char)supportsIndividualShadowRendering;
- (int)labelOrientation;
- (char)supportsColumnShape;
- (NSString *)columnShapeUIName;
- (NSDictionary *)initialSceneWithChartInfo:(NSDictionary *)arg0 layoutSettings:(struct ?)arg1;
- (char)supportsInterSetDepthGap;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (void)p_initializeAxisIDs;
- (Class)p_selectAxisClassForScale:(int)arg0 linearClass:(Class)arg1 logClass:(Class)arg2 percentClass:(Class)arg3;
- (void)dealloc;
- (TSCHChartFeature *)init;
- (char)isHorizontal;
- (char)isPie;

@end
