/* Runtime dump - UIPrintFormatter
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintFormatter : NSObject <NSCopying>
{
    UIPrintPageRenderer * _printPageRenderer;
    float _maximumContentHeight;
    float _maximumContentWidth;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _perPageContentInsets;
    int _startPage;
    int _pageCount;
    char _needsRecalc;
}

@property (nonatomic) UIPrintPageRenderer * printPageRenderer;
@property (nonatomic) float maximumContentHeight;
@property (nonatomic) float maximumContentWidth;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) struct UIEdgeInsets perPageContentInsets;
@property (nonatomic) int startPage;
@property (readonly, nonatomic) int pageCount;

- (UIPrintFormatter *)init;
- (UIPrintFormatter *)copyWithZone:(struct _NSZone *)arg0;
- (int)pageCount;
- (void)_setNeedsRecalc;
- (int)_recalcPageCount;
- (void)_recalcIfNecessary;
- (struct CGRect)_pageContentRect:(NSObject *)arg0;
- (void)removeFromPrintPageRenderer;
- (void)setMaximumContentWidth:(float)arg0;
- (void)setMaximumContentHeight:(float)arg0;
- (void)setContentInsets:(struct UIEdgeInsets)arg0;
- (void)setPerPageContentInsets:(struct UIEdgeInsets)arg0;
- (void)setPrintPageRenderer:(UIPrintPageRenderer *)arg0;
- (struct CGRect)rectForPageAtIndex:(NSObject *)arg0;
- (void)drawInRect:(struct CGRect)arg0 forPageAtIndex:(struct CGSize)arg1;
- (UIPrintPageRenderer *)printPageRenderer;
- (float)maximumContentHeight;
- (float)maximumContentWidth;
- (struct UIEdgeInsets)contentInsets;
- (struct UIEdgeInsets)perPageContentInsets;
- (int)startPage;
- (void)setStartPage:(int)arg0;

@end
