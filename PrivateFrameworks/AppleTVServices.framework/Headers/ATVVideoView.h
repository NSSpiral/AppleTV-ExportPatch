/* Runtime dump - ATVVideoView
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVVideoView : UIView
{
    char _readyForDisplay;
    ATVPlayer * _player;
    UILabel * _debugLabel;
    ATVPlayerLayerView * _playerLayerView;
    ATVPlayerDebugInfoView * _playerDebugInfoView;
}

@property (retain, nonatomic) ATVPlayer * player;
@property (readonly, nonatomic) UILabel * debugLabel;
@property (nonatomic) char readyForDisplay;
@property (retain, nonatomic) ATVPlayerLayerView * playerLayerView;
@property (retain, nonatomic) ATVPlayerDebugInfoView * playerDebugInfoView;

- (ATVVideoView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (ATVPlayerDebugInfoView *)playerDebugInfoView;
- (UILabel *)debugLabel;
- (ATVPlayerLayerView *)playerLayerView;
- (void)setPlayerLayerView:(ATVPlayerLayerView *)arg0;
- (void)setPlayerDebugInfoView:(ATVPlayerDebugInfoView *)arg0;
- (void)setPlayer:(ATVPlayer *)arg0;
- (ATVPlayer *)player;
- (char)isReadyForDisplay;
- (void)setReadyForDisplay:(char)arg0;

@end
