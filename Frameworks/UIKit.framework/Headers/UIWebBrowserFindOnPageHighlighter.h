/* Runtime dump - UIWebBrowserFindOnPageHighlighter
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter>
{
    NSMutableArray * _highlightBubbleViews;
    NSArray * _pdfHighlightViews;
    UIView * _highlightHostView;
    UIWebBrowserView * _browserView;
    UIWebPDFViewHandler * _pdfHandler;
    char _zoomToHighlightSelection;
    <UIWebFindOnPageHighlighterDelegate> * _delegate;
    NSString * _searchText;
    unsigned int _numberOfMatches;
    unsigned int _highlightedMatchIndex;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy, nonatomic) NSString * searchText;
@property (nonatomic) <UIWebFindOnPageHighlighterDelegate> * delegate;
@property (readonly, nonatomic) unsigned int numberOfMatches;
@property (readonly, nonatomic) unsigned int highlightedMatchIndex;

+ (char)expandedRectsWouldIntersect:(id)arg0;

- (void)dealloc;
- (void)setDelegate:(<UIWebFindOnPageHighlighterDelegate> *)arg0;
- (<UIWebFindOnPageHighlighterDelegate> *)delegate;
- (NSString *)searchText;
- (void)clearBrowserView;
- (UIWebBrowserFindOnPageHighlighter *)initWithBrowserView:(UIWebBrowserView *)arg0;
- (char)updateHighlightBubbleWobble:(char)arg0;
- (UIWebBrowserFindOnPageHighlighter *)initWithPDFViewHandler:(id /* block */)arg0;
- (void)searchWasCancelled:(id)arg0;
- (void)search:(NSString *)arg0 hasPartialResults:(NSArray *)arg1;
- (void)searchDidFinish:(id)arg0;
- (void)searchLimitHit:(id)arg0;
- (void)searchDidBegin:(id)arg0;
- (void)searchDidTimeOut:(id)arg0;
- (void)_commonInitialize;
- (void)_clearHighlightViews;
- (void)_addContentViewAtIndex:(unsigned int)arg0 withRect:(struct CGRect)arg1;
- (void)_setSelectionRect:(struct CGRect)arg0 textRects:(struct CGSize)arg1 contentImage:(UIImage *)arg2 contentViews:(id)arg3 wobble:(struct CGImage *)arg4;
- (void)setSelectionRect:(struct CGRect)arg0 textRects:(struct CGSize)arg1 contentImage:(UIImage *)arg2 wobble:(id)arg3;
- (unsigned int)findOnPageOptions;
- (char)_updateHighlightedMatchIndex:(char)arg0;
- (NSObject *)_currentPDFSearchResult;
- (void)_highlightFindOnPageMatchForPDF:(char)arg0 withPDFHandler:(id /* block */)arg1;
- (char)_highlightSelection;
- (void)_highlightFindOnPageMatch:(char)arg0;
- (void)setSearchText:(NSString *)arg0 matchLimit:(unsigned int)arg1;
- (void)setSelectionRect:(struct CGRect)arg0 textRects:(struct CGSize)arg1 contentViews:(id)arg2 wobble:(id)arg3;
- (void)highlightNextMatch;
- (void)highlightPreviousMatch;
- (unsigned int)numberOfMatches;
- (unsigned int)highlightedMatchIndex;

@end
