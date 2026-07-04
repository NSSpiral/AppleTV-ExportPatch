/* Runtime dump - MPAVControllerToAggregateDCommunicator
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVControllerToAggregateDCommunicator : NSObject
{
    MPAVItem * _item;
    unsigned int _lastMediaType;
    double _playbackStartTime;
    char _playbackStartTimeIsValid;
}

- (void)_handlePlaybackStateChangedNotification:(NSNotification *)arg0;
- (void)_handleItemChangedNotification:(NSNotification *)arg0;
- (void)_handleItemTypeAvailableNotification:(NSNotification *)arg0;
- (void)_stopPlaybackTimer;
- (void)_updateLastMediaTypeForItem;
- (void)dealloc;
- (MPAVControllerToAggregateDCommunicator *)init;
- (void)_startPlaybackTimer;
- (void).cxx_destruct;

@end
