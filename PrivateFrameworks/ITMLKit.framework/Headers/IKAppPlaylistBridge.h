/* Runtime dump - IKAppPlaylistBridge
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppPlaylistBridge : NSObject
{
    <IKAppPlaylist> * _appPlaylist;
    IKJSPlaylist * _jsPlaylist;
}

@property (readonly, nonatomic) <IKAppPlaylist> * appPlaylist;
@property (readonly, nonatomic) IKAppMediaItemBridge * currentMediaItem;
@property (readonly, nonatomic) IKAppMediaItemBridge * nextMediaItem;
@property (readonly, nonatomic) IKAppMediaItemBridge * previousMediaItem;
@property (readonly) unsigned int length;
@property (readonly, weak, nonatomic) IKJSPlaylist * jsPlaylist;

- (IKAppMediaItemBridge *)currentMediaItem;
- (unsigned int)length;
- (NSObject *)item:(int)arg0;
- (void).cxx_destruct;
- (IKAppMediaItemBridge *)nextMediaItem;
- (IKAppMediaItemBridge *)previousMediaItem;
- (<IKAppPlaylist> *)appPlaylist;
- (IKAppPlaylistBridge *)initWithJSPlaylist:(IKJSPlaylist *)arg0;
- (id)replaceItemsAt:(int)arg0 count:(unsigned int)arg1 with:(id)arg2;
- (IKJSPlaylist *)jsPlaylist;

@end
