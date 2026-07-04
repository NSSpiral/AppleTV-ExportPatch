/* Runtime dump - UIPrintPageRenderer
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPageRenderer : NSObject
{
    float _headerHeight;
    float _footerHeight;
    struct CGRect _paperRect;
    struct CGRect _printableRect;
    NSMutableArray * _printFormatters;
    struct CGContext * _printContext;
}

@property (nonatomic) float headerHeight;
@property (nonatomic) float footerHeight;
@property (nonatomic) struct CGRect paperRect;
@property (nonatomic) struct CGRect printableRect;
@property (copy, nonatomic) NSArray * printFormatters;

- (void)dealloc;
- (int)numberOfPages;
- (struct CGRect)printableRect;
- (void)_removePrintFormatter:(NSObject *)arg0;
- (float)headerHeight;
- (float)footerHeight;
- (struct CGRect)paperRect;
- (void)setPaperRect:(struct CGRect)arg0;
- (void)setPrintableRect:(struct CGRect)arg0;
- (void)addPrintFormatter:(NSObject *)arg0 startingAtPageAtIndex:(int)arg1;
- (void)prepareForDrawingPages:(struct _NSRange)arg0;
- (char)_startPrintContext:(NSObject *)arg0 printSettings:(PKPrintSettings *)arg1;
- (void)_drawPage:(int)arg0;
- (void)_endPrintContext:(NSObject *)arg0 success:(char)arg1;
- (int)_maxFormatterPage;
- (void)drawHeaderForPageAtIndex:(int)arg0 inRect:(struct CGRect)arg1;
- (void)drawContentForPageAtIndex:(int)arg0 inRect:(struct CGRect)arg1;
- (void)drawPrintFormatter:(NSObject *)arg0 forPageAtIndex:(int)arg1;
- (void)drawFooterForPageAtIndex:(int)arg0 inRect:(struct CGRect)arg1;
- (void)drawPageAtIndex:(int)arg0 inRect:(struct CGRect)arg1;
- (void)setPrintFormatters:(NSArray *)arg0;
- (NSObject *)printFormattersForPageAtIndex:(int)arg0;
- (void)setHeaderHeight:(float)arg0;
- (void)setFooterHeight:(float)arg0;
- (NSArray *)printFormatters;

@end
