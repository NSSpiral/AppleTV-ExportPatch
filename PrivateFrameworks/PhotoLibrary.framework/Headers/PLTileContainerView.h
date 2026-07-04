/* Runtime dump - PLTileContainerView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTileContainerView : UIView
{
    PLPhotoTileViewController * _photoTileController;
}

- (PLTileContainerView *)initWithFrame:(struct CGRect)arg0;
- (char)canBecomeFirstResponder;
- (void)willMoveToSuperview:(UIView *)arg0;
- (PLTileContainerView *)initWithFrame:(struct CGRect)arg0 photoTileController:(struct CGSize)arg1;
- (void)clearBackReference;

@end
