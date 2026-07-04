/* Runtime dump - UIPDFSearchHighlightsController
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFSearchHighlightsController : NSObject
{
    NSMutableArray * _searchHighlightLayers;
    UIPDFPageView * _pageView;
    struct CGColor * _highlightColor;
    struct CGColor * _borderColor;
    struct CGColor * _shadowColor;
    char _pageRendered;
    NSMutableArray * _rectangles;
    UIPDFSelection * _selection;
}

- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0;
- (UIPDFSearchHighlightsController *)initWithPageView:(UIPDFPageView *)arg0;
- (void)addSearchHighlightForSelection:(id)arg0 animated:(char)arg1;
- (void)clearSearchHighlights;
- (char)hasSearchHighlights;
- (void)pageDidRender:(id)arg0;
- (void)_addAnimation:(NSObject *)arg0;
- (void)_addAnimation2:(NSObject *)arg0;
- (struct CGRect)unionFrom:(NSObject *)arg0 to:(SEL)arg1;
- (void)makeType1Shadow:(struct CGPath *)arg0 rect:(struct CGRect)arg1 inset:(struct CGSize)arg2;
- (void)makeType2Shadow:(struct CGPath *)arg0 rect:(struct CGRect)arg1;
- (void)addSearchHighlightForRotatedSelection:(id)arg0 animated:(char)arg1;
- (unsigned int)indexOfColumnBreakStartingAt:(unsigned int)arg0;
- (void)makeType1Path:(struct CGPath *)arg0 shadowPath:(struct CGPath *)arg1;
- (void)addLayer:(struct CGRect)arg0 path:(struct CGSize)arg1 shadowPath:(struct CGPath *)arg2 animated:(struct CGPath *)arg3;
- (void)makeType2Path:(struct CGPath *)arg0 to:(unsigned int)arg1 shadowPath:(struct CGPath *)arg2;
- (void)makeType3Path:(struct CGPath *)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2 shadowPath:(struct CGPath *)arg3;
- (void)makeType4Path:(struct CGPath *)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2 shadowPath:(struct CGPath *)arg3;

@end
