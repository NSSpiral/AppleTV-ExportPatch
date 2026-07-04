/* Runtime dump - CHDSeriesCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDSeriesCollection : EDSortedCollection
{
    CHDChart * mChart;
}

+ (CHDSeriesCollection *)seriesCollectionWithChart:(id)arg0;

- (unsigned int)addObject:(struct objc_method *)arg0;
- (CHDSeriesCollection *)initWithChart:(GQHChart *)arg0;
- (unsigned int)nonEmptySeriesCount;
- (id)firstNonEmptySeries;

@end
