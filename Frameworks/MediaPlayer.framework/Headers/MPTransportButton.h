/* Runtime dump - MPTransportButton
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTransportButton : MPButton
{
    MPAVController * player;
}

@property (retain, nonatomic) MPAVController * player;

- (NSObject *)_automationID;
- (void).cxx_destruct;
- (void)setPlayer:(MPAVController *)arg0;
- (MPAVController *)player;

@end
