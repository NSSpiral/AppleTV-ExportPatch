/* Runtime dump - WebPDFViewPlaceholder
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation>
{
    NSString * _title;
    NSArray * _pageRects;
    NSArray * _pageYOrigins;
    struct CGPDFDocument * _document;
    WebDataSource * _dataSource;
    NSObject<WebPDFViewPlaceholderDelegate> * _delegate;
    char _didFinishLoadAndMemoryMap;
    struct CGSize _containerSize;
    char _didCompleteLayout;
}

@property NSObject<WebPDFViewPlaceholderDelegate> * delegate;
@property (retain) NSArray * pageRects;
@property (retain) NSArray * pageYOrigins;
@property (readonly) struct CGPDFDocument * document;
@property (readonly) struct CGPDFDocument * doc;
@property (readonly) unsigned int totalPages;
@property (retain) NSString * title;
@property struct CGSize containerSize;
@property (readonly, nonatomic) char didCompleteLayout;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)setAsPDFDocRepAndView;
+ (Class)_representationClassForWebFrame:(NSObject *)arg0;
+ (NSArray *)supportedMIMETypes;

- (void)dealloc;
- (void)setDataSource:(WebDataSource *)arg0;
- (void)setDelegate:(NSObject<WebPDFViewPlaceholderDelegate> *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSObject<WebPDFViewPlaceholderDelegate> *)delegate;
- (NSString *)title;
- (void)layout;
- (unsigned int)totalPages;
- (struct CGRect)rectForPageNumber:(NSNumber *)arg0;
- (struct CGPDFDocument *)doc;
- (NSArray *)pageRects;
- (void).cxx_construct;
- (struct CGPDFDocument *)document;
- (void)setDocument:(struct CGPDFDocument *)arg0;
- (char)didCompleteLayout;
- (void)setPageRects:(NSArray *)arg0;
- (void)didUnlockDocument;
- (void)clearDocument;
- (NSArray *)pageYOrigins;
- (void)setContainerSize:(struct CGSize)arg0;
- (void)simulateClickOnLinkToURL:(NSURL *)arg0;
- (struct CGSize)containerSize;
- (void)setPageYOrigins:(NSArray *)arg0;
- (void)dataSourceUpdated:(id)arg0;
- (void)_updateTitleForURL:(NSURL *)arg0;
- (void)_notifyDidCompleteLayout;
- (struct CGSize)_computePageRects:(struct CGPDFDocument *)arg0;
- (void)_doPostLoadOrUnlockTasks;
- (void)dataSourceMemoryMapped;
- (void)_updateTitleForDocumentIfAvailable;
- (void)_evaluateJSForDocument:(struct CGPDFDocument *)arg0;
- (struct CGRect)_getPDFPageBounds:(id)arg0;
- (void)viewWillMoveToHostWindow:(NSObject *)arg0;
- (void)viewDidMoveToHostWindow;
- (void)receivedData:(NSMutableData *)arg0 withDataSource:(WebDataSource *)arg1;
- (void)receivedError:(NSError *)arg0 withDataSource:(WebDataSource *)arg1;
- (void)finishedLoadingWithDataSource:(WebDataSource *)arg0;
- (char)canProvideDocumentSource;
- (NSObject *)documentSource;
- (void)dataSourceMemoryMapFailed;

@end
