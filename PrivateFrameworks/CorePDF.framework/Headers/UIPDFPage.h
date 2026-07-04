/* Runtime dump - UIPDFPage
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPage : NSObject
{
    struct CGPDFPage * _cgPage;
    unsigned int _pageNumber;
    NSString * _stringInReadingOrder;
    UIPDFSelection * _selection;
    int _lock;
    UIPDFDocument * _document;
    unsigned int _pageIndex;
    UIImage * _pageImage;
    NSMutableArray * _annotations;
}

@property (readonly) struct CGPDFPage * CGPage;
@property (readonly) unsigned int pageNumber;
@property (readonly) unsigned int pageIndex;
@property (readonly) struct CGRect cropBox;
@property (readonly) UIPDFDocument * document;
@property (retain) UIImage * pageImage;
@property (retain) UIPDFSelection * selection;

- (void)refresh;
- (NSMutableArray *)annotations;
- (void)removeAnnotation:(NSObject *)arg0;
- (void)dealloc;
- (struct CGSize)size;
- (NSString *)string;
- (UIPDFSelection *)selection;
- (void)setSelection:(UIPDFSelection *)arg0;
- (unsigned int)rotation;
- (UIPDFDocument *)document;
- (void)setDocument:(UIPDFDocument *)arg0;
- (unsigned int)pageNumber;
- (unsigned int)pageIndex;
- (NSString *)findString:(NSString *)arg0 fromSelection:(TSWPSelection *)arg1 options:(unsigned int)arg2;
- (struct CGRect)cropBoxAccountForRotation;
- (struct CGPDFPage *)CGPage;
- (UIPDFPage *)initWithCGPDFPage:(struct CGPDFPage *)arg0;
- (void)setPageImage:(UIImage *)arg0;
- (UIImage *)pageImage;
- (unsigned long)cfCompareFlagsFromNSOptions:(unsigned int)arg0;
- (void)clearAnnotations;
- (id)annotationIn:(NSCTRubyAnnotation *)arg0 withIndex:(unsigned int)arg1;
- (UIPDFPage *)initWithDocument:(UIPDFDocument *)arg0 pageNumber:(unsigned int)arg1;
- (void)drawInRect:(struct CGRect)arg0 context:(struct CGSize)arg1;
- (id)getImageIfAvailable;
- (void)deliverImageWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 receiver:(NSObject *)arg2 selector:(SEL)arg3 info:(NSDictionary *)arg4;
- (struct CGRect)cropBox;
- (struct CGRect)mediaBox;
- (struct CGRect)mediaBoxAccountForRotation;
- (id)copyPage;
- (void)removeAllAnnotations;
- (void)addAnnotation:(NSObject *)arg0;

@end
