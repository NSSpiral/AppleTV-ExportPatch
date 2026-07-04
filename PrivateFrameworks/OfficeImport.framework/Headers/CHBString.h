/* Runtime dump - CHBString
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBString : NSObject

+ (NSString *)edStringWithHandlingMultilevelCategoryDataFromOCText:(struct OcText *)arg0 chdFormula:(struct OcText)arg1 state:(NSObject *)arg2;
+ (unsigned int)edFontIndexForXlChartTextFrame:(struct XlChartTextFrame *)arg0 state:(struct XlChartFillStyle *)arg1;
+ (NSObject *)edRunsFromXlChartTextFrame:(struct XlChartTextFrame *)arg0 state:(struct XlChartTextFrame)arg1;
+ (NSObject *)edStringFromXlChartTextFrame:(struct XlChartTextFrame *)arg0 state:(struct XlChartTextFrame)arg1;

@end
