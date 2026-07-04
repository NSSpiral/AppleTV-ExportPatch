/* Runtime dump - UIKeyboardCandidateView_iPad
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate>
{
    UIKeyboardCandidatePageControl * _pageControl;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (float)defaultExtendedControlHeight;

- (UIKeyboardCandidateView_iPad *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(UIScrollView *)arg0;
- (int)_clipCornersOfView:(NSObject *)arg0;
- (void)setCandidateViewExtended:(char)arg0;
- (void)didEndSplitTransition;
- (void)candidateBarDidScroll:(id)arg0;
- (void)updatePageControlStatus;
- (unsigned int)_numberOfColumns:(char)arg0;
- (float)_additionalClipHeight;
- (float)rightButtonYOffset;

@end
