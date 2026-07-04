/* Runtime dump - TSCHChartStylePreset
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStylePreset : TSPObject <TSPCopying, TSSPreset, TSCHStyleSwapSupporting>
{
    <TSCHStyleActAlike> * mChartStyle;
    <TSCHStyleActAlike> * mLegendStyle;
    NSArray * mValueAxisStyles;
    NSArray * mCategoryAxisStyles;
    NSArray * mSeriesStyles;
    NSArray * mParagraphStyles;
    NSArray * mRefLineStyles;
    struct __CFUUID * mUUID;
    <TSCHStyleActAlike> * mRefLineStyle;
}

@property (readonly, nonatomic) <TSCHStyleActAlike> * chartStyle;
@property (readonly, nonatomic) <TSCHStyleActAlike> * legendStyle;
@property (readonly, nonatomic) NSArray * valueAxisStyles;
@property (readonly, nonatomic) NSArray * categoryAxisStyles;
@property (readonly, nonatomic) NSArray * seriesStyles;
@property (readonly, nonatomic) NSArray * paragraphStyles;
@property (readonly, nonatomic) struct __CFUUID * uuid;
@property (readonly, nonatomic) <TSCHStyleActAlike> * refLineStyle;
@property (readonly, nonatomic) NSString * presetKind;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)needsObjectUUID;
+ (void)upgradeTrendLinesAndErrorBarsForSeriesPresets:(id)arg0 valueAxisPresets:(id)arg1 paragraphPresets:(id)arg2;
+ (void)upgradeFor3DShadowPropertyMigrationFromChartStyle:(NSObject *)arg0 seriesStyles:(NSArray *)arg1;
+ (void)upgradeForTrendLineEquationAndR2LabelsPropertyMigrationFromChartStyle:(NSObject *)arg0 seriesStyles:(NSArray *)arg1;
+ (void)upgradeShadowPropertyForParagraphStyles:(id)arg0;
+ (void)p_replaceProperty:(int)arg0 inStyle:(NSObject *)arg1 withObject:(NSObject *)arg2;
+ (UIColor *)p_getDefaultErrorBarColor:(UIColor *)arg0 valueAxisStyles:(NSArray *)arg1;
+ (UIColor *)p_getDefaultTrendLineShadowColor:(UIColor *)arg0;
+ (UIColor *)p_getDefaultTrendLineStrokeColor:(UIColor *)arg0;

- (TSCHChartStylePreset *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)drawSwatchInRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (NSString *)presetKind;
- (id)applyStyleSwapTuple:(id)arg0;
- (NSObject *)styleOwnerFromSwapType:(int)arg0 andIndex:(unsigned int)arg1;
- (NSObject *)buildChartNonStyle;
- (NSObject *)buildLegendNonStyle;
- (<TSCHStyleActAlike> *)chartStyle;
- (<TSCHStyleActAlike> *)legendStyle;
- (NSArray *)valueAxisStyles;
- (NSArray *)categoryAxisStyles;
- (NSArray *)seriesStyles;
- (<TSCHStyleActAlike> *)refLineStyle;
- (NSArray *)paragraphStyles;
- (NSObject *)buildAxisNonStyle;
- (NSObject *)chartStyleState;
- (TSCHChartStylePreset *)initWithContext:(NSObject *)arg0 chartStyle:(<TSCHStyleActAlike> *)arg1 legendStyle:(<TSCHStyleActAlike> *)arg2 valueAxisStyles:(NSArray *)arg3 categoryAxisStyles:(NSArray *)arg4 seriesStyles:(NSArray *)arg5 paragraphStyles:(NSArray *)arg6 refLineStyle:(<TSCHStyleActAlike> *)arg7;
- (id)allStyles;
- (TSCHChartStylePreset *)initWithContext:(NSObject *)arg0 chartStyle:(<TSCHStyleActAlike> *)arg1 legendStyle:(<TSCHStyleActAlike> *)arg2 valueAxisStyles:(NSArray *)arg3 categoryAxisStyles:(NSArray *)arg4 seriesStyles:(NSArray *)arg5 paragraphStyles:(NSArray *)arg6 refLineStyle:(<TSCHStyleActAlike> *)arg7 uuid:(struct __CFUUID *)arg8;
- (NSString *)p_initWithContext:(NSObject *)arg0;
- (char)isEquivalentToPreset:(NSSet *)arg0 outReasons:(id *)arg1;
- (TSCHChartStylePreset *)initWithContext:(NSObject *)arg0 chartStyle:(<TSCHStyleActAlike> *)arg1 legendStyle:(<TSCHStyleActAlike> *)arg2 valueAxisStyles:(NSArray *)arg3 categoryAxisStyles:(NSArray *)arg4 seriesStyles:(NSArray *)arg5;
- (char)isEquivalentToPreset:(NSSet *)arg0;
- (UIImage *)swatchImage;
- (NSObject *)buildSeriesNonStyle;
- (void)dealloc;
- (NSString *)description;
- (TSCHChartStylePreset *)initWithContext:(TSPObjectContext *)arg0;
- (struct __CFUUID *)uuid;
- (NSUUID *)nsuuid;

@end
