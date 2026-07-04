/* Runtime dump - MFComposeBodyField
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeBodyField : UIWebDocumentView
{
    DOMHTMLElement * _body;
    DOMHTMLDocument * _document;
    DOMHTMLElement * _blockquote;
    struct CGSize _originalSize;
    struct CGSize _layoutSize;
    char _shouldShowStandardButtons;
    id _isDirty;
    id _forwardingNotification;
    id _isLoading;
    id _needsReplaceImages;
    struct _NSRange _rangeToSelect;
    <MFMailComposeViewDelegate> * _mailComposeViewDelegate;
    int _preventLayout;
    char _prefersFirstLineSelection;
    unsigned int _imageCount;
    NSArray * _attachmentURLsToReplaceWithFilenames;
}

@property char shouldShowStandardButtons;

+ (void)addAdditionalItemsToCalloutBar;

- (void)setDirty:(char)arg0;
- (void)setShouldShowStandardButtons:(char)arg0;
- (void)changeQuoteLevel:(int)arg0;
- (char)shouldShowStandardButtons;
- (void)setMailComposeViewDelegate:(<MFMailComposeViewDelegate> *)arg0;
- (void)setPinHeight:(float)arg0;
- (void)layoutWithMinimumSize;
- (void)updateQuoteLevelMenu;
- (void)didUndoOrRedo:(id)arg0;
- (void)replaceImages;
- (void)_finishedLoadingURLRequest:(NSURLRequest *)arg0 success:(char)arg1;
- (void)replaceImagesIfNecessary;
- (void)webViewDidDraw:(id)arg0;
- (void)setMarkupString:(NSString *)arg0;
- (void)setMarkupString:(NSString *)arg0 baseURL:(NSURL *)arg1 quote:(char)arg2;
- (void)_nts_AddDOMNode:(NSObject *)arg0 quote:(char)arg1 baseURL:(NSURL *)arg2 emptyFirst:(char)arg3 prepended:(char)arg4;
- (void)_ensureQuotedImagesHaveAttachmentStyleForElement:(NSObject *)arg0;
- (void)addMarkupString:(NSString *)arg0 quote:(char)arg1 baseURL:(NSURL *)arg2 emptyFirst:(char)arg3 prepended:(char)arg4;
- (void)prependMarkupString:(NSString *)arg0 quote:(char)arg1 baseURL:(NSURL *)arg2 emptyFirst:(char)arg3;
- (void)appendMarkupString:(NSString *)arg0 quote:(char)arg1;
- (void)insertNode:(NSObject *)arg0 parent:(NSObject *)arg1 nextSibling:(id)arg2;
- (void)restoreSelectionFromTemporaryMarkers:(char)arg0;
- (void)deleteNode:(NSObject *)arg0;
- (void)insertNode:(NSObject *)arg0 parent:(NSObject *)arg1 offset:(int)arg2;
- (void)replaceNode:(NSObject *)arg0 oldNode:(NSObject *)arg1;
- (void)deleteRange:(NSObject *)arg0;
- (void)setSelectionStart:(int)arg0 offset:(int)arg1 end:(id)arg2 offset:(int)arg3 affinity:(int)arg4;
- (void)saveSelectionForUndo;
- (NSObject *)insertTemporarySelectionMarkersForRange:(NSObject *)arg0;
- (void)splitUpBlockQuotesOverlappingStartOfRange:(NSObject *)arg0;
- (void)splitUpBlockQuotesOverlappingEndOfRange:(NSObject *)arg0;
- (void)removeBlockQuoteFromTree:(id)arg0;
- (NSObject *)temporaryEndingSelectionMarker;
- (void)restoreSelectionFromTemporaryMarkers;
- (NSData *)_nodeForAttachmentData:(NSData *)arg0 text:(NSString *)arg1 type:(NSObject *)arg2;
- (void)addSelectedAttachmentsToPasteboard:(id)arg0;
- (NSData *)_addInlineAttachmentWithData:(NSData *)arg0 text:(NSString *)arg1 type:(NSObject *)arg2;
- (void)_removeInlineAttachment:(NSObject *)arg0;
- (<MFMailComposeViewDelegate> *)mailComposeViewDelegate;
- (void)setCaretPosition:(unsigned int)arg0;
- (void)setLayoutInterval:(int)arg0;
- (void)scaleImagesToScale:(unsigned int)arg0;
- (void)unscaleImages;
- (void)setAttachmentURLsToBeReplacedWithFilename:(NSString *)arg0;
- (void)beginPreventingLayout;
- (void)endPreventingLayout;
- (char)isForwardingNotification;
- (NSObject *)webThreadWebView:(NSObject *)arg0 identifierForInitialRequest:(NSURLRequest *)arg1 fromDataSource:(NSObject *)arg2;
- (char)webView:(NSObject *)arg0 shouldDeleteDOMRange:(NSObject *)arg1;
- (char)webView:(NSObject *)arg0 shouldInsertText:(NSString *)arg1 replacingDOMRange:(NSObject *)arg2 givenAction:(int)arg3;
- (void)_webthread_webView:(NSObject *)arg0 tileDidDraw:(id)arg1;
- (void)addDOMNode:(NSObject *)arg0 quote:(char)arg1 baseURL:(NSURL *)arg2 emptyFirst:(char)arg3 prepended:(char)arg4;
- (void)appendQuotedMarkupString:(NSString *)arg0 baseURL:(NSURL *)arg1;
- (void)setPrefersFirstLineSelection;
- (void)prependMarkupString:(NSString *)arg0 quote:(char)arg1;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(char)arg0;
- (void)deleteTemporarySelectionMarkersFromDocument:(NSObject *)arg0;
- (void)insertPhotoOrVideoWithInfoDictionary:(NSDictionary *)arg0;
- (char)containsRichText;
- (MFPlainTextDocument *)plainTextAlternative;
- (NSObject *)plainTextContent;
- (void)htmlString:(id *)arg0 otherHtmlStringsAndAttachments:(id *)arg1 charsets:(id *)arg2;
- (NSString *)htmlString;
- (struct CGRect)rectOfElementWithID:(int)arg0;
- (MFComposeBodyField *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)invalidate;
- (char)becomeFirstResponder;
- (void)deferredBecomeFirstResponder;
- (struct _NSRange)selectedRange;
- (void)setSelectedRange:(struct _NSRange)arg0;
- (void)webViewDidChange:(NSDictionary *)arg0;
- (void)cut:(id)arg0;
- (void)copy:(id)arg0;
- (void)paste:(id)arg0;
- (void)ensureSelection;
- (NSObject *)documentFragmentForPasteboardItemAtIndex:(int)arg0;
- (void)setSelectedDOMRange:(DOMRange *)arg0 affinityDownstream:(char)arg1;
- (void)webView:(NSObject *)arg0 didFirstVisuallyNonEmptyLayoutInFrame:(NSObject *)arg1;
- (NSObject *)webThreadWebView:(NSObject *)arg0 resource:(NSObject *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3 fromDataSource:(NSObject *)arg4;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didFinishLoadingFromDataSource:(NSObject *)arg2;
- (void)webView:(NSObject *)arg0 resource:(NSObject *)arg1 didFailLoadingWithError:(NSError *)arg2 fromDataSource:(NSObject *)arg3;
- (float)contentWidth;
- (void)prependString:(NSString *)arg0;
- (char)isDirty;
- (void)setLoading:(char)arg0;

@end
