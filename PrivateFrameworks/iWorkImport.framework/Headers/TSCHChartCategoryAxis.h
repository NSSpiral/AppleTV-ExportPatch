/* Runtime dump - TSCHChartCategoryAxis
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartCategoryAxis : TSCHChartAxis
{
    int mRangeContinuousCache;
}

+ (NSDictionary *)axisForInfo:(NSDictionary *)arg0;
+ (unsigned char)styleOwnerPathType;

- (int)specificPropertyForGeneric:(int)arg0;
- (unsigned int)indexForSelectionPathLabelIndex:(unsigned int)arg0;
- (unsigned int)selectionPathLabelIndexForIndex:(unsigned int)arg0;
- (char)isCategory;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg0;
- (char)isRangeContinuous;
- (NSDictionary *)g_genericToSpecificPropertyMap;
- (NSData *)p_getGenericToCategoryPropertyMapForMultiData;
- (NSData *)p_getGenericToCategoryPropertyMapForNonMultiData;
- (NSObject *)p_getGenericToCategoryPropertyMap;
- (struct pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *>)labelEnumeratorPair;
- (void)dealloc;
- (NSDictionary *)defaultProperties;

@end
