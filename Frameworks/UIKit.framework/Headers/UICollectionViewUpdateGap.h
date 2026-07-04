/* Runtime dump - UICollectionViewUpdateGap
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICollectionViewUpdateGap : NSObject
{
    UICollectionViewUpdateItem * _firstUpdateItem;
    UICollectionViewUpdateItem * _lastUpdateItem;
    NSMutableArray * _deleteItems;
    NSMutableArray * _insertItems;
    struct CGRect _beginningRect;
    struct CGRect _endingRect;
}

@property (retain, nonatomic) UICollectionViewUpdateItem * firstUpdateItem;
@property (retain, nonatomic) UICollectionViewUpdateItem * lastUpdateItem;
@property (readonly, nonatomic) NSArray * updateItems;
@property (readonly, nonatomic) NSArray * deleteItems;
@property (readonly, nonatomic) NSArray * insertItems;
@property (readonly, nonatomic) char isDeleteBasedGap;
@property (readonly, nonatomic) char hasInserts;
@property (readonly, nonatomic) char isSectionBasedGap;
@property (nonatomic) struct CGRect beginningRect;
@property (nonatomic) struct CGRect endingRect;

+ (NSObject *)gapWithUpdateItem:(NSObject *)arg0;

- (void)dealloc;
- (UICollectionViewUpdateGap *)init;
- (NSString *)description;
- (void)setFirstUpdateItem:(UICollectionViewUpdateItem *)arg0;
- (void)setLastUpdateItem:(UICollectionViewUpdateItem *)arg0;
- (void)addUpdateItem:(NSObject *)arg0;
- (char)isDeleteBasedGap;
- (char)hasInserts;
- (NSArray *)updateItems;
- (char)isSectionBasedGap;
- (UICollectionViewUpdateItem *)firstUpdateItem;
- (UICollectionViewUpdateItem *)lastUpdateItem;
- (NSArray *)deleteItems;
- (NSArray *)insertItems;
- (struct CGRect)beginningRect;
- (void)setBeginningRect:(struct CGRect)arg0;
- (struct CGRect)endingRect;
- (void)setEndingRect:(struct CGRect)arg0;

@end
