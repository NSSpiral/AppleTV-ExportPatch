/* Runtime dump - KNPdfGridExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPdfGridExporter : KNPdfExporter

- (KNPdfGridExporter *)initWithDocumentRoot:(NSObject *)arg0;
- (char)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(float)arg1 unscaledClipRect:(struct CGRect)arg2 createPage:(struct CGSize)arg3;
- (char)incrementPage;

@end
