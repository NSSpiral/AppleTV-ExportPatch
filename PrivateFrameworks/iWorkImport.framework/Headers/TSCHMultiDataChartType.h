/* Runtime dump - TSCHMultiDataChartType
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHMultiDataChartType : TSCH2DChartType

+ (TSCHMultiDataChartType *)g_genericToSpecificPropertyMapCategoryAxis;

- (Class)repClass;
- (char)isMultiData;
- (NSDictionary *)genericToSpecificPropertyMap;
- (char)supportsGroupedShadows;
- (char)supportsTrendLines;
- (char)supportsErrorBars;
- (char)supportsConnectingLines;
- (char)supportsSeriesShadow;
- (NSDictionary *)p_genericToSpecificPropertyMap;

@end
