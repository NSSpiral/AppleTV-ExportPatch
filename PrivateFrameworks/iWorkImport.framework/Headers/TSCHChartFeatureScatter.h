/* Runtime dump - TSCHChartFeatureScatter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureScatter : TSCHChartFeature

- (NSArray *)supportedAxisScales;
- (unsigned int)styleIndexForAxisID:(NSObject *)arg0;
- (Class)valueAxisClassForID:(NSObject *)arg0 scale:(int)arg1;
- (NSString *)defaultDataFileName;
- (NSDictionary *)genericToSpecificPropertyMap;
- (NSString *)userInterfaceName;
- (Class)presetImagerClass;
- (NSArray *)supportedSeriesTypes;
- (char)supportsSymbolOverhang;
- (char)supportsConnectingLines;
- (char)supportsCategoryLabelsInChartRangeEditor;
- (char)supportsSharedAndSeparateX;
- (unsigned int)gridOffsetToSeriesForScatterFormat:(int)arg0;
- (int)representativeGridValueAxisType;
- (void)updateTitlesForExportingModel:(NSObject *)arg0 info:(NSDictionary *)arg1;
- (void)p_initializeAxisIDs;

@end
