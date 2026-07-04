/* Runtime dump - MPPurchaseCommand
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPurchaseCommand : MPRemoteCommand
{
    int _state;
}

@property (nonatomic) int state;

- (NSDictionary *)_mediaRemoteCommandInfoOptions;
- (int)state;
- (void)setState:(int)arg0;

@end
