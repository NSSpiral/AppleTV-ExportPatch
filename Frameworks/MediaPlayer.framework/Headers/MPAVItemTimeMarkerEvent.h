/* Runtime dump - MPAVItemTimeMarkerEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVItemTimeMarkerEvent : NSObject
{
    MPAVItem * _AVItem;
    MPTimeMarker * _chapterMarker;
    MPTimeMarker * _artworkMarker;
    MPTimeMarker * _URLMarker;
    MPTimeMarker * _closedCaptionMarker;
}

@property (retain, nonatomic) MPAVItem * AVItem;
@property (retain, nonatomic) MPTimeMarker * chapterMarker;
@property (retain, nonatomic) MPTimeMarker * artworkMarker;
@property (retain, nonatomic) MPTimeMarker * URLMarker;
@property (retain, nonatomic) MPTimeMarker * closedCaptionMarker;

- (void)setAVItem:(NSObject *)arg0;
- (void)setChapterMarker:(MPTimeMarker *)arg0;
- (void)setArtworkMarker:(MPTimeMarker *)arg0;
- (void)setURLMarker:(NSObject *)arg0;
- (void)setClosedCaptionMarker:(MPTimeMarker *)arg0;
- (MPTimeMarker *)chapterMarker;
- (MPTimeMarker *)artworkMarker;
- (MPTimeMarker *)URLMarker;
- (MPTimeMarker *)closedCaptionMarker;
- (MPAVItemTimeMarkerEvent *)initWithTimeMarkerNotificationUserInfo:(NSDictionary *)arg0;
- (NSObject *)crossedMarkerOfType:(int)arg0;
- (MPAVItem *)AVItem;
- (void).cxx_destruct;

@end
