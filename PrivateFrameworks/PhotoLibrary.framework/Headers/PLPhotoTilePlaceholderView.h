/* Runtime dump - PLPhotoTilePlaceholderView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoTilePlaceholderView : UIView <PLTilePlaceholderView>
{
    UIActivityIndicatorView * _loadingIndicatorView;
    UILabel * _loadingLabel;
    UIView * _loadingContainerView;
    double _lastViewPhaseChangeDate;
    char _indicatorIsVisible;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)showLoadingIndicator;
- (PLPhotoTilePlaceholderView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setImageRect:(struct CGRect)arg0;
- (void)updateCloudDownloadProgress:(float)arg0;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(char)arg0;
- (void)showLoadingIndicatorWhenReady;
- (void)showErrorIndicator;
- (void)setToolbarVisible:(char)arg0;

@end
