/* Runtime dump - PLPhotoTileCloudPlaceholderView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoTileCloudPlaceholderView : UIView <PLTilePlaceholderView>
{
    PLRoundProgressView * _loadingIndicatorView;
    UIView * _loadingContainerView;
    UIButton * _loadingErrorButton;
    char _indicatorIsVisible;
    char _showingError;
    char _showingLoading;
    struct CGRect _imageRect;
    char _toolbarVisible;
    double _lastViewPhaseChangeDate;
    <PLPhotoTileCloudPlaceholderViewDelegate> * _delegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)showLoadingIndicator;
- (PLPhotoTileCloudPlaceholderView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutSubviews;
- (void)setImageRect:(struct CGRect)arg0;
- (void)updateCloudDownloadProgress:(float)arg0;
- (void)_retryDownload;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(char)arg0;
- (void)showLoadingIndicatorWhenReady;
- (void)showErrorIndicator;
- (void)setToolbarVisible:(char)arg0;
- (void)setRetryDelegate:(NSObject *)arg0;

@end
