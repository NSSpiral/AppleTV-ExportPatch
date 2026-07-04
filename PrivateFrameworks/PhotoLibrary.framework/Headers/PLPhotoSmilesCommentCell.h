/* Runtime dump - PLPhotoSmilesCommentCell
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoSmilesCommentCell : UITableViewCell
{
    char _showUserLikes;
    char _isVideo;
    UILabel * _smileContentLabel;
    UIButton * _smileImageButton;
    NSOrderedSet * _userLikes;
}

@property (readonly, retain, nonatomic) UIButton * smileImageButton;
@property (nonatomic) char showUserLikes;
@property (copy, nonatomic) NSOrderedSet * userLikes;
@property (nonatomic) char isVideo;
@property (readonly, retain, nonatomic) UILabel * smileContentLabel;

+ (float)heightOfSmileCellWithComments:(id)arg0 forWidth:(float)arg1 isVideo:(char)arg2 forInterfaceOrientation:(int)arg3;
+ (PLPhotoSmilesCommentCell *)_smileStringForComments:(id)arg0;
+ (PLPhotoSmilesCommentCell *)_attributedStringForComments:(id)arg0 color:(UIColor *)arg1 isVideo:(char)arg2;

- (void)dealloc;
- (void)layoutSubviews;
- (PLPhotoSmilesCommentCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)prepareForReuse;
- (char)isVideo;
- (UIButton *)smileImageButton;
- (void)setShowUserLikes:(char)arg0;
- (void)setUserLikes:(NSOrderedSet *)arg0;
- (void)_updateContent;
- (UILabel *)smileContentLabel;
- (char)showUserLikes;
- (NSOrderedSet *)userLikes;
- (void)setIsVideo:(char)arg0;

@end
