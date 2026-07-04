/* Runtime dump - UITableViewUpdateGap
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewUpdateGap : NSObject
{
    UIUpdateItem * _firstUpdateItem;
    UIUpdateItem * _lastUpdateItem;
    NSMutableArray * _deleteItems;
    NSMutableArray * _insertItems;
    struct ? _gapFlags;
}

@property (retain, nonatomic) UIUpdateItem * firstUpdateItem;
@property (retain, nonatomic) UIUpdateItem * lastUpdateItem;
@property (readonly, nonatomic) NSArray * updateItems;
@property (readonly, nonatomic) NSArray * deleteItems;
@property (readonly, nonatomic) NSArray * insertItems;
@property (readonly, nonatomic) char isDeleteBasedGap;
@property (readonly, nonatomic) char hasInserts;
@property (readonly, nonatomic) char isSectionBasedGap;
@property (readonly, nonatomic) char hasAutomaticAnimationItems;

+ (NSObject *)gapWithUpdateItem:(NSObject *)arg0;

- (void)dealloc;
- (UITableViewUpdateGap *)init;
- (NSString *)description;
- (void)setFirstUpdateItem:(UIUpdateItem *)arg0;
- (void)setLastUpdateItem:(UIUpdateItem *)arg0;
- (void)addUpdateItem:(NSObject *)arg0;
- (char)isDeleteBasedGap;
- (char)hasInserts;
- (NSArray *)updateItems;
- (char)isSectionBasedGap;
- (char)hasAutomaticAnimationItems;
- (UIUpdateItem *)firstUpdateItem;
- (UIUpdateItem *)lastUpdateItem;
- (NSArray *)deleteItems;
- (NSArray *)insertItems;

@end
