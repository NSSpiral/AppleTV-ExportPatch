/* Runtime dump - ATVRadioPlayerViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@class ATVRadioPlayer, ATVRadioPlayerVideoView, ATVRoundProgressView, BREvent, BRImageControl;
@interface ATVRadioPlayerViewController : BRViewController
{
    ATVRadioPlayer * _player;
    ATVRadioPlayerVideoView * _videoView;
    <BRImageProxy> * _imageProxy;
    NSString * _imageID;
    BRImageControl * _imageView;
    ATVRoundProgressView * _progressView;
}

@property (retain, nonatomic) ATVRadioPlayer * player;
@property (retain, nonatomic) ATVRadioPlayerVideoView * videoView;
@property (retain, nonatomic) <BRImageProxy> * imageProxy;
@property (copy, nonatomic) NSString * imageID;
@property (retain, nonatomic) BRImageControl * imageView;
@property (retain, nonatomic) ATVRoundProgressView * progressView;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)wasPopped;
- (void)_imageUpdated:(id)arg0;
- (void)_imageUnavailable:(id)arg0;
- (NSString *)imageID;
- (void)setImageID:(NSString *)arg0;
- (void)_bindProgressViewToPlayerIfNeeded;
- (char)_isRelevantImageLoadingNotification:(NSNotification *)arg0;
- (void)_stopListeningForImageLoading;
- (char)_isEventTogglePlayPause:(id)arg0;
- (ATVRadioPlayerVideoView *)videoView;
- (void)setVideoView:(ATVRadioPlayerVideoView *)arg0;
- (void)dealloc;
- (BRImageControl *)imageView;
- (void)setProgressView:(ATVRoundProgressView *)arg0;
- (ATVRoundProgressView *)progressView;
- (void).cxx_destruct;
- (void)setImageView:(BRImageControl *)arg0;
- (<BRImageProxy> *)imageProxy;
- (void)setImageProxy:(<BRImageProxy> *)arg0;
- (void)setPlayer:(ATVRadioPlayer *)arg0;
- (ATVRadioPlayer *)player;

@end
