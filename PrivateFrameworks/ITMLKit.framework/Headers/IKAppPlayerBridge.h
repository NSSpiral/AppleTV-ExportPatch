/* Runtime dump - IKAppPlayerBridge
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppPlayerBridge : NSObject
{
    <IKAppPlayer> * _appPlayer;
    IKJSPlayer * _jsPlayer;
    int _state;
}

@property (readonly, nonatomic) <IKAppPlayer> * appPlayer;
@property (weak, nonatomic) IKAppPlaylistBridge * playlist;
@property (readonly, weak, nonatomic) IKJSPlayer * jsPlayer;
@property (readonly, nonatomic) IKAppMediaItemBridge * currentMediaItem;
@property (readonly, nonatomic) int state;

- (void)play;
- (IKAppMediaItemBridge *)currentMediaItem;
- (int)state;
- (void)stop;
- (void).cxx_destruct;
- (void)pause;
- (void)setElapsedTime:(double)arg0 precise:(char)arg1;
- (void)stateDidChange:(NSDictionary *)arg0;
- (void)scan:(double)arg0;
- (void)setTimedMetadataKeysToObserve:(id)arg0;
- (void)timedMetadataDidChange:(NSDictionary *)arg0 value:(NSObject *)arg1;
- (IKAppPlayerBridge *)initWithJSPlayer:(ATVJSPlayer *)arg0;
- (<IKAppPlayer> *)appPlayer;
- (IKJSPlayer *)jsPlayer;
- (void)setPlaylist:(IKAppPlaylistBridge *)arg0;
- (IKAppPlaylistBridge *)playlist;

@end
