/* Runtime dump - UIUpdateItem
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIUpdateItem : NSObject
{
    int _action;
    NSIndexPath * _indexPath;
    int _animation;
    float _offset;
    UITableViewUpdateGap * _gap;
    char _headerFooterOnly;
    char _skipAnimation;
}

@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) NSIndexPath * indexPath;
@property (nonatomic) int animation;
@property (nonatomic) float offset;
@property (nonatomic) char headerFooterOnly;
@property (nonatomic) char skipAnimation;
@property (nonatomic) UITableViewUpdateGap * gap;

- (void)dealloc;
- (NSIndexPath *)indexPath;
- (int)action;
- (int)animation;
- (int)inverseCompareIndexPaths:(NSArray *)arg0;
- (int)compareIndexPaths:(NSArray *)arg0;
- (char)isSectionOperation;
- (UIUpdateItem *)initWithAction:(int)arg0 forIndexPath:(NSIndexPath *)arg1 animation:(int)arg2;
- (char)headerFooterOnly;
- (void)setHeaderFooterOnly:(char)arg0;
- (void)setOffset:(float)arg0;
- (float)offset;
- (void)setGap:(UITableViewUpdateGap *)arg0;
- (void)setAnimation:(int)arg0;
- (NSString *)_actionDescription;
- (UITableViewUpdateGap *)gap;
- (char)skipAnimation;
- (void)setSkipAnimation:(char)arg0;

@end
