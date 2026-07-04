/* Runtime dump - GQHKeynoteState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHKeynoteState : GQHState
{
    int mCurrentSlide;
    struct CGSize mSlideSize;
    int mProgressiveIndex;
}

- (char)shouldMapLinkWithUrl:(struct __CFString *)arg0;
- (void)setProgressiveIndex:(int)arg0;
- (void)incrementCurrentSlide;
- (char)shouldStreamContent;
- (int)progressiveIndex;
- (void).cxx_construct;
- (int)currentSlide;
- (struct CGSize)slideSize;
- (void)setSlideSize:(struct CGSize)arg0;

@end
