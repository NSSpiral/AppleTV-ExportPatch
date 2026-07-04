/* Runtime dump - UICollectionViewReorderedItem
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewReorderedItem : NSObject
{
    UICollectionViewCell * _cell;
    NSIndexPath * _originalIndexPath;
    NSIndexPath * _targetIndexPath;
}

@property (readonly, nonatomic) UICollectionViewCell * cell;
@property (retain, nonatomic) NSIndexPath * originalIndexPath;
@property (retain, nonatomic) NSIndexPath * targetIndexPath;

- (void)dealloc;
- (UICollectionViewCell *)cell;
- (UICollectionViewReorderedItem *)initWithCell:(UICollectionViewCell *)arg0 indexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)originalIndexPath;
- (void)setOriginalIndexPath:(NSIndexPath *)arg0;
- (NSIndexPath *)targetIndexPath;
- (void)setTargetIndexPath:(NSIndexPath *)arg0;

@end
