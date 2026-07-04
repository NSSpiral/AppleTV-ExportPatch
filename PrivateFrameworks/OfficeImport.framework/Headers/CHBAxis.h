/* Runtime dump - CHBAxis
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBAxis : NSObject

+ (Class)chbAxisClassWith:(struct XlChartPlotAxis *)arg0 plotAxis:(struct XlChartLineStyle *)arg1;
+ (int)chbAxisIdForPlotAxis:(int)arg0 state:(NSObject *)arg1;
+ (int)chdAxisPositionFromAxisType:(int)arg0;
+ (CHBAxis *)readWithXlPlotAxis:(int)arg0 state:(NSObject *)arg1;
+ (Class)chbAxisClassWith:(id)arg0;
+ (int)xlPlotAxisTypeFrom:(int)arg0;

@end
