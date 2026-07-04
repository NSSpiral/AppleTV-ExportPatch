/* Runtime dump - KNPdfHyperlinkController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPdfHyperlinkController : TSAPdfHyperlinkController
{
    NSArray * mSlides;
    struct CGRect mCanvasRect;
    int mCurrentSlideNumber;
}

@property (nonatomic) int currentSlideNumber;

- (struct CGRect)canvasRect;
- (char)ignoreUrl:(NSURL *)arg0;
- (char)isDestination:(NSObject *)arg0;
- (NSURL *)destinationFromUrl:(NSURL *)arg0;
- (int)currentSlideNumber;
- (void)setCurrentSlideNumber:(int)arg0;
- (void)addHyperlinksForReps:(id)arg0 targetRect:(struct CGRect)arg1 context:(struct CGSize)arg2;
- (KNPdfHyperlinkController *)initWithShow:(KNShow *)arg0;
- (id)nameForSlide:(id)arg0;
- (NSObject *)nameFromIndex:(unsigned int)arg0;
- (int)getFirstNonHiddenIndex:(unsigned int)arg0 delta:(int)arg1;
- (NSString *)currentSlideName;
- (void)dealloc;

@end
