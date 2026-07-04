/* Runtime dump - IKJSPlaylist
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist>
{
    IKAppPlaylistBridge * _bridge;
}

@property (readonly, nonatomic) IKAppPlaylistBridge * bridge;
@property (readonly, nonatomic) unsigned int length;
@property (readonly, nonatomic) IKJSMediaItem * currentMediaItem;
@property (readonly, nonatomic) IKJSMediaItem * nextMediaItem;
@property (readonly, nonatomic) IKJSMediaItem * previousMediaItem;

- (IKJSMediaItem *)currentMediaItem;
- (IKJSPlaylist *)init;
- (unsigned int)length;
- (id)pop;
- (NSObject *)item:(int)arg0;
- (void).cxx_destruct;
- (IKJSMediaItem *)nextMediaItem;
- (IKJSMediaItem *)previousMediaItem;
- (IKAppPlaylistBridge *)bridge;
- (id)splice:(id)arg0 :(id)arg1 :(id)arg2;
- (unsigned int)push:(id)arg0;

@end
