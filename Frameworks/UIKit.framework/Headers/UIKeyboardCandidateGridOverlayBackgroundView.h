/* Runtime dump - UIKeyboardCandidateGridOverlayBackgroundView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateGridOverlayBackgroundView : UICollectionReusableView
{
    float _rowHeight;
    unsigned int _highlightedRowIndex;
}

@property (nonatomic) float rowHeight;
@property (nonatomic) unsigned int highlightedRowIndex;

+ (struct CGColor *)backgroundColor;
+ (NSString *)reuseIdentifier;
+ (UIKeyboardCandidateGridOverlayBackgroundView *)collectionViewKind;

- (void)drawRect:(struct CGRect)arg0;
- (void)setRowHeight:(float)arg0;
- (float)rowHeight;
- (void)setHighlightedRowIndex:(unsigned int)arg0;
- (void)applyLayoutAttributes:(NSDictionary *)arg0;
- (unsigned int)highlightedRowIndex;

@end
