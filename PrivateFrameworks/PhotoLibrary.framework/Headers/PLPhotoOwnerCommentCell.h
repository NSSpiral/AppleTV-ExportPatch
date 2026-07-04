/* Runtime dump - PLPhotoOwnerCommentCell
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoOwnerCommentCell : UITableViewCell
{
    NSAttributedString * _ownerString;
    UILabel * _ownerContentLabel;
    UIView * _styledSeparatorView;
}

@property (copy, nonatomic) NSAttributedString * ownerString;
@property (readonly, retain, nonatomic) UILabel * ownerContentLabel;
@property (readonly, retain, nonatomic) UIView * styledSeparatorView;

+ (float)heightOfOwnerCellWithAsset:(NSSet *)arg0 forWidth:(float)arg1 forInterfaceOrientation:(int)arg2;
+ (NSSet *)_ownerStringForAsset:(NSSet *)arg0;

- (void)dealloc;
- (void)layoutSubviews;
- (PLPhotoOwnerCommentCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)prepareForReuse;
- (void)updateContentFromAsset:(NSSet *)arg0;
- (void)setOwnerString:(NSAttributedString *)arg0;
- (NSAttributedString *)ownerString;
- (UILabel *)ownerContentLabel;
- (UIView *)styledSeparatorView;

@end
