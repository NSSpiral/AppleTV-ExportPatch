/* Runtime dump - TPFootnoteLayoutController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPFootnoteLayoutController : NSObject
{
    TPDocumentRoot * _documentRoot;
    char _bumpedDocumentEndnotesForPageBreak;
}

@property (readonly, nonatomic) <TSWPFootnoteMarkProvider> * footnoteMarkProvider;

- (TPFootnoteLayoutController *)initWithDocumentRoot:(TPDocumentRoot *)arg0;
- (<TSWPFootnoteMarkProvider> *)footnoteMarkProvider;
- (struct _NSRange)layoutFootnotesFromIndex:(unsigned int)arg0 intoFootnoteContainer:(NSObject *)arg1 maxHeight:(float)arg2 pageCharRange:(struct _NSRange)arg3 sectionCharRange:(struct _NSRange)arg4 isLastSection:(char)arg5;
- (struct _NSRange)footnoteLayoutRangeForPageCharRange:(struct _NSRange)arg0;
- (void)inflateFootnotesInRange:(struct _NSRange)arg0 intoFootnoteContainer:(NSObject *)arg1;
- (unsigned int)p_layoutFootnotesInRange:(struct _NSRange)arg0 intoFootnoteContainer:(NSObject *)arg1 maxHeight:(float)arg2 measure:(char)arg3 inflating:(char)arg4;
- (NSObject *)p_footnoteReferenceStoragesInFootnoteIndexRange:(struct _NSRange)arg0;
- (id)p_layoutForFootnoteReferenceStorage:(id)arg0;
- (struct _NSRange)endnoteRangeForSectionCharRange:(struct _NSRange)arg0 isLastSection:(char)arg1;

@end
