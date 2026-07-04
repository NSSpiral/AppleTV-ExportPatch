/* Runtime dump - UICollectionViewLayoutInvalidationContext
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewLayoutInvalidationContext : NSObject
{
    NSMutableSet * _invalidatedItemIndexPaths;
    NSMutableDictionary * _invalidatedSupplementaryIndexPaths;
    NSMutableDictionary * _invalidatedDecorationIndexPaths;
    NSArray * _updateItems;
    struct CGPoint _contentOffsetAdjustment;
    struct CGSize _contentSizeAdjustment;
    struct ? _invalidationContextFlags;
}

@property (nonatomic) char invalidateEverything;
@property (nonatomic) char invalidateDataSourceCounts;
@property (readonly, nonatomic) NSArray * invalidatedItemIndexPaths;
@property (readonly, nonatomic) NSDictionary * invalidatedSupplementaryIndexPaths;
@property (readonly, nonatomic) NSDictionary * invalidatedDecorationIndexPaths;
@property (nonatomic) struct CGPoint contentOffsetAdjustment;
@property (nonatomic) struct CGSize contentSizeAdjustment;
@property (nonatomic) NSArray * updateItems;

- (void)dealloc;
- (char)invalidateEverything;
- (void)_setInvalidateEverything:(char)arg0;
- (char)invalidateDataSourceCounts;
- (void)_setInvalidateDataSourceCounts:(char)arg0;
- (NSArray *)invalidatedItemIndexPaths;
- (void)invalidateItemsAtIndexPaths:(NSArray *)arg0;
- (NSArray *)_updateItems;
- (id)_invalidatedSupplementaryViews;
- (void)_setUpdateItems:(NSArray *)arg0;
- (NSDictionary *)invalidatedSupplementaryIndexPaths;
- (NSDictionary *)invalidatedDecorationIndexPaths;
- (struct CGPoint)contentOffsetAdjustment;
- (struct CGSize)contentSizeAdjustment;
- (void)_invalidateSupplementaryElementsOfKind:(id)arg0 atIndexPaths:(NSArray *)arg1;
- (void)_setInvalidatedSupplementaryViews:(id)arg0;
- (void)invalidateSupplementaryElementsOfKind:(id)arg0 atIndexPaths:(NSArray *)arg1;
- (void)invalidateDecorationElementsOfKind:(id)arg0 atIndexPaths:(NSArray *)arg1;
- (void)setContentOffsetAdjustment:(struct CGPoint)arg0;
- (void)setContentSizeAdjustment:(struct CGSize)arg0;

@end
