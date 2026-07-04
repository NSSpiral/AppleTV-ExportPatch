/* Runtime dump - ABPersonImageView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonImageView : ABPasteboardControl
{
    UIImageView * _personImageView;
    UIImageView * _editingImageView;
    ABClippingImageView * _emptyImageView;
    ABClippingImageView * _pasteboardMaskImageView;
    UIImage * _personImage;
    char _isEditing;
    char _showLabel;
    char _needsReflow;
    char _needsReload;
    char _allowsEditing;
    char _multiplePhotoBackdropEnabled;
    ABUIPerson * _displayedPerson;
    <ABStyleProvider> * _styleProvider;
    <ABPersonImageDataDelegate> * _imageDataDelegate;
}

@property (retain, nonatomic) ABUIPerson * displayedPerson;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;
@property (nonatomic) char allowsEditing;
@property (nonatomic) char multiplePhotoBackdropEnabled;
@property (nonatomic) <ABPersonImageDataDelegate> * imageDataDelegate;
@property (readonly, nonatomic) UIImage * maskImage;
@property (readonly, nonatomic) UIImage * backgroundImage;
@property (readonly, nonatomic) UIImage * overlayImage;
@property (readonly, nonatomic) UIImage * attributionImage;

+ (NSString *)newImageWithName:(NSString *)arg0;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (void)setDisplayedPerson:(ABUIPerson *)arg0;
- (void)setNeedsReload;
- (ABPersonImageView *)initWithFrame:(struct CGRect)arg0 styleProvider:(struct CGSize)arg1;
- (ABUIPerson *)displayedPerson;
- (UIImageView *)personImageView;
- (void)setImageDataDelegate:(<ABPersonImageDataDelegate> *)arg0;
- (<ABPersonImageDataDelegate> *)imageDataDelegate;
- (void)setIsEditing:(char)arg0 animate:(char)arg1;
- (char)abShouldShowMenu;
- (void)abMenuControllerWillShow:(id)arg0;
- (void)abMenuControllerWillHide;
- (UIImage *)maskImage;
- (UIImage *)overlayImage;
- (UIImage *)attributionImage;
- (void)_drawEditLabelInFrame:(struct CGRect)arg0;
- (UIImageView *)editingImageView;
- (UIImage *)framedPhoto;
- (ABClippingImageView *)emptyImageView;
- (void)reflow;
- (void)reloadIfNeeded;
- (void)reflowIfNeeded;
- (NSObject *)copyDefaultImageForPerson:(NSObject *)arg0;
- (void)setNeedsReflow;
- (ABClippingImageView *)pasteboardMaskImageView;
- (NSArray *)_supportedPasteboardImageTypesIncludingCustomTypes:(char)arg0;
- (NSData *)_newDictionaryWithImageData;
- (void)setMultiplePhotoBackdropEnabled:(char)arg0;
- (char)multiplePhotoBackdropEnabled;
- (void)dealloc;
- (void)layoutSubviews;
- (void)reload;
- (char)canPerformAction:(SEL)arg0 withSender:(NSObject *)arg1;
- (UIImage *)backgroundImage;
- (void)copy:(id)arg0;
- (void)paste:(id)arg0;
- (char)allowsEditing;
- (void)setAllowsEditing:(char)arg0;

@end
