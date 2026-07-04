/* Runtime dump - CHPCategoryAndSeriesReordering
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHPCategoryAndSeriesReordering : EDProcessor

- (BOOL)isObjectSupported:(id)arg0;
- (void)applyProcessorToObject:(NSObject *)arg0 sheet:(NSObject *)arg1;
- (void)reorderCategoryAndSeries:(id)arg0 sheet:(NSObject *)arg1 clearAxisReversedFlag:(BOOL)arg2;
- (void)applyCategoryReorderingPreprocessor:(id)arg0;
- (BOOL)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg0 isCategoryOrderReversed:(BOOL)arg1;
- (void)applySeriesReorderingPreprocessor:(id)arg0;
- (void)reorderSeriesCategory:(NSString *)arg0 dataPointCount:(unsigned int)arg1 byRow:(BOOL)arg2;
- (void)reorderData:(NSData *)arg0 dataPointCount:(unsigned int)arg1 byRow:(BOOL)arg2;
- (void)reorderValueProperties:(NSDictionary *)arg0 dataPointCount:(unsigned int)arg1;
- (void)reorderDataValues:(NSArray *)arg0 dataPointCount:(unsigned int)arg1;
- (void)reorderDataFormula:(id)arg0 dataPointCount:(unsigned int)arg1 byRow:(BOOL)arg2;

@end
