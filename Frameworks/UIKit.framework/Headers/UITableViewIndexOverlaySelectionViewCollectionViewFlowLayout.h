/* Runtime dump - UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    struct CGRect _frameForDoneButton;
    float _rightMarginForDoneButton;
}

@property (nonatomic) struct CGRect frameForDoneButton;
@property (nonatomic) float rightMarginForDoneButton;

+ (Class)layoutAttributesClass;

- (NSObject *)layoutAttributesForElementsInRect:(struct CGRect)arg0;
- (UICollectionViewLayoutAttributes *)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(NSIndexPath *)arg1;
- (float)rightMarginForDoneButton;
- (struct CGRect)frameForDoneButton;
- (void)setFrameForDoneButton:(struct CGRect)arg0;
- (void)setRightMarginForDoneButton:(float)arg0;

@end
