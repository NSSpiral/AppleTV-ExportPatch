/* Runtime dump - CAMVideoPreviewView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMVideoPreviewView : UIView
{
    NSString * _videoGravity;
    char _disableLayoutForPreviewView;
    char _disableLayoutForEffectsFullsizeView;
    char _disableLayoutForEffectsGridViews;
    char _square;
    AVCaptureVideoPreviewLayer * _previewLayer;
    int _orientation;
    UIView * _previewLayerView;
    CAMEffectsFullsizeView * _effectsFullsizeView;
    CAMEffectsGridView * _effectsGridView;
    CAMEffectsGridLabelsView * _effectsGridLabelsView;
    UIView * _fadeOutView;
}

@property (retain, nonatomic) AVCaptureVideoPreviewLayer * previewLayer;
@property (nonatomic) int orientation;
@property (readonly, retain, nonatomic) UIView * previewLayerView;
@property (readonly, retain, nonatomic) CAMEffectsFullsizeView * effectsFullsizeView;
@property (readonly, retain, nonatomic) CAMEffectsGridView * effectsGridView;
@property (readonly, retain, nonatomic) CAMEffectsGridLabelsView * effectsGridLabelsView;
@property (readonly, retain, nonatomic) UIView * fadeOutView;
@property (copy, nonatomic) NSString * videoGravity;
@property (nonatomic) char disableLayoutForPreviewView;
@property (nonatomic) char disableLayoutForEffectsFullsizeView;
@property (nonatomic) char disableLayoutForEffectsGridViews;
@property (nonatomic) char square;

- (NSString *)videoGravity;
- (CAMVideoPreviewView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setOrientation:(int)arg0 animated:(char)arg1;
- (int)orientation;
- (void)setOrientation:(int)arg0;
- (void).cxx_destruct;
- (CAMEffectsFullsizeView *)effectsFullsizeView;
- (CAMEffectsGridView *)effectsGridView;
- (AVCaptureVideoPreviewLayer *)previewLayer;
- (void)createEffectsFullsizeView;
- (void)createEffectsGridViews;
- (void)destroyEffectsFullsizeViewRemoveFromSuperview:(char)arg0;
- (void)destroyEffectsGridViewsRemoveFromSuperview:(char)arg0;
- (CAMEffectsGridLabelsView *)effectsGridLabelsView;
- (UIView *)previewLayerView;
- (void)setDisableLayoutForEffectsFullsizeView:(char)arg0;
- (void)setDisableLayoutForPreviewView:(char)arg0;
- (struct CGRect)frameForView:(NSObject *)arg0;
- (struct CGRect)convertRect:(NSObject *)arg0 toSublayer:(SEL)arg1;
- (UIView *)fadeOutView;
- (void)setDisableLayoutForEffectsGridViews:(char)arg0;
- (char)isSquare;
- (void)setSquare:(char)arg0;
- (void)updateToContentSize:(NSObject *)arg0;
- (struct CGRect)rectForCaptureDeviceFace:(id)arg0;
- (void)setSquare:(char)arg0 animated:(char)arg1;
- (void)setPreviewLayer:(AVCaptureVideoPreviewLayer *)arg0;
- (struct CGRect)_frameForSubviewsAccountForSquare:(id)arg0;
- (void)_updateGravityForLayers;
- (char)isDisabledLayoutForPreviewView;
- (char)isDisabledLayoutForEffectsFullsizeView;
- (char)isDisabledLayoutForEffectsGridViews;
- (void)setVideoGravity:(NSString *)arg0;

@end
