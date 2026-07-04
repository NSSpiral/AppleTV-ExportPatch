/* Runtime dump - TSCHSageGeometryHelper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHSageGeometryHelper : NSObject
{
    TSCHChartInfo * mChartInfo;
    TSDInfoGeometry * mImportedInfoGeometry;
}

+ (NSDictionary *)helperWithImportedChartInfo:(NSDictionary *)arg0 importedInfoGeometry:(NSObject *)arg1;
+ (struct CGRect)sageChartAreaBoundsForExportWithChartInfo:(NSDictionary *)arg0 geometryRect:(SEL)arg1 returningContainingViewportSize:(NSObject *)arg2;

- (TSCHSageGeometryHelper *)initWithImportedChartInfo:(NSDictionary *)arg0 importedInfoGeometry:(NSObject *)arg1;
- (void)dealloc;
- (struct CGSize)naturalSize;

@end
