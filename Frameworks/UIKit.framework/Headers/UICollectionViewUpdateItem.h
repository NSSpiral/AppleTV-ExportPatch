/* Runtime dump - UICollectionViewUpdateItem
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewUpdateItem : NSObject
{
    NSIndexPath * _initialIndexPath;
    NSIndexPath * _finalIndexPath;
    int _updateAction;
    id _gap;
}

@property (readonly, nonatomic) NSIndexPath * indexPathBeforeUpdate;
@property (readonly, nonatomic) NSIndexPath * indexPathAfterUpdate;
@property (readonly, nonatomic) int updateAction;
@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) NSIndexPath * indexPath;
@property (nonatomic) id gap;
@property (readonly, nonatomic) char isSectionOperation;
@property (retain, nonatomic) NSIndexPath * newIndexPath;

- (void)dealloc;
- (NSString *)description;
- (int)inverseCompareIndexPaths:(NSArray *)arg0;
- (int)compareIndexPaths:(NSArray *)arg0;
- (NSString *)_indexPath;
- (UICollectionViewUpdateItem *)initWithOldIndexPath:(NSIndexPath *)arg0 newIndexPath:(NSIndexPath *)arg1;
- (int)_action;
- (UITableViewUpdateGap *)_gap;
- (NSString *)_newIndexPath;
- (char)_isSectionOperation;
- (void)_setGap:(id)arg0;
- (UICollectionViewUpdateItem *)initWithAction:(int)arg0 forIndexPath:(NSIndexPath *)arg1;
- (UICollectionViewUpdateItem *)initWithInitialIndexPath:(NSIndexPath *)arg0 finalIndexPath:(NSIndexPath *)arg1 updateAction:(int)arg2;
- (void)_setNewIndexPath:(NSIndexPath *)arg0;
- (int)updateAction;
- (NSIndexPath *)indexPathBeforeUpdate;
- (NSIndexPath *)indexPathAfterUpdate;

@end
