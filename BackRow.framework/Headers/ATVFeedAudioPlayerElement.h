/* Runtime dump - ATVFeedAudioPlayerElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedRootElement.h>

@class ATVFeedElement, BRMerchant;
@interface ATVFeedAudioPlayerElement : ATVFeedRootElement
{
    char _indefinitePlaylist;
    NSMutableArray * _audioElements;
    int _startPlaybackAtIndex;
}

@property (retain, nonatomic) NSMutableArray * audioElements;
@property (nonatomic) int startPlaybackAtIndex;
@property (nonatomic) char indefinitePlaylist;

- (ATVFeedAudioPlayerElement *)initWithXMLElement:(NSXMLElement *)arg0 merchant:(BRMerchant *)arg1 parent:(ATVFeedElement *)arg2;
- (void)setStartPlaybackAtIndex:(int)arg0;
- (void)setIndefinitePlaylist:(char)arg0;
- (NSMutableArray *)audioElements;
- (void)setAudioElements:(NSMutableArray *)arg0;
- (int)startPlaybackAtIndex;
- (char)indefinitePlaylist;
- (void).cxx_destruct;

@end
