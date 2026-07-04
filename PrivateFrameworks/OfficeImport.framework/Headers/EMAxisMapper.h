/* Runtime dump - EMAxisMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMAxisMapper : CMMapper

- (unsigned int)type;
- (struct SCNVector3)position;
- (NSArray *)values;
- (NSString *)label;
- (float)minValue;
- (struct CGColor *)textColor;
- (struct CGColor *)strokeColor;
- (float)maxValue;
- (float)unit;
- (BOOL)isLogarithmic;
- (BOOL)centerLabels;
- (float)strokeWidth;
- (NSArray *)labels;

@end
