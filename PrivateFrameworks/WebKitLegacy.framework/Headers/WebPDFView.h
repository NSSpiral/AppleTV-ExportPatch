/* Runtime dump - WebPDFView
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation>
{
    char dataSourceHasBeenSet;
    struct CGPDFDocument * _PDFDocument;
    NSString * _title;
    struct CGRect * _pageRects;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct CGColor *)backgroundColor;
+ (struct CGColor *)shadowColor;
+ (Class)_representationClassForWebFrame:(NSObject *)arg0;
+ (NSArray *)supportedMIMETypes;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setDataSource:(NSObject *)arg0;
- (NSString *)title;
- (void)layout;
- (void)setNeedsLayout:(char)arg0;
- (unsigned int)totalPages;
- (struct CGRect)rectForPageNumber:(NSNumber *)arg0;
- (struct CGPDFDocument *)doc;
- (void)dataSourceUpdated:(id)arg0;
- (void)viewWillMoveToHostWindow:(NSObject *)arg0;
- (void)viewDidMoveToHostWindow;
- (void)receivedData:(NSMutableData *)arg0 withDataSource:(NSObject *)arg1;
- (void)receivedError:(NSError *)arg0 withDataSource:(NSObject *)arg1;
- (void)finishedLoadingWithDataSource:(NSObject *)arg0;
- (char)canProvideDocumentSource;
- (NSObject *)documentSource;
- (NSObject *)_pagesInRect:(struct CGRect)arg0;
- (void)drawPage:(struct CGPDFPage *)arg0;
- (void)_checkPDFTitle;
- (void)_computePageRects;
- (unsigned int)pageNumberForRect:(struct CGRect)arg0;

@end
