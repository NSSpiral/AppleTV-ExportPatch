/* Runtime dump - UITableViewSection
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewSection : NSObject <NSCoding>
{
    NSString * _headerTitle;
    UIView * _headerView;
    NSString * _footerTitle;
    UIView * _footerView;
    NSArray * _rows;
}

@property (copy, nonatomic) NSString * headerTitle;
@property (retain, nonatomic) UIView * headerView;
@property (copy, nonatomic) NSString * footerTitle;
@property (retain, nonatomic) UIView * footerView;
@property (copy, nonatomic) NSArray * rows;

+ (NSArray *)sectionWithRows:(NSArray *)arg0;

- (void)dealloc;
- (UITableViewSection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIView *)headerView;
- (void)setHeaderView:(UIView *)arg0;
- (NSArray *)rows;
- (void)setRows:(NSArray *)arg0;
- (NSString *)headerTitle;
- (void)setHeaderTitle:(NSString *)arg0;
- (NSString *)footerTitle;
- (void)setFooterTitle:(NSString *)arg0;
- (UIView *)footerView;
- (void)setFooterView:(UIView *)arg0;

@end
