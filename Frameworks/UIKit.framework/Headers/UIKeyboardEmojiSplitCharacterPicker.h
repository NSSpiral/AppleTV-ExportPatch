/* Runtime dump - UIKeyboardEmojiSplitCharacterPicker
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiCollectionInputView

- (void)dealloc;
- (void)didMoveToWindow;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg0 withVelocity:(struct CGPoint)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (void)reloadForCategory:(int)arg0;
- (UIKeyboardEmojiSplitCharacterPicker *)initWithFrame:(struct CGRect)arg0 keyplane:(struct CGSize)arg1 key:(NSString *)arg2;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg0 layout:(NSObject *)arg1 insetForSectionAtIndex:(int)arg2;
- (float)collectionView:(UICollectionView *)arg0 layout:(NSObject *)arg1 minimumLineSpacingForSectionAtIndex:(int)arg2;
- (float)collectionView:(UICollectionView *)arg0 layout:(NSObject *)arg1 minimumInteritemSpacingForSectionAtIndex:(int)arg2;
- (float)snappedYOffsetForOffset:(float)arg0;

@end
