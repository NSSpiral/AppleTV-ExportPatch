/* Runtime dump - UIPDFSelection
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFSelection : NSObject
{
    UIPDFPage * _page;
    struct CGPDFSelection * _cgSelection;
    char _dirty;
    struct __CFString * _string;
    int _cachedStartIndex;
    int _cachedEndIndex;
    struct ? stringRange;
}

@property (nonatomic) struct ? stringRange;

- (void)dealloc;
- (struct CGRect)bounds;
- (UIPDFSelection *)init;
- (NSString *)description;
- (char)isEmpty;
- (struct __CFString *)string;
- (struct ?)extent;
- (struct CGAffineTransform)transform;
- (UIPDFPage *)page;
- (unsigned int)numberOfRectangles;
- (char)getBounds:(struct CGRect *)arg0 transform:(struct CGSize)arg1 index:(NSObject *)arg2;
- (NSObject *)attributedStringAtIndex:(unsigned int)arg0;
- (NSObject *)textAtIndex:(unsigned int)arg0;
- (struct ?)rectangleAtIndex:(struct CGPoint)arg0 scale:(SCNActionScale *)arg1 inset:(NSSet *)arg2;
- (struct ?)stringRange;
- (UIPDFSelection *)initWithPage:(UIPDFPage *)arg0 cgSelection:(struct CGPDFSelection *)arg1;
- (void)setStringRange:(struct ?)arg0;
- (struct CGPDFSelection *)CGSelection;
- (UIPDFSelection *)initWithPage:(UIPDFPage *)arg0 fromArchive:(GQZArchive *)arg1;
- (UIPDFSelection *)initWithSelection:(TSWPSelection *)arg0;
- (UIPDFSelection *)initWithPage:(UIPDFPage *)arg0 fromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (char)isNonEmpty;
- (id)selectionExtendedToLineBoundaries;
- (id)containingTextLine;
- (char)isWord;
- (NSObject *)htmlAtIndex:(unsigned int)arg0;
- (unsigned int)extendAtStart:(unsigned int)arg0;
- (unsigned int)extendAtEnd:(unsigned int)arg0;
- (void)copyToPasteboard;
- (float)baseLineAtIndex:(unsigned int)arg0;
- (void)extendToParagraph;
- (unsigned int)startIndex;
- (unsigned int)endIndex;
- (QLZipArchive *)archive;

@end
