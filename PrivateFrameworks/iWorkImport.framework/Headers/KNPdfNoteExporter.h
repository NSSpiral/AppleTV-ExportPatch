/* Runtime dump - KNPdfNoteExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPdfNoteExporter : KNPdfExporter
{
    char mIsPrintingNote;
}

- (id)currentInfos;
- (char)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(float)arg1 unscaledClipRect:(struct CGRect)arg2 createPage:(struct CGSize)arg3;
- (char)incrementPage;

@end
