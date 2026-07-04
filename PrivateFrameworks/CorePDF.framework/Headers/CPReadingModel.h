/* Runtime dump - CPReadingModel
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPReadingModel : NSObject
{
    long _count;
    struct ? * _textLineRanges;
    struct ? * _stringLineRanges;
    int * _pageNumbers;
    struct ? _pageRange;
    struct CGPDFDocument * _document;
    long _numberOfLines;
    long _numberOfParagraphs;
    long _numberOfColumns;
    long _numberOfLayoutAreas;
    NSString * _cachedString;
    NSAttributedString * _cachedAttributedString;
    long _pageNumber;
    long _pos;
    NSMutableArray * _tables;
    NSMutableArray * _lists;
    NSMutableArray * _headings;
    int _pageNumberMemo;
    struct ? _textRangeMemo;
    struct _NSRange _rangeMemo;
    RMList * _currentList;
}

- (void)dealloc;
- (NSString *)string;
- (NSAttributedString *)attributedString;
- (NSObject *)stringForRange:(struct _NSRange)arg0;
- (CPReadingModel *)initWithDocument:(struct CGPDFDocument *)arg0;
- (void)clearCache;
- (unsigned int)lineCount;
- (void)buildModel:(struct CGPDFDocument *)arg0;
- (void)buildModel:(struct CGPDFDocument *)arg0 pageRange:(struct _NSRange)arg1;
- (void)addTable:(struct CGPDFNode *)arg0 layout:(struct CGPDFLayout *)arg1;
- (void)tables:(struct CGPDFNode *)arg0 layout:(struct CGPDFLayout *)arg1;
- (struct CGPDFNode *)firstParagraphInList:(NSArray *)arg0;
- (int)findParagraph:(struct CGPDFNode *)arg0 inListArray:(NSArray *)arg1;
- (void)addListsInColumn:(struct CGPDFNode *)arg0;
- (void)lists:(struct CGPDFNode *)arg0 layout:(struct CGPDFLayout *)arg1;
- (void)headings:(struct CGPDFNode *)arg0 layout:(struct CGPDFLayout *)arg1;
- (void)visitLayoutAreas:(struct CGPDFNode *)arg0 completion:(id /* block */)arg1;
- (void)stringLineRanges;
- (NSString *)stringForLine:(unsigned int)arg0;
- (NSAttributedString *)attributedStringForLine:(unsigned int)arg0;
- (struct _NSRange)stringRangeForLine:(unsigned int)arg0;
- (struct CGRect)pdfBoundsForCursor:(NSObject *)arg0;
- (unsigned int)lineForIndex:(unsigned int)arg0;
- (struct CGRect)pdfBoundsForNewLine:(id)arg0;
- (struct ?)mapStringRange:(struct _NSRange)arg0;
- (struct _NSRange)linesForPage:(unsigned int)arg0;
- (unsigned int)pageNumberForLine:(unsigned int)arg0;
- (CPReadingModel *)initWithDocument:(struct CGPDFDocument *)arg0 withPageRange:(struct _NSRange)arg1;
- (NSMutableArray *)headings;
- (long)indexOfFirstLineOnPage:(unsigned int)arg0;
- (struct _NSRange)textRangeForLine:(unsigned int)arg0;
- (struct CGRect)pdfBoundsForLine:(id)arg0;
- (struct _NSRange)rangeForLine:(unsigned int)arg0;
- (struct CGRect)pdfBoundsForRange:(NSObject *)arg0;
- (struct ?)textRangeForStringRange:(struct _NSRange)arg0;
- (struct _NSRange)stringRangeForTextRange:(struct ?)arg0 onPageNumber:(unsigned int)arg1;
- (struct _NSRange)pageRangeForStringRange:(struct ?)arg0;
- (int)lineIndexForPoint:(struct CGPoint)arg0 onPage:(unsigned int)arg1;
- (void)incrementParagraphCount;
- (void)increamentLayoutAreaCount;
- (void)incrementColumnCount;
- (void)incrementLineCount;
- (void)visitTextLines:(struct CGPDFNode *)arg0 completion:(id /* block */)arg1;
- (void)visitParagraphs:(struct CGPDFNode *)arg0 completion:(id /* block */)arg1;
- (void)visitColumns:(struct CGPDFNode *)arg0 completion:(id /* block */)arg1;
- (unsigned int)addRangeForLine:(unsigned int)arg0 from:(unsigned int)arg1;
- (NSMutableArray *)lists;
- (NSMutableArray *)tables;
- (void)addRange:(struct ?)arg0;
- (NSObject *)attributedStringForRange:(struct _NSRange)arg0;

@end
