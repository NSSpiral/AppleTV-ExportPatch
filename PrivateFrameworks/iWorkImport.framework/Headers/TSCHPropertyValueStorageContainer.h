/* Runtime dump - TSCHPropertyValueStorageContainer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyValueStorageContainer : NSObject
{
    <TSCHStyleActAlike> * mChartStyle;
    <TSCHStyleActAlike> * mChartNonStyle;
    <TSCHStyleActAlike> * mLegendStyle;
    <TSCHStyleActAlike> * mLegendNonStyle;
    NSMutableArray * mValueAxisStyles;
    NSMutableArray * mValueAxisNonStyles;
    NSMutableArray * mCategoryAxisStyles;
    NSMutableArray * mCategoryAxisNonStyles;
    NSMutableArray * mSeriesThemeStyles;
    NSMutableArray * mSeriesPrivateStyles;
    NSMutableArray * mSeriesNonStyles;
    NSMutableArray * mParagraphStyles;
    <TSCHStyleActAlike> * mReferenceLineThemeStyle;
    NSMutableDictionary * mReferenceLineStyles;
    NSMutableDictionary * mReferenceLineNonStyles;
}

@property (retain, nonatomic) <TSCHStyleActAlike> * p_chartStyle;
@property (retain, nonatomic) <TSCHStyleActAlike> * p_chartNonStyle;
@property (retain, nonatomic) <TSCHStyleActAlike> * p_legendStyle;
@property (retain, nonatomic) <TSCHStyleActAlike> * p_legendNonStyle;
@property (retain, nonatomic) NSMutableArray * p_mutableValueAxisStyles;
@property (retain, nonatomic) NSMutableArray * p_mutableValueAxisNonStyles;
@property (retain, nonatomic) NSMutableArray * p_mutableCategoryAxisStyles;
@property (retain, nonatomic) NSMutableArray * p_mutableCategoryAxisNonStyles;
@property (retain, nonatomic) NSMutableArray * p_mutableSeriesThemeStyles;
@property (retain, nonatomic) NSMutableArray * p_mutableSeriesPrivateStyles;
@property (retain, nonatomic) NSMutableArray * p_mutableSeriesNonStyles;
@property (retain, nonatomic) NSMutableArray * p_mutableParagraphStyles;
@property (retain, nonatomic) NSMutableDictionary * p_mutableRefLineStyles;
@property (retain, nonatomic) NSMutableDictionary * p_mutableRefLineNonStyles;
@property (copy, nonatomic) NSArray * p_valueAxisStyles;
@property (copy, nonatomic) NSArray * p_valueAxisNonStyles;
@property (copy, nonatomic) NSArray * p_categoryAxisStyles;
@property (copy, nonatomic) NSArray * p_categoryAxisNonStyles;
@property (copy, nonatomic) NSArray * p_seriesThemeStyles;
@property (copy, nonatomic) NSArray * p_seriesPrivateStyles;
@property (copy, nonatomic) NSArray * p_seriesNonStyles;
@property (copy, nonatomic) NSArray * p_paragraphStyles;
@property (retain, nonatomic) <TSCHStyleActAlike> * p_referenceLineThemeStyle;
@property (copy, nonatomic) NSDictionary * p_referenceLineStyles;
@property (copy, nonatomic) NSDictionary * p_referenceLineNonStyles;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (void)saveToArchive:(struct PropertyValueStorageContainerArchive *)arg0 archiver:(struct /* ? */)arg1;
- (void)loadFromArchive:(struct PropertyValueStorageContainerArchive *)arg0 unarchiver:(struct PropertyValueStorageContainerArchive)arg1;
- (<TSCHStyleActAlike> *)p_chartStyle;
- (void)p_setChartStyle:(NSObject *)arg0;
- (<TSCHStyleActAlike> *)p_legendStyle;
- (void)p_setLegendStyle:(NSObject *)arg0;
- (NSMutableArray *)p_mutableValueAxisStyles;
- (void)p_setMutableValueAxisStyles:(id)arg0;
- (NSMutableArray *)p_mutableCategoryAxisStyles;
- (void)p_setMutableCategoryAxisStyles:(id)arg0;
- (NSMutableArray *)p_mutableSeriesThemeStyles;
- (void)p_setMutableSeriesThemeStyles:(id)arg0;
- (NSMutableArray *)p_mutableSeriesPrivateStyles;
- (void)p_setMutableSeriesPrivateStyles:(id)arg0;
- (NSMutableArray *)p_mutableParagraphStyles;
- (void)p_setMutableParagraphStyles:(id)arg0;
- (NSMutableDictionary *)p_mutableRefLineStyles;
- (void)p_setMutableRefLineStyles:(id)arg0;
- (<TSCHStyleActAlike> *)p_referenceLineThemeStyle;
- (void)p_setReferenceLineThemeStyle:(NSObject *)arg0;
- (NSMutableArray *)p_mutableValueAxisNonStyles;
- (void)p_setMutableValueAxisNonStyles:(id)arg0;
- (NSMutableArray *)p_mutableCategoryAxisNonStyles;
- (void)p_setMutableCategoryAxisNonStyles:(id)arg0;
- (NSMutableArray *)p_mutableSeriesNonStyles;
- (void)p_setMutableSeriesNonStyles:(id)arg0;
- (NSMutableDictionary *)p_mutableRefLineNonStyles;
- (void)p_setMutableRefLineNonStyles:(id)arg0;
- (NSArray *)p_valueAxisStyles;
- (NSArray *)p_valueAxisNonStyles;
- (NSArray *)p_categoryAxisStyles;
- (NSArray *)p_categoryAxisNonStyles;
- (NSArray *)p_seriesThemeStyles;
- (NSArray *)p_seriesPrivateStyles;
- (NSArray *)p_seriesNonStyles;
- (NSArray *)p_paragraphStyles;
- (NSDictionary *)p_referenceLineStyles;
- (NSDictionary *)p_referenceLineNonStyles;
- (void)p_setChartNonStyle:(NSObject *)arg0;
- (void)p_setLegendNonStyle:(NSObject *)arg0;
- (<TSCHStyleActAlike> *)p_chartNonStyle;
- (<TSCHStyleActAlike> *)p_legendNonStyle;
- (void)p_setValueAxisStyles:(id)arg0;
- (void)p_setValueAxisNonStyles:(id)arg0;
- (void)p_setCategoryAxisStyles:(id)arg0;
- (void)p_setCategoryAxisNonStyles:(id)arg0;
- (void)p_setSeriesThemeStyles:(id)arg0;
- (void)p_setSeriesPrivateStyles:(id)arg0;
- (void)p_setSeriesNonStyles:(id)arg0;
- (void)p_setParagraphStyles:(id)arg0;
- (void)p_setReferenceLineStyles:(id)arg0;
- (void)p_setReferenceLineNonStyles:(id)arg0;
- (void)dealloc;

@end
