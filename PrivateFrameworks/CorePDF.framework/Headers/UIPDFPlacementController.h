/* Runtime dump - UIPDFPlacementController
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFPlacementController : NSObject
{
    NSMutableArray * _popups;
    struct CGSize _viewSize;
    UIPDFPageView * pageView;
}

@property (nonatomic) UIPDFPageView * pageView;

- (void)dealloc;
- (NSObject *)viewAtIndex:(unsigned int)arg0;
- (UIPDFPageView *)pageView;
- (void)setPageView:(UIPDFPageView *)arg0;
- (UIPDFPlacementController *)initWithAnnotations:(NSArray *)arg0 viewSize:(struct CGSize)arg1;
- (void)layoutViews:(float)arg0;
- (struct CGRect)boundsForObjectAtIndex:(NSObject *)arg0;
- (float)yForObjectAtIndex:(unsigned int)arg0;
- (void)shift:(float)arg0;

@end
