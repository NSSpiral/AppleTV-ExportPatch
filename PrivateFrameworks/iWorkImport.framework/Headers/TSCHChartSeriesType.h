/* Runtime dump - TSCHChartSeriesType
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesType : NSObject
{
    NSArray * mSeriesRendererClasses;
}

+ (TSCHChartSeriesType *)stackedColumn3DSeries;
+ (TSCHChartSeriesType *)stackedBar3DSeries;
+ (TSCHChartSeriesType *)pie3DSeries;
+ (TSCHChartSeriesType *)mixedLineSeries;
+ (TSCHChartSeriesType *)mixedAreaSeries;
+ (TSCHChartSeriesType *)mixedColumnSeries;
+ (TSCHChartSeriesType *)scatterSeries;
+ (TSCHChartSeriesType *)bubbleSeries;
+ (Class)sceneObjectClass;
+ (TSCHChartSeriesType *)pieSeries;
+ (TSCHChartSeriesType *)columnSeries;
+ (TSCHChartSeriesType *)barSeries;
+ (TSCHChartSeriesType *)lineSeries;
+ (TSCHChartSeriesType *)areaSeries;
+ (TSCHChartSeriesType *)stackedColumnSeries;
+ (TSCHChartSeriesType *)stackedBarSeries;
+ (TSCHChartSeriesType *)stackedAreaSeries;
+ (TSCHChartSeriesType *)column3DSeries;
+ (TSCHChartSeriesType *)line3DSeries;
+ (TSCHChartSeriesType *)area3DSeries;
+ (TSCHChartSeriesType *)stackedArea3DSeries;
+ (TSCHChartSeriesType *)bar3DSeries;
+ (NSString *)inspectorDefaultLocalizedValueLabelsTabName;
+ (NSString *)inspectorDefaultLocalizedValueLabelsDisclosureTitle;
+ (NSDictionary *)expandProperties:(NSDictionary *)arg0;
+ (NSArray *)styleArchTypes;
+ (TSCHChartSeriesType *)allocWithZone:(struct _NSZone *)arg0;
+ (TSCHChartSeriesType *)_singletonAlloc;

- (NSObject *)elementBuilder;
- (char)useInBarGapCalculations;
- (unsigned int)valueDimensions;
- (Class)sceneObjectClass;
- (NSArray *)seriesRendererClasses;
- (id)resetSeriesStorage:(id)arg0 forSeries:(CHDPieSeries *)arg1;
- (char)supportsValueLabelsAxisOption;
- (id)axisTypesForValueLabels;
- (char)supportsValueLabelsSeriesName;
- (NSDictionary *)genericToSpecificPropertyMap;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg0;
- (id)legendFillForSeries:(id)arg0;
- (char)supportsSeriesFill;
- (char)supportsFillSetFill;
- (char)supportsSymbolDrawing;
- (id)p_supportedSymbolsIfSymbolsSupported;
- (id)p_axisForSeries:(id)arg0 isCategory:(char)arg1;
- (int)fillSetFillProperty;
- (char)supportsSetGap;
- (char)supportsBarGap;
- (NSArray *)legalChartLabelPositions;
- (NSObject *)userInterfaceNameForLabelPosition:(NSObject *)arg0;
- (unsigned int)adjustLabelPosition:(unsigned int)arg0 forAxisValue:(double)arg1 intercept:(double)arg2;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg0 forSeries:(CHDPieSeries *)arg1;
- (int)legendBadgeType;
- (id)legendStrokeForSeries:(id)arg0;
- (id)propertiesForReferenceColors;
- (id)cdeFillForSeries:(id)arg0 size:(struct CGSize)arg1;
- (char)supportsSeriesGradientFill;
- (char)supportsSeries3DFill;
- (char)supportsSeriesStroke;
- (char)supportsSymbolTypeEditing;
- (id)supportedSymbols;
- (char)supportsShadowOffset;
- (char)supportsSymbolFillForSymbolType:(int)arg0;
- (char)supportsLineTypeNone;
- (char)supportsLineConnectionStyle;
- (char)chunkedBuildsIncludeInterceptValues;
- (double)beginValueForSeries:(unsigned int)arg0 index:(unsigned int)arg1 unitSpaceIntercept:(double)arg2 relativelyPositive:(char)arg3 valueAxis:(TSCHChartValueAxis *)arg4;
- (double)beginDataValueForSeries:(id)arg0 groupIndex:(unsigned int)arg1 valueAxisID:(NSObject *)arg2;
- (unsigned int)seriesIndexForDrawing:(id)arg0;
- (unsigned int)numberOfSeriesForCalculatingBarWidth:(unsigned int)arg0;
- (char)supportsValueLabels;
- (id)valueAxisForSeries:(id)arg0;
- (id)coordinateAxisForSeries:(id)arg0;
- (NSString *)userInterfaceName;
- (int)defaultSymbolType;
- (NSArray *)supportedValueLabelsAxisCombinations;
- (int)specificFillSetFillProperty;
- (NSString *)inspectorLocalizedValueLabelsTabName;
- (NSString *)inspectorLocalizedValueLabelsDisclosureTitle;
- (char)canUseEstimatedValueLabelsDrawingRect;
- (char)floatValueForLabelExplosion:(float *)arg0 series:(struct Transform * *)arg1;
- (TSCHChartSeriesType *)retain;
- (void)release;
- (void)dealloc;
- (TSCHChartSeriesType *)init;
- (TSCHChartSeriesType *)autorelease;
- (unsigned int)retainCount;
- (TSCHChartSeriesType *)copyWithZone:(struct _NSZone *)arg0;
- (char)isVertical;

@end
