/* Runtime dump - PLEmptyAlbumView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLEmptyAlbumView : UIView
{
    UIImage * _image;
    UIImage * _landscapeImage;
    NSString * _title;
    NSString * _message;
    struct NSObject * _album;
    UIImageView * _imageView;
    UILabel * _titleLabel;
    UILabel * _messageLabel;
    UILongPressGestureRecognizer * _longPressRecognizer;
    int _filter;
    char _isCameraAlbum;
    char _useLargeImages;
    char _filterInUse;
    int _currentOrientation;
    struct UIEdgeInsets _edgeInsets;
    char _isSharedPhotoStreamList;
}

@property (retain, nonatomic) NSObject<PLAlbumProtocol> * album;
@property (nonatomic) int filter;
@property (nonatomic) struct UIEdgeInsets edgeInsets;

- (PLEmptyAlbumView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (void)touchesBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (char)canPerformAction:(SEL)arg0 withSender:(NSObject *)arg1;
- (struct UIEdgeInsets)edgeInsets;
- (void)setFilter:(int)arg0;
- (char)canBecomeFirstResponder;
- (void)paste:(id)arg0;
- (void)setMessage:(NSString *)arg0;
- (void)setEdgeInsets:(struct UIEdgeInsets)arg0;
- (void)_longPressGesture:(NSObject *)arg0;
- (PLEmptyAlbumView *)initWithFrame:(struct CGRect)arg0 useLargeImages:(struct CGSize)arg1;
- (id)_titleForAlbum:(struct NSObject *)arg0;
- (NSString *)_newLabelWithText:(NSString *)arg0;
- (id)_messageForAlbum:(struct NSObject *)arg0;
- (NSString *)_newTextViewWithText:(NSString *)arg0;
- (void)_sizeLabelToFitView:(NSObject *)arg0;
- (id)_emptyRollImageForAlbum:(struct NSObject *)arg0 interfaceOrientation:(int)arg1;
- (void)setPortraitImage:(UIImage *)arg0 landscapeImage:(UIImage *)arg1;
- (void)setIsCameraAlbum:(char)arg0;
- (void)setIsSharedPhotoStreamList:(char)arg0;
- (int)filter;
- (void)setAlbum:(struct NSObject *)arg0;
- (struct NSObject *)album;

@end
