/* Runtime dump - MPContentItem
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPContentItem : NSObject
{
    struct _MRContentItem * _mrContentItem;
    MPMediaItemArtwork * _artwork;
}

@property (readonly, copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * subtitle;
@property (retain, nonatomic) MPMediaItemArtwork * artwork;
@property (nonatomic) char container;
@property (nonatomic) char playable;
@property (nonatomic) float playbackProgress;

- (struct _MRContentItem *)_mediaRemoteContentItem;
- (void)setArtwork:(MPMediaItemArtwork *)arg0;
- (void)_postItemChangedNotification;
- (float)playbackProgress;
- (NSObject *)_initWithMediaRemoteContentItem:(struct _MRContentItem *)arg0;
- (void)setPlayable:(char)arg0;
- (void)setPlaybackProgress:(float)arg0;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)identifier;
- (NSString *)title;
- (void)setContainer:(char)arg0;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (MPContentItem *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (char)isContainer;
- (MPMediaItemArtwork *)artwork;
- (char)isPlayable;

@end
