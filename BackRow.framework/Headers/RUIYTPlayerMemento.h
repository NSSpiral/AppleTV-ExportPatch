/* Runtime dump - RUIYTPlayerMemento
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface RUIYTPlayerMemento : NSObject
{
    char isPlaybackRestorable;
    int mediaIndex;
    NSArray * _trackList;
}

@property char isPlaybackRestorable;
@property int mediaIndex;
@property (retain) NSArray * trackList;

- (int)mediaIndex;
- (char)isPlaybackRestorable;
- (void)setIsPlaybackRestorable:(char)arg0;
- (void)setMediaIndex:(int)arg0;
- (void)setTrackList:(NSArray *)arg0;
- (void).cxx_destruct;
- (NSArray *)trackList;

@end
