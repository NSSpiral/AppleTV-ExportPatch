/* Runtime dump - TSCHChunkManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChunkManager : NSObject
{
    TSCHChartInfo * mChartInfo;
    unsigned int * mSeriesMap;
    unsigned int * mValuesMap;
    unsigned int mChunkMapCount;
}

+ (TSCHChunkManager *)p_makeAllChartDeliveryStylesLocalized:(char)arg0;
+ (TSCHChunkManager *)p_allLocalizedChartDeliveryStyles;
+ (TSCHChunkManager *)p_allNonLocalizedChartDeliveryStyles;
+ (TSCHChunkManager *)p_allChartDeliveryStylesLocalized:(char)arg0;

- (TSCHChunkManager *)initWithChartInfo:(NSDictionary *)arg0;
- (id)animationFiltersWithDefaultFilters:(id)arg0;
- (char)hasBackgroundLayerForPieChart;
- (unsigned int)chartDeliveryStyleFromTSDDeliveryStyle:(unsigned int)arg0 animationFilter:(NSString *)arg1;
- (unsigned int)chunkCountForChartDeliveryStyle:(unsigned int)arg0;
- (char)lastChunkForSeriesIndex:(unsigned int)arg0 currentChunk:(unsigned int)arg1 chunkStyle:(unsigned int)arg2;
- (void)adjustRangeForRep:(NSObject *)arg0 chunkIndex:(unsigned int)arg1 finalTexture:(char)arg2 seriesStart:(int *)arg3 seriesCount:(int *)arg4;
- (void)adjustRangeForRep:(NSObject *)arg0 seriesIndex:(unsigned int)arg1 chunkIndex:(unsigned int)arg2 finalTexture:(char)arg3 valueStart:(int *)arg4 valueCount:(int *)arg5;
- (char)p_hasBackgroundFill;
- (unsigned int)p_chunkCountForChartDeliveryStyle:(unsigned int)arg0;
- (char)p_titleOn;
- (char)p_legendOn;
- (char)p_isPie;
- (char)p_isMultiData;
- (void)p_updateCacheForSeries;
- (void)p_updateCacheForSets;
- (void)p_updateCacheForElementsInSeries;
- (void)p_updateCacheForElementsInSets;
- (char)p_canAddChunkForSeries:(id)arg0 valueIndex:(int)arg1;
- (NSString *)p_backgroundStringForChartWithTitle:(NSString *)arg0;
- (NSObject *)p_seriesNameForSeriesAtIndex:(unsigned int)arg0 withPrefix:(NSString *)arg1;
- (NSString *)p_nameForMultiDataSetCategory:(unsigned int)arg0;
- (unsigned int)chunkCountByUpdatingCacheIfNecessaryForChartDeliveryStyle:(unsigned int)arg0;
- (unsigned int)textureDeliveryStyleFromDeliveryString:(NSString *)arg0;
- (NSArray *)textureDeliveryStylesLocalized:(char)arg0 animationFilter:(NSString *)arg1;
- (char)isVisibleAtBeginningOfMagicChartBuildForDeliveryStyle:(unsigned int)arg0 animationFilter:(NSString *)arg1;
- (NSObject *)containedTextForChartDeliveryStyle:(unsigned int)arg0 chunkIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)updateCache:(unsigned int)arg0;
- (void)clearCaches;

@end
