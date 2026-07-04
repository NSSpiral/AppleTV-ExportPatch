/* Runtime dump - TSCHChartFeatureMixed
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureMixed : TSCHChartFeatureCategory

- (NSArray *)supportedAxisScales;
- (Class)valueAxisClassForID:(NSObject *)arg0 scale:(int)arg1;
- (char)supportsMultipleSeriesTypes;
- (NSString *)defaultDataFileName;
- (NSDictionary *)genericToSpecificPropertyMap;
- (NSString *)userInterfaceName;
- (Class)presetImagerClass;
- (NSArray *)supportedSeriesTypes;
- (char)supportsGroupedShadows;
- (char)supportsEditing;
- (char)supportsSymbolOverhang;
- (char)supportsConnectingLines;
- (char)supportsIndividualShadowRendering;

@end
