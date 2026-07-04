/* Runtime dump - EMChartsheetMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMChartsheetMapper : EMSheetMapper
{
    EDChartSheet * mChartSheet;
    struct CGRect mBox;
}

- (int)width;
- (void).cxx_construct;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (EMChartsheetMapper *)initWithChartSheet:(NSObject *)arg0 parent:(NSObject *)arg1;
- (int)preprocessWidthWithState:(NSObject *)arg0;
- (int)preprocessHeightWithState:(NSObject *)arg0;

@end
