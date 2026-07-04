/* Runtime dump - TSCHChartStyleState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying>

@property (retain, nonatomic) TSCHChartStyle * chartStyle;
@property (retain, nonatomic) TSCHLegendStyle * legendStyle;
@property (copy, nonatomic) NSMutableArray * valueAxisStyles;
@property (copy, nonatomic) NSMutableArray * categoryAxisStyles;
@property (copy, nonatomic) NSMutableArray * seriesThemeStyles;
@property (copy, nonatomic) NSMutableArray * seriesPrivateStyles;
@property (copy, nonatomic) NSMutableArray * paragraphStyles;
@property (copy, nonatomic) NSMutableDictionary * referenceLineStyles;
@property (retain, nonatomic) TSCHReferenceLineStyle * referenceLineThemeStyle;

- (id)applyStyleSwapTuple:(id)arg0;
- (TSCHChartStyle *)chartStyle;
- (TSCHLegendStyle *)legendStyle;
- (NSMutableArray *)valueAxisStyles;
- (NSMutableArray *)categoryAxisStyles;
- (NSMutableArray *)paragraphStyles;
- (NSMutableArray *)seriesPrivateStyles;
- (NSMutableArray *)seriesThemeStyles;
- (NSMutableDictionary *)referenceLineStyles;
- (TSCHReferenceLineStyle *)referenceLineThemeStyle;
- (char)otherStateIsEquivalent:(id)arg0;
- (void)setChartStyle:(TSCHChartStyle *)arg0;
- (void)setLegendStyle:(TSCHLegendStyle *)arg0;
- (void)setValueAxisStyles:(NSMutableArray *)arg0;
- (void)setCategoryAxisStyles:(NSMutableArray *)arg0;
- (void)setSeriesThemeStyles:(NSMutableArray *)arg0;
- (void)setSeriesPrivateStyles:(NSMutableArray *)arg0;
- (void)setParagraphStyles:(NSMutableArray *)arg0;
- (void)setReferenceLineStyles:(NSMutableDictionary *)arg0;
- (void)setReferenceLineThemeStyle:(TSCHReferenceLineStyle *)arg0;
- (id)allStyles;
- (NSDictionary *)usesOfParagraphStyleProperties;
- (id)applyStyleSwapTuple:(id)arg0 ignoringBeforeValues:(char)arg1;
- (NSNumber *)stateByExpandingSeriesStylesForSeriesCount:(unsigned int)arg0;
- (char)otherStateIsEquivalent:(id)arg0 ignoringSeriesThemeStyles:(char)arg1;
- (NSNumber *)stateByExpandingReferenceLineStylesForCount:(unsigned int)arg0;
- (id)stateByReducingSeriesPrivateStyles;
- (id)stateByReducingReferenceLineStyles;
- (NSObject *)semanticTagToStyleMap;
- (char)paragraphStyleIndexesAreValid;
- (void)replaceAllInstancesOfStyle:(NSObject *)arg0 withStyle:(struct CGSize)arg1;
- (NSNumber *)stateByExpandingForSeriesCount:(unsigned int)arg0 andReferenceLineCount:(unsigned int)arg1;
- (id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
- (NSObject *)semanticUsagesToParagraphStyleMap;
- (void)setStyle:(NSObject *)arg0 withSemanticTag:(TSCHStyleSemanticTag *)arg1;
- (TSCHChartStyleState *)copyWithZone:(struct _NSZone *)arg0;

@end
