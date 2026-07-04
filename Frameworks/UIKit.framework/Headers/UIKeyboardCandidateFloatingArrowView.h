/* Runtime dump - UIKeyboardCandidateFloatingArrowView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateFloatingArrowView : UICollectionReusableView
{
    UIButton * _arrowButton;
}

@property (retain, nonatomic) UIButton * arrowButton;

+ (NSString *)reuseIdentifier;
+ (UIKeyboardCandidateFloatingArrowView *)collectionViewKind;

- (UIKeyboardCandidateFloatingArrowView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)prepareForReuse;
- (UIButton *)arrowButton;
- (void)applyLayoutAttributes:(NSDictionary *)arg0;
- (void)updateArrow;
- (void)setArrowButton:(UIButton *)arg0;

@end
