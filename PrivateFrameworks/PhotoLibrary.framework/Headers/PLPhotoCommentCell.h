/* Runtime dump - PLPhotoCommentCell
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoCommentCell : UITableViewCell
{
    UILabel * _commentContentLabel;
    UILabel * _commentBylineLabel;
    UIView * _styledSeparatorView;
    PLCloudSharedComment * _comment;
}

@property (copy, nonatomic) PLCloudSharedComment * comment;
@property (readonly, retain, nonatomic) UILabel * commentContentLabel;
@property (readonly, retain, nonatomic) UILabel * commentBylineLabel;
@property (readonly, retain, nonatomic) UIView * styledSeparatorView;

+ (Class)layerClass;
+ (float)heightForComment:(id)arg0 forWidth:(float)arg1 forInterfaceOrientation:(int)arg2;
+ (NSString *)_synthesizedAttributedString:(NSString *)arg0 withWordWrapping:(char)arg1;
+ (PLPhotoCommentCell *)_commentStringForComment:(id)arg0;
+ (PLPhotoCommentCell *)_attributionStringForComment:(id)arg0;

- (void)dealloc;
- (void)layoutSubviews;
- (PLPhotoCommentCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)prepareForReuse;
- (void)delete:(IDSMessageToDelete *)arg0;
- (void)setComment:(PLCloudSharedComment *)arg0;
- (void)_updateContent;
- (UIView *)styledSeparatorView;
- (UILabel *)commentContentLabel;
- (UILabel *)commentBylineLabel;
- (PLCloudSharedComment *)comment;

@end
