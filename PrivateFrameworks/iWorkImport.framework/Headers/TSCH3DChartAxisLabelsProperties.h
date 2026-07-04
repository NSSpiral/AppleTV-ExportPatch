/* Runtime dump - TSCH3DChartAxisLabelsProperties
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartAxisLabelsProperties : NSObject
{
    TSCHChartInfo * mInfo;
    TSCH3DLabelResources * mLabels;
    unsigned int mStyleIndex;
    TSCHSelectionPath * mSelectionPath;
    char mHidden;
    TSULRUCache * mCategoryStridingCache;
    float mCachedTextFactor;
}

@property (readonly, nonatomic) TSCH3DLabelResources * labels;
@property (readonly, nonatomic) TSCHChartInfo * info;
@property (readonly, nonatomic) unsigned int styleIndex;
@property (retain, nonatomic) TSCHSelectionPath * selectionPath;
@property (nonatomic) char hidden;
@property (readonly, nonatomic) TSULRUCache * categoryStridingCache;
@property (nonatomic) float cachedTextFactor;

+ (NSDictionary *)propertiesWithInfo:(TSCHChartInfo *)arg0 labels:(TSCH3DLabelResources *)arg1 styleIndex:(unsigned int)arg2;

- (TSCH3DChartAxisLabelsProperties *)initWithInfo:(TSCHChartInfo *)arg0 labels:(TSCH3DLabelResources *)arg1 styleIndex:(unsigned int)arg2;
- (TSCHSelectionPath *)selectionPath;
- (void)setSelectionPath:(TSCHSelectionPath *)arg0;
- (TSULRUCache *)categoryStridingCache;
- (float)cachedTextFactor;
- (void)setCachedTextFactor:(float)arg0;
- (void)dealloc;
- (void)setHidden:(char)arg0;
- (TSCH3DChartAxisLabelsProperties *)copyWithZone:(struct _NSZone *)arg0;
- (TSCHChartInfo *)info;
- (unsigned int)styleIndex;
- (char)hidden;
- (TSCH3DLabelResources *)labels;

@end
