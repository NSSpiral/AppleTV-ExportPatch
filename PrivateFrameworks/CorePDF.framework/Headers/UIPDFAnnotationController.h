/* Runtime dump - UIPDFAnnotationController
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate>
{
    UIPDFPageView * _pageView;
    int _lock;
    struct CGPoint _startPoint;
    char _moving;
    UIPDFMarkupAnnotation * _currentAnnotation;
    struct ? _initialRange;
    char _tracking;
    CALayer * _drawingSurface;
    <NSObject><UIPDFAnnotationControllerDelegate> * _delegate;
    struct CGSize _cachedMarginNoteSize;
    char makeUnderlineAnnotation;
    char _allowEditing;
    UIColor * _currentColor;
}

@property (readonly, nonatomic) UIPDFPageView * pageView;
@property (retain, nonatomic) UIPDFAnnotation * currentAnnotation;
@property (nonatomic) char allowEditing;
@property (nonatomic) UIColor * currentColor;
@property (nonatomic) char makeUnderlineAnnotation;
@property (nonatomic) CALayer * drawingSurface;
@property (nonatomic) <NSObject><UIPDFAnnotationControllerDelegate> * delegate;
@property (readonly, nonatomic) char tracking;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)newAnnotation:(struct CGPDFDictionary *)arg0 type:(char *)arg1;
+ (char)pageHasAnnotations:(NSArray *)arg0;
+ (struct CGImage *)newMaskImage:(struct CGPDFPage *)arg0 size:(struct CGSize)arg1;

- (void)dealloc;
- (void)setNeedsDisplay;
- (void)setDelegate:(<NSObject><UIPDFAnnotationControllerDelegate> *)arg0;
- (UIPDFAnnotationController *)init;
- (<NSObject><UIPDFAnnotationControllerDelegate> *)delegate;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (void)lock;
- (void)unlock;
- (void)setView:(NSObject *)arg0;
- (UIPDFPageView *)pageView;
- (UIImage *)marginNoteImage:(UIImage *)arg0;
- (UIPDFAnnotationController *)initWithPageView:(UIPDFPageView *)arg0;
- (void)setDrawingSurface:(CALayer *)arg0;
- (void)layoutAnnotationViews:(id)arg0;
- (void)drawAnnotations:(struct CGContext *)arg0;
- (char)willDoSomethingWithTap:(struct CGPoint)arg0;
- (UIPDFAnnotation *)currentAnnotation;
- (char)willTrackAtPoint:(struct CGPoint)arg0;
- (void)startTracking:(struct CGPoint)arg0;
- (void)tracking:(struct CGPoint)arg0;
- (char)madeInstantAnnotation;
- (void)endTrackingAtPoint:(struct CGPoint)arg0;
- (void)doubleTapRecognized:(id)arg0;
- (char)isLinkAnnotationAt:(struct CGPoint)arg0;
- (char)annotationBriefPressRecognized:(id)arg0;
- (char)annotationLongPressRecognized:(id)arg0;
- (char)annotationSingleTapRecognized:(id)arg0;
- (void)addLinkAnnotationViews;
- (char)willHandleTouchGestureAtPoint:(struct CGPoint)arg0;
- (char)linkAnnotationShouldBegin:(id)arg0;
- (void)setMakeUnderlineAnnotation:(char)arg0;
- (void)_addLinkAnnotationViewFor:(id)arg0;
- (void)setSurfacePosition:(NSObject *)arg0;
- (void)annotationTapRecognized:(id)arg0;
- (void)linkPressRecognized:(id)arg0;
- (void)_addRecognizers:(id)arg0;
- (void)addDrawingSurface:(NSObject *)arg0 view:(NSObject *)arg1;
- (void)_addAnnotationViewFor:(MKAnnotationView *)arg0;
- (struct CGSize)marginNoteImageSize;
- (char)isSelection:(struct CGPDFSelection *)arg0 equalTo:(struct CGPDFSelection *)arg1;
- (char)intersects:(struct CGPDFSelection *)arg0 with:(struct CGPDFSelection *)arg1;
- (void)_initialRange:(struct CGPoint)arg0;
- (char)trackMoved:(struct CGPoint)arg0;
- (char)makeUnderlineAnnotation;
- (UIColor *)currentColor;
- (void)mergeSelectionOfAnnotation:(NSObject *)arg0;
- (id)_linkAnnotationViewAt:(struct CGPoint)arg0;
- (id)linkAnnotationAt:(struct CGPoint)arg0;
- (id)annotationAt:(struct CGPoint)arg0;
- (struct CGPoint)convertPoint:(struct CGPoint)arg0 toSurfaceLayer:(SurfaceLayer *)arg1;
- (struct CGRect)convertRect:(NSObject *)arg0 toSurfaceLayer:(SEL)arg1;
- (void)hostViewDidScroll;
- (void)didEndTrackingAtPoint:(struct CGPoint)arg0;
- (id)annotatePageSelection;
- (void)copyAttributesOf:(id)arg0 to:(NSObject *)arg1;
- (struct CGImage *)newHighlightMaskImageFor:(struct CGRect)arg0;
- (struct CGImage *)underlineImageFor:(struct CGRect)arg0;
- (void)setCurrentAnnotation:(UIPDFAnnotation *)arg0;
- (CALayer *)drawingSurface;
- (char)tracking;
- (char)allowEditing;
- (void)setAllowEditing:(char)arg0;
- (void)setCurrentColor:(UIColor *)arg0;
- (void)addAnnotation:(NSObject *)arg0;

@end
