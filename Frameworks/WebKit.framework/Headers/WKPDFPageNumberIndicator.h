/* Runtime dump - WKPDFPageNumberIndicator
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKPDFPageNumberIndicator : UIView
{
    struct RetainPtr<UILabel> _label;
    struct RetainPtr<_UIBackdropView> _backdropView;
    struct RetainPtr<NSTimer> _timer;
    BOOL _hasValidPageCountAndCurrentPage;
    unsigned int _currentPageNumber;
    unsigned int _pageCount;
}

@property (nonatomic) unsigned int currentPageNumber;
@property (nonatomic) unsigned int pageCount;

- (void)hide;
- (void)show;
- (WKPDFPageNumberIndicator *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)_updateLabel;
- (unsigned int)pageCount;
- (void).cxx_construct;
- (void)setPageCount:(unsigned int)arg0;
- (void).cxx_destruct;
- (void)_makeRoundedCorners;
- (void)setCurrentPageNumber:(unsigned int)arg0;
- (void)moveToPoint:(struct CGPoint)arg0 animated:(char)arg1;
- (void)hide:(id)arg0;
- (unsigned int)currentPageNumber;

@end
