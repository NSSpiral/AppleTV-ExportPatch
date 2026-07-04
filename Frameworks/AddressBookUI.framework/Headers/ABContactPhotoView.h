/* Runtime dump - ABContactPhotoView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource>
{
    char _editing;
    char _modified;
    char _isAnimatingBounce;
    CNContact * _contact;
    <ABPresenterDelegate> * _delegate;
    <ABContactPhotoViewDelegate> * _photoViewDelegate;
    NSDictionary * _photoPickerInfo;
    UIImage * _currentThumbnailImage;
    UIImage * _currentImage;
    UIImageView * _contactImageView;
    UILabel * _addPhotoLabel;
    UILabel * _editPhotoLabel;
    UIImageView * _attributionImageView;
    UIGestureRecognizer * _tapGesture;
}

@property (retain, nonatomic) CNContact * contact;
@property (nonatomic) char editing;
@property (nonatomic) char modified;
@property (nonatomic) <ABPresenterDelegate> * delegate;
@property (nonatomic) <ABContactPhotoViewDelegate> * photoViewDelegate;
@property (retain, nonatomic) NSDictionary * photoPickerInfo;
@property (retain, nonatomic) UIImage * currentThumbnailImage;
@property (retain, nonatomic) UIImage * currentImage;
@property (retain, nonatomic) UIImageView * contactImageView;
@property (retain, nonatomic) UILabel * addPhotoLabel;
@property (retain, nonatomic) UILabel * editPhotoLabel;
@property (retain, nonatomic) UIImageView * attributionImageView;
@property (nonatomic) char isAnimatingBounce;
@property (retain, nonatomic) UIGestureRecognizer * tapGesture;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)supportedPasteboardTypes;

- (CNContact *)contact;
- (void)setContact:(CNContact *)arg0;
- (char)modified;
- (ABContactPhotoView *)initWithContact:(CNContact *)arg0 frame:(struct CGRect)arg1;
- (void)resetPhoto;
- (void)updatePhoto;
- (void)saveEdits;
- (void)updateFontSizes;
- (void)menuWillHide:(id)arg0;
- (void)disablePhotoTapGesture;
- (void)setPhotoViewDelegate:(<ABContactPhotoViewDelegate> *)arg0;
- (void)tapGesture:(UIGestureRecognizer *)arg0;
- (UIGestureRecognizer *)tapGesture;
- (void)longPressGesture:(NSObject *)arg0;
- (UILabel *)editPhotoLabel;
- (UILabel *)addPhotoLabel;
- (UIImageView *)contactImageView;
- (UIImageView *)attributionImageView;
- (NSObject *)currentImageDataAndCropRect:(struct CGRect *)arg0;
- (UIImage *)currentThumbnailImage;
- (NSDictionary *)photoPickerInfo;
- (void)setCurrentThumbnailImage:(UIImage *)arg0;
- (NSMutableDictionary *)currentImageData;
- (void)_presentPhotoEditingSheet;
- (void)_zoomContactPhoto;
- (void)setHighlightedFrame:(char)arg0;
- (void)setCurrentImage:(UIImage *)arg0;
- (void)setPhotoPickerInfo:(NSDictionary *)arg0;
- (void)setModified:(char)arg0;
- (void)updatePhotoWithImage:(UIImage *)arg0;
- (void)updateAttributionBadge;
- (<ABContactPhotoViewDelegate> *)photoViewDelegate;
- (void)setAttributionImageView:(UIImageView *)arg0;
- (id)_createImagePicker;
- (NSData *)_createImagePickerForEditingImageData:(NSData *)arg0 withCropRect:(struct CGRect)arg1;
- (void)_presentFullScreenPhoto:(UIImage *)arg0;
- (void)_bounceSmallPhoto;
- (NSString *)previewPath;
- (char)isAnimatingBounce;
- (void)setIsAnimatingBounce:(char)arg0;
- (void)setContactImageView:(UIImageView *)arg0;
- (void)setAddPhotoLabel:(UILabel *)arg0;
- (void)setEditPhotoLabel:(UILabel *)arg0;
- (void)setTapGesture:(UIGestureRecognizer *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ABPresenterDelegate> *)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (<ABPresenterDelegate> *)delegate;
- (char)canPerformAction:(SEL)arg0 withSender:(NSObject *)arg1;
- (char)canBecomeFirstResponder;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (char)isEditing;
- (void)setEditing:(char)arg0;
- (UIImage *)currentImage;
- (void)copy:(id)arg0;
- (void)paste:(id)arg0;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg0;
- (void)imagePickerController:(UIImagePickerController *)arg0 didFinishPickingMediaWithInfo:(NSDictionary *)arg1;
- (struct CGRect)previewController:(QLPreviewController *)arg0 frameForPreviewItem:(SEL)arg1 inSourceView:(NSObject *)arg2;
- (void)previewControllerDidDismiss:(id)arg0;
- (NSObject *)previewController:(QLPreviewController *)arg0 transitionImageForPreviewItem:(NSObject *)arg1 contentRect:(struct CGRect *)arg2;
- (int)numberOfPreviewItemsInPreviewController:(BRController *)arg0;
- (NSObject *)previewController:(QLPreviewController *)arg0 previewItemAtIndex:(int)arg1;
- (char)hasPhoto;

@end
