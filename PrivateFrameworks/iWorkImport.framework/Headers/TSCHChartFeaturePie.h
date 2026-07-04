/* Runtime dump - TSCHChartFeaturePie
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeaturePie : TSCHChartFeature

- (char)supportsReferenceLines;
- (unsigned int)maxCellsToCheckForGridValueType;
- (unsigned int)styleIndexForAxisID:(NSObject *)arg0;
- (Class)valueAxisClassForID:(NSObject *)arg0 scale:(int)arg1;
- (NSString *)defaultDataFileName;
- (NSDictionary *)genericToSpecificPropertyMap;
- (NSString *)userInterfaceName;
- (Class)presetImagerClass;
- (char)supportsBorderFrame;
- (char)supportsGroupedShadows;
- (char)supportsBackgroundFill;
- (char)supportsTrendLines;
- (char)supportsErrorBars;
- (char)supportsElementSeriesNames;
- (char)supportsLabelExplosion;
- (char)supportsPercentNumberFormatting;
- (char)supportsMoreThanOneLiveCategory;
- (char)supportsCategoryLabelsInChartRangeEditor;
- (int)representativeGridValueAxisType;
- (void)updateTitlesForExportingModel:(NSObject *)arg0 info:(NSDictionary *)arg1;
- (NSDictionary *)initialSceneWithChartInfo:(NSDictionary *)arg0 layoutSettings:(struct ?)arg1;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (void)p_initializeAxisIDs;
- (char)isPie;

@end
