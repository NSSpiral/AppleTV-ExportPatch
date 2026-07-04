/* Runtime dump - TSCHChartMediator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartMediator : NSObject <TSCHUnretainedParent, NSCopying>
{
    <TSCHNotifyOnModify> * mObjectToNotify;
    TSCHChartInfo * mChartInfo;
    TSUIntToIntDictionary * mRemoteSeriesIndexForGridSeriesIndex;
    TSUIntToIntDictionary * mGridSeriesIndexForRemoteSeriesIndex;
}

@property (nonatomic) TSCHChartInfo * chartInfo;
@property (nonatomic) <TSCHNotifyOnModify> * objectToNotify;
@property (readonly, nonatomic) char isPhantom;
@property (readonly, nonatomic) int direction;

+ (TSCHChartMediator *)propertiesThatInvalidateMediator;

- (void)willModify;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct ChartMediatorArchive *)arg0;
- (TSCHChartInfo *)chartInfo;
- (void)clearParent;
- (NSData *)dataFormatterForAxis:(id)arg0 documentRoot:(struct CGSize)arg1;
- (<TSCHNotifyOnModify> *)objectToNotify;
- (void)setObjectToNotify:(<TSCHNotifyOnModify> *)arg0;
- (TSCHChartMediator *)initWithChartInfo:(TSCHChartInfo *)arg0;
- (void)setChartInfo:(TSCHChartInfo *)arg0;
- (char)isPhantom;
- (void)invalidateAndSynchronizeMediator;
- (void)loadFromArchive:(struct ChartMediatorArchive *)arg0;
- (id)p_errorBarDataForSeries:(unsigned int)arg0 withSpec:(struct ?)arg1 updateType:(int)arg2;
- (void)updateGridWithSpec:(struct ?)arg0;
- (NSString *)commandSetSeriesName:(NSString *)arg0 forSeriesIndex:(unsigned int)arg1;
- (NSObject *)seriesNameFormulaForSeriesIndex:(unsigned int)arg0;
- (id)commandToSetSeriesNameFormula:(id)arg0 seriesIndex:(unsigned int)arg1;
- (NSString *)commandSetCategoryName:(NSString *)arg0 forCategoryIndex:(unsigned int)arg1;
- (id)commandToSetChartGridDirection:(int)arg0 documentRoot:(struct CGSize)arg1;
- (NSData *)dataFormatterForSeries:(id)arg0 index:(unsigned int)arg1 axisType:(int)arg2 documentRoot:(struct CGSize)arg3;
- (id)categoryLabelFormulas;
- (id)commandToChangeCategoryLabelFormulas:(id)arg0;
- (id)commandToSetErrorBarCustomFormula:(id)arg0 seriesIndex:(unsigned int)arg1 dataType:(int)arg2;
- (NSObject *)errorBarCustomFormulaForSeriesIndex:(unsigned int)arg0 dataType:(int)arg1;
- (id)commandToSetSeriesDataFormula:(id)arg0 seriesDimension:(TSCHSeriesDimension *)arg1;
- (id)seriesDataFormulaForSeriesDimension:(id)arg0;
- (NSObject *)commandToSetNewSeriesIndex:(unsigned int)arg0 forSeriesIndex:(unsigned int)arg1;
- (unsigned int)p_remoteSeriesIndexForGridSeriesIndex:(unsigned int)arg0;
- (unsigned int)p_gridSeriesIndexForRemoteSeriesIndex:(unsigned int)arg0;
- (char)preferSeriesToValues;
- (void)dealloc;
- (TSCHChartMediator *)init;
- (TSCHChartMediator *)copyWithZone:(struct _NSZone *)arg0;
- (int)direction;
- (char)isEditing;

@end
