/* Runtime dump - MPAlternateTracks
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate>
{
    MPAVItem * _item;
    NSDictionary * _alternateTracks;
    NSMutableDictionary * _trackChangeDictionary;
    char _disableAlternateTextTrackRendering;
    AVPlayerItemLegibleOutput * _legibleOutput;
    MPAlternateTextTrack * _currentTextTrack;
    NSArray * _outOfBandTextTracks;
}

@property (readonly, nonatomic) char loaded;
@property (retain, nonatomic) NSArray * outOfBandTextTracks;
@property (nonatomic) char disableAlternateTextTrackRendering;
@property (retain, nonatomic) MPAlternateTextTrack * selectedAlternateTextTrack;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)subtitleLanguages;

- (NSArray *)outOfBandTextTracks;
- (void)setOutOfBandTextTracks:(NSArray *)arg0;
- (char)disableAlternateTextTrackRendering;
- (void)setDisableAlternateTextTrackRendering:(char)arg0;
- (void)enableLegibleOutputIfNecessary;
- (void)_suppressAVFSubtitleRendering;
- (id)_currentTextTrackAccordingToAVF;
- (NSObject *)tracksForType:(unsigned int)arg0;
- (unsigned int)indexOfCurrentTrackForType:(unsigned int)arg0;
- (NSObject *)currentTrackForType:(unsigned int)arg0;
- (NSObject *)_keyForTrackType:(unsigned int)arg0;
- (void)beginTrackChanges;
- (void)commitTrackChanges;
- (void)reloadDataWithChangedCaptionDisplayType:(char)arg0;
- (MPAlternateTextTrack *)selectedAlternateTextTrack;
- (void)setSelectedAlternateTextTrack:(MPAlternateTextTrack *)arg0;
- (void)setTrack:(NSObject *)arg0 forType:(unsigned int)arg1;
- (char)hasTracksForTypes:(unsigned int)arg0;
- (unsigned int)trackCountForTypes:(unsigned int)arg0;
- (void)reloadData;
- (MPAlternateTracks *)initWithItem:(MPAVItem *)arg0;
- (char)isLoaded;
- (void).cxx_destruct;
- (void)legibleOutput:(AVPlayerItemLegibleOutput *)arg0 didOutputAttributedStrings:(id)arg1 nativeSampleBuffers:(id)arg2 forItemTime:(struct ?)arg3;

@end
