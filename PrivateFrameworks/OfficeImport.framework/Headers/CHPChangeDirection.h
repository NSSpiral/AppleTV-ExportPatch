/* Runtime dump - CHPChangeDirection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHPChangeDirection : EDProcessor

- (BOOL)isObjectSupported:(id)arg0;
- (void)applyProcessorToObject:(NSObject *)arg0 sheet:(NSObject *)arg1;
- (void)changeChartDirection:(id)arg0 sheet:(NSObject *)arg1;
- (id)getSeriesCollectionForOrthogonalDirection:(id)arg0 forChart:(GQHChart *)arg1;
- (void)cleanUpOldSeriesCollection:(id)arg0;
- (void)changeBarColumnDirection:(id)arg0;
- (NSObject *)getGraphicPropertiesForSeriesWithIndex:(unsigned int)arg0 fromCollection:(RadioArtworkCollection *)arg1 isVaryColors:(BOOL)arg2 forChart:(GQHChart *)arg3;
- (id)createNewSeriesCollectionForOrthogonalDirection:(id)arg0 forChart:(GQHChart *)arg1;
- (void)mapSeriesCollection:(id)arg0 from:(NSObject *)arg1 forChart:(GQHChart *)arg2;
- (void)addDataValue:(CHXDataValue *)arg0 to:(NSObject *)arg1 withIndex:(unsigned int)arg2;
- (void)mapSeriesValues:(NSArray *)arg0 to:(NSObject *)arg1 forIndex:(unsigned int)arg2 byRow:(BOOL)arg3 forChart:(GQHChart *)arg4;

@end
