/* Runtime dump - MPAudioRouteCell
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioRouteCell : _UIAlertTableViewCell
{
    UIImageView * _pickedImage;
}

- (MPAudioRouteCell *)initWithRouteName:(NSString *)arg0 isPicked:(char)arg1;
- (void)setPicked:(char)arg0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
