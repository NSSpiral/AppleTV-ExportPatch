/* Runtime dump - TSCHChartFeatureTwoAxis
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureTwoAxis : TSCHChartFeatureCategory

- (char)supportsReferenceLines;
- (NSArray *)supportedAxisScales;
- (unsigned int)styleIndexForAxisID:(NSObject *)arg0;
- (Class)valueAxisClassForID:(NSObject *)arg0 scale:(int)arg1;
- (char)supportsMultipleSeriesTypes;
- (char)requiresYAxisOrdinal;
- (NSString *)defaultDataFileName;
- (NSDictionary *)genericToSpecificPropertyMap;
- (NSString *)userInterfaceName;
- (Class)presetImagerClass;
- (NSArray *)supportedSeriesTypes;
- (char)supportsGroupedShadows;
- (char)supportsEditing;
- (char)supportsSymbolOverhang;
- (char)supportsConnectingLines;
- (int)representativeGridValueAxisType;
- (void)updateTitlesForExportingModel:(NSObject *)arg0 info:(NSDictionary *)arg1;
- (char)supportsIndividualShadowRendering;
- (void)p_initializeAxisIDs;

@end
