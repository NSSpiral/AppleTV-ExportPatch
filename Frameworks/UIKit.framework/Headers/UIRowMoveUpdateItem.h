/* Runtime dump - UIRowMoveUpdateItem
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRowMoveUpdateItem : UIUpdateItem
{
    NSIndexPath * _newIndexPath;
}

- (void)dealloc;
- (NSIndexPath *)newIndexPath;
- (UIRowMoveUpdateItem *)initWithOldIndexPath:(NSIndexPath *)arg0 newIndexPath:(NSIndexPath *)arg1;

@end
