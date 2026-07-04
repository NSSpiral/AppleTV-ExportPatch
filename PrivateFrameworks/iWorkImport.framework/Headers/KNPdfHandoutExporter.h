/* Runtime dump - KNPdfHandoutExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPdfHandoutExporter : KNPdfExporter
{
    char mPrintingRuledLines;
    char mPrintingNotes;
    char mPrintingDivider;
    char mIsPrintingNote;
}

@property (nonatomic) char printingNotes;
@property (nonatomic) char printingRuledLines;
@property (nonatomic) char printingDivider;

- (KNPdfHandoutExporter *)initWithDocumentRoot:(NSObject *)arg0;
- (id)currentInfos;
- (char)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(float)arg1 unscaledClipRect:(struct CGRect)arg2 createPage:(struct CGSize)arg3;
- (char)incrementPage;
- (void)p_drawNotesForNode:(NSObject *)arg0 index:(unsigned int)arg1 forRect:(struct CGRect)arg2 unscaledClipRect:(struct CGSize)arg3 scaledClipRect:(NSObject *)arg4 context:(struct CGRect)arg5;
- (void)p_drawDividerLineForRect:(struct CGRect)arg0 pageRect:(struct CGSize)arg1 context:(NSObject *)arg2;
- (void)p_drawRuledLinesForRect:(struct CGRect)arg0 pageRect:(struct CGSize)arg1 numberOfLines:(id)arg2 context:(struct CGRect)arg3;
- (char)isPrintingRuledLines;
- (char)isPrintingNotes;
- (void)setPrintingRuledLines:(char)arg0;
- (void)setPrintingNotes:(char)arg0;
- (char)isPrintingDivider;
- (void)setPrintingDivider:(char)arg0;

@end
