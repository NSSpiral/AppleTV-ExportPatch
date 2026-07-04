/* Runtime dump - MPAVRoutingTableViewCell
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingTableViewCell : UITableViewCell
{
    UILabel * _mirroringLabel;
    UISwitch * _mirroringSwitch;
    UIView * _mirroringSeparatorView;
    char _mirroringSwitchVisible;
    char _debugCell;
    <MPAVRoutingTableViewCellDelegate> * _delegate;
    MPAVRoute * _route;
}

@property (weak, nonatomic) <MPAVRoutingTableViewCellDelegate> * delegate;
@property (retain, nonatomic) MPAVRoute * route;
@property (nonatomic) char mirroringSwitchVisible;
@property (nonatomic) char debugCell;

- (void)_configureLabel:(NSString *)arg0;
- (char)_shouldShowMirroringAsEnabledForRoute:(id)arg0;
- (void)setMirroringSwitchVisible:(char)arg0 animated:(char)arg1;
- (void)_mirroringSwitchValueDidChange:(NSDictionary *)arg0;
- (void)setMirroringSwitchVisible:(char)arg0;
- (void)setDebugCell:(char)arg0;
- (char)mirroringSwitchVisible;
- (char)isDebugCell;
- (void)setDelegate:(<MPAVRoutingTableViewCellDelegate> *)arg0;
- (void)layoutSubviews;
- (<MPAVRoutingTableViewCellDelegate> *)delegate;
- (void).cxx_destruct;
- (void)setRoute:(MPAVRoute *)arg0;
- (MPAVRoute *)route;

@end
