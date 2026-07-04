/* Runtime dump - TSMTraceDecoder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSMTraceDecoder : NSObject

+ (NSKeyedUnarchiver *)decoder;

- (NSObject *)stringForTSCalculationEngineTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForKeynoteTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForTSTablesTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForBuildInfoTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForTSTextTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForTSMeasurementTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForSystemTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForTSApplicationTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForTSChartsTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForTSDrawablesTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForTSKitTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForTSPersistenceTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForNumbersTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForPagesTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForCompatibilityTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForTSUQuickTestTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForRawTraceRecord:(struct TSMTraceRecord_s *)arg0;
- (NSObject *)stringForRecord:(struct TSMTraceRecord_s *)arg0;

@end
