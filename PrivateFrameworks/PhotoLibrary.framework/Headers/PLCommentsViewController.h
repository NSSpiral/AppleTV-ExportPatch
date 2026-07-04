/* Runtime dump - PLCommentsViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCommentsViewController : UIViewController <PLCloudCommentsChangeObserver, PLPhotoCommentEntryViewDelegate, PLDismissableViewController, UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _tableView;
    UIView * _tableContainerView;
    PLManagedAsset * _asset;
    CAGradientLayer * _maskLayer;
    PLPhotoCommentEntryView * _entryView;
    PLCloudSharedComment * _justInsertedComment;
    char _justTappedSmileButton;
    char _editMode;
    char _temporaryKeyboardHideReshow;
    char _shouldAdjustInitialScrollPosition;
    float _keyboardOverlap;
    <PLCommentsViewControllerDelegate> * _commentsControllerDelegate;
    UIView * _containerView;
    NSCache * _commentsHeightCache;
    UIImageView * _gradientView;
    _UIBackdropView * _backdropView;
    UIBarButtonItem * _cancelButton;
    char _isCompact;
    struct CGRect _availableBounds;
}

@property (retain, nonatomic) PLManagedAsset * asset;
@property (nonatomic) char isCompact;
@property (nonatomic) struct CGRect availableBounds;
@property (nonatomic) char editMode;
@property (readonly, nonatomic) UIBarButtonItem * cancelButton;
@property (retain, nonatomic) NSString * draftComment;
@property (nonatomic) <PLCommentsViewControllerDelegate> * commentsControllerDelegate;
@property (retain, nonatomic) PLCloudSharedComment * justInsertedComment;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 shouldShowMenuForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 canPerformAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 withSender:(NSObject *)arg3;
- (void)tableView:(UITableView *)arg0 performAction:(SEL)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 withSender:(NSObject *)arg3;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg0;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (char)tableView:(UITableView *)arg0 canEditRowAtIndexPath:(NSIndexPath *)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (PLCommentsViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (UIBarButtonItem *)cancelButton;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (void)_keyboardWillShow:(NSNotification *)arg0;
- (void)_keyboardWillHide:(NSNotification *)arg0;
- (PLManagedAsset *)asset;
- (void)setAsset:(PLManagedAsset *)arg0;
- (char)prepareForDismissingForced:(char)arg0;
- (void)scrollToComment:(id)arg0 animated:(char)arg1;
- (void)cancelCurrentAction:(NSObject *)arg0;
- (void)setRasterization:(char)arg0;
- (void)cancelDeleteMode:(id)arg0;
- (void)setIsCompact:(char)arg0;
- (void)setAvailableBounds:(struct CGRect)arg0;
- (void)setCommentsControllerDelegate:(<PLCommentsViewControllerDelegate> *)arg0;
- (void)updateViewLayoutWithDuration:(double)arg0 completion:(id /* block */)arg1;
- (NSString *)draftComment;
- (void)setEditMode:(char)arg0 shouldBecomeFirstResponder:(char)arg1;
- (void)setDraftComment:(NSString *)arg0;
- (void)setEditMode:(char)arg0;
- (void)updateForSizeChange;
- (char)showAssetOwnerSection;
- (float)_heightForComment:(id)arg0 forWidth:(float)arg1 forInterfaceOrientation:(int)arg2;
- (float)_tableViewHeightForWidth:(float)arg0 interfaceOrientation:(int)arg1;
- (char)_adjustTextEntrySize;
- (void)_updateLayerMaskWithBoundsChange;
- (void)_adjustInitialScrollPosition:(char)arg0;
- (void)_startWatchingKeyboard;
- (void)_stopWatchingKeyboard;
- (struct CGSize)_preferredViewSizeInContainerSize:(struct CGSize)arg0 forInterfaceOrientation:(int)arg1 tableViewSize:(struct CGSize *)arg2;
- (int)postCommentSection;
- (void)_postCommentValidated:(id)arg0;
- (id)_firstUnreadCloudComment;
- (char)shouldShowCommentPostingUI;
- (int)smileCommentSection;
- (int)assetOwnerCommentSection;
- (int)textCommentSection;
- (void)_smileButtonTapped:(id)arg0;
- (void)_addCommentButtonTapped:(id)arg0;
- (char)_checkAndAlertMaxCommentsReachedWhenFinalizing:(char)arg0;
- (char)checkAndAlertMaxLikesReached;
- (PLCloudSharedComment *)justInsertedComment;
- (void)setJustInsertedComment:(PLCloudSharedComment *)arg0;
- (void)photoCommentEntryViewHeightDidChange:(PLPhotoCommentEntryView *)arg0;
- (<PLCommentsViewControllerDelegate> *)commentsControllerDelegate;
- (char)isCompact;
- (struct CGRect)availableBounds;
- (void)cloudCommentsDidChange:(PLCloudCommentsChangeNotification *)arg0;
- (char)editMode;

@end
