/* Runtime dump - EMSeriesMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMSeriesMapper : CMMapper

- (unsigned int)markerType;
- (NSArray *)values;
- (float)offset;
- (struct CGColor *)fillColor;
- (struct CGColor *)strokeColor;
- (unsigned int)chartType;
- (BOOL)useSecondaryAxis;
- (struct CGColor *)markerColor;
- (float)markerWidth;
- (float)strokeWidth;

@end
