/* Runtime dump - ECColumnWidthConvertor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECColumnWidthConvertor : NSObject
{
    int mMultiplier;
}

- (double)lassoColumnWidthFromXl:(double)arg0;
- (void)setupWithEDFont:(UIFont *)arg0 state:(NSObject *)arg1;
- (double)xlColumnWidthFromXlBaseColumnWidth:(double)arg0;
- (struct CGSize)stringSizeWithFont:(UIFont *)arg0 edFont:(UIFont *)arg1 drawingState:(struct _xmlNode *)arg2;
- (double)xlColumnWidthFromLasso:(double)arg0;
- (double)xlBaseColumnWidthFromXlColumnWidth:(double)arg0;

@end
