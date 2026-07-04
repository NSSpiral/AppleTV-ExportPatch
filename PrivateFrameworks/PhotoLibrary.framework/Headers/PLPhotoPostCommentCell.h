/* Runtime dump - PLPhotoPostCommentCell
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoPostCommentCell : UITableViewCell
{
    UILabel * _contentLabel;
    UIButton * _addCommentButton;
    UIView * _styledSeparatorView;
}

@property (readonly, retain, nonatomic) UIButton * addCommentButton;
@property (readonly, retain, nonatomic) UILabel * contentLabel;
@property (readonly, retain, nonatomic) UIView * styledSeparatorView;

+ (float)heightForWidth:(float)arg0;

- (void)dealloc;
- (void)layoutSubviews;
- (PLPhotoPostCommentCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (UIButton *)addCommentButton;
- (void)setupContent;
- (UIView *)styledSeparatorView;
- (UILabel *)contentLabel;

@end
