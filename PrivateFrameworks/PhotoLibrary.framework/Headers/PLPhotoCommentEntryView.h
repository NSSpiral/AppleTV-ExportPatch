/* Runtime dump - PLPhotoCommentEntryView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoCommentEntryView : UIView <UITextViewDelegate>
{
    UILabel * placeholderLabel;
    UILabel * _placeholderLabel;
    UITextView * _textView;
    UIButton * _postButton;
    <PLPhotoCommentEntryViewDelegate> * _delegate;
}

@property (readonly, retain, nonatomic) UITextView * textView;
@property (readonly, retain, nonatomic) UILabel * placeholderLabel;
@property (readonly, retain, nonatomic) UIButton * postButton;
@property (nonatomic) <PLPhotoCommentEntryViewDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (float)preferredHeight;
- (PLPhotoCommentEntryView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<PLPhotoCommentEntryViewDelegate> *)arg0;
- (void)layoutSubviews;
- (<PLPhotoCommentEntryViewDelegate> *)delegate;
- (void)setText:(NSString *)arg0;
- (void)clearText;
- (void)textViewDidChange:(UITextView *)arg0;
- (UITextView *)textView;
- (UILabel *)placeholderLabel;
- (UIButton *)postButton;
- (NSString *)trimmedText;

@end
