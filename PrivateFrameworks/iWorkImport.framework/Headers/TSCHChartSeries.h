/* Runtime dump - TSCHChartSeries
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeries : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning>
{
    TSCHChartModel * mChartModel;
    unsigned int mSeriesIndex;
    TSCHChartSeriesType * mSeriesType;
    TSUPointerKeyDictionary * mAxisTable;
    TSCHChartGridAdapter * mNameAdapter;
    unsigned int mBarGapIndex;
    <TSCHStyleActAlike> * mStyle;
    <TSCHStyleActAlike> * mNonStyle;
    char mStyleIsPrivate;
    TSCHTrendLineData * mTrendLineData;
    TSCHErrorBarData * mErrorBarData;
    NSObject<TSCHUnretainedParent> * mSeriesStorage;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) TSCHChartModel * model;
@property (readonly, nonatomic) unsigned int seriesIndex;
@property (nonatomic) TSCHChartSeriesType * seriesType;
@property (readonly, nonatomic) TSCHTrendLineData * trendLineData;
@property (readonly, nonatomic) char showTrendLineLegendText;
@property (readonly, nonatomic) NSString * trendLineLegendText;
@property (readonly, nonatomic) TSCHErrorBarData * errorBarData;
@property (readonly, nonatomic) NSObject<TSCHUnretainedParent> * seriesStorage;
@property (retain, nonatomic) NSString * name;
@property (nonatomic) unsigned int barGapIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSCHChartSeries *)defaultNumberFormat;
+ (TSCHChartSeries *)computedFillOrStroke:(id)arg0 forSeriesIndex:(unsigned int)arg1 numberOfThemeSeries:(unsigned int)arg2;
+ (NSDictionary *)computableProperties;
+ (NSString *)stackedPercentageNumberFormat;
+ (unsigned char)styleOwnerPathType;

- (NSObject *)objectValueForProperty:(int)arg0;
- (int)intValueForProperty:(int)arg0 defaultValue:(int)arg1;
- (NSDictionary *)chartInfo;
- (void)clearParent;
- (NSObject *)g_genericToDefaultPropertyMap;
- (NSObject *)g_operationPropertyNameForGenericProperty:(int)arg0;
- (int)defaultPropertyForGeneric:(int)arg0;
- (NSObject *)p_genericToDefaultPropertyMap;
- (NSDictionary *)drawableInfo;
- (int)specificPropertyForGeneric:(int)arg0;
- (char)hasIntValueForProperty:(int)arg0 value:(int *)arg1;
- (char)hasFloatValueForProperty:(int)arg0 value:(float *)arg1;
- (char)hasObjectValueForProperty:(int)arg0 value:(id *)arg1;
- (NSObject *)operationPropertyNameFromGenericProperty:(int)arg0;
- (id)nonstyle;
- (id)swapTuplesForMutations:(id)arg0 forImport:(char)arg1;
- (id)swapTuplesForParagraphStyleMutations:(id)arg0 forReferencingProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg0 defaultValue:(float)arg1;
- (TSCHChartSeriesType *)seriesType;
- (float)effectiveLabelExplosion;
- (char)isMultiData;
- (int)gridValueType;
- (char)hasCustomFormatForGridValueType:(int)arg0;
- (NSObject *)customFormatForGridValueType:(int)arg0;
- (NSObject *)axisIDForAxisType:(int)arg0;
- (NSObject *)multiDataValueEnumeratorForAxisID:(NSObject *)arg0;
- (unsigned int)multiDataSetIndex;
- (id)valueForAxis:(TSCHChartValueAxis *)arg0 index:(unsigned int)arg1 multiDataSetIndex:(unsigned int)arg2;
- (id)valueForAxis:(TSCHChartValueAxis *)arg0 index:(unsigned int)arg1;
- (id *)valuesForAxis:(id)arg0 indexes:(struct _NSRange)arg1;
- (int)adjustedNumberFormatType;
- (NSObject *)axisForAxisType:(int)arg0;
- (TSCHChartSeries *)initWithChartModel:(NSObject *)arg0 index:(unsigned int)arg1;
- (void)modelSyncSetStyle:(NSObject *)arg0;
- (void)modelSyncSetNonStyle:(NSObject *)arg0;
- (void)setSeriesType:(TSCHChartSeriesType *)arg0;
- (void)setBarGapIndex:(unsigned int)arg0;
- (void)clearAxisIDs;
- (void)setAxisID:(TSCHChartAxisID *)arg0 forAxisType:(int)arg1;
- (void)setGridAdapter:(NSObject *)arg0 forAxisType:(int)arg1;
- (void)setGridAdapterForName:(NSString *)arg0;
- (void)invalidateCacheDataForSynchronization;
- (void)resetSeriesStorage;
- (TSCHTrendLineData *)trendLineData;
- (char)showTrendLineLegendText;
- (NSString *)trendLineLegendText;
- (NSObject *)p_axisStorageForType:(int)arg0 create:(char)arg1;
- (unsigned int)multiDataSetIndexForAxis:(id)arg0;
- (unsigned int)multiDataSetIndexForAxisID:(NSObject *)arg0;
- (NSObject *)valueForAxisID:(NSObject *)arg0 index:(unsigned int)arg1 multiDataSetIndex:(unsigned int)arg2;
- (id *)valuesForAxis:(id)arg0 indexes:(struct _NSRange)arg1 multiDataSetIndex:(unsigned int)arg2;
- (void)setSeriesStorage:(NSObject<TSCHUnretainedParent> *)arg0;
- (NSString *)axisTypesForValueLabelString;
- (NSObject *)p_seriesNonStyleOrDefaultNonStyle;
- (char)p_seriesIndexWithinThemeStyleCount;
- (id)p_representativeThemeSeries;
- (void)p_generateComputedProperty:(int)arg0 objectValue:(id *)arg1 intValue:(int *)arg2 floatValue:(float *)arg3;
- (TSCHErrorBarData *)errorBarData;
- (NSObject *)valueForAxisID:(NSObject *)arg0 index:(unsigned int)arg1;
- (void)setValue:(NSObject *)arg0 forAxisID:(NSObject *)arg1 index:(unsigned int)arg2;
- (char)renderSeriesForClass:(Class)arg0;
- (NSObject *)formattedValueLabelStringForValueIndex:(unsigned int)arg0;
- (NSObject<TSCHUnretainedParent> *)seriesStorage;
- (unsigned int)barGapIndex;
- (char)floatValueForLabelExplosion:(float *)arg0;
- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSDictionary *)style;
- (NSString *)context;
- (TSCHChartModel *)model;
- (void *)valueForProperty:(int)arg0;
- (unsigned int)numberOfValues;
- (NSDictionary *)defaultProperties;
- (unsigned int)seriesIndex;

@end
