/* Runtime dump - UIKBCandidateCollectionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBCandidateCollectionView : UICollectionView

@property (readonly, nonatomic) NSIndexPath * selectedItemIndexPath;

- (void)configureAsCandidatesBar;
- (NSIndexPath *)selectedItemIndexPath;
- (char)_selectAndScrollToItemAtIndexPath:(NSIndexPath *)arg0 animated:(char)arg1 scrollPosition:(unsigned int)arg2;

@end
