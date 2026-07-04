/* Runtime dump - TSCHChartFeatureBubble
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureBubble : TSCHChartFeatureScatter

- (NSArray *)supportedAxisScales;
- (unsigned int)styleIndexForAxisID:(NSObject *)arg0;
- (Class)valueAxisClassForID:(NSObject *)arg0 scale:(int)arg1;
- (NSString *)defaultDataFileName;
- (NSDictionary *)genericToSpecificPropertyMap;
- (Class)presetImagerClass;
- (NSArray *)supportedSeriesTypes;
- (char)supportsEditingForAxisID:(NSObject *)arg0;
- (char)supportsConnectingLines;
- (char)supportsSharedAndSeparateX;
- (char)supportsBubbleOptions;
- (unsigned int)gridOffsetToSeriesForScatterFormat:(int)arg0;
- (int)representativeGridValueAxisType;
- (void)updateTitlesForExportingModel:(NSObject *)arg0 info:(NSDictionary *)arg1;
- (char)supportsShowLabelsInFrontOption;
- (id)filteredStyleOwnersFromStyleOwners:(id)arg0;
- (void)p_initializeAxisIDs;

@end
