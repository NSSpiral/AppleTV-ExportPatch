/* Runtime dump - MPCreateRadioStationCommandEvent
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent
{
    char _requestingPlaybackInitialization;
    NSURL * _stationURL;
}

@property (readonly, nonatomic) NSURL * stationURL;
@property (readonly, nonatomic) char requestingPlaybackInitialization;

- (MPCreateRadioStationCommandEvent *)initWithCommand:(unsigned char)arg0 mediaRemoteType:(unsigned int)arg1 options:(NSDictionary *)arg2;
- (NSURL *)stationURL;
- (char)isRequestingPlaybackInitialization;
- (void).cxx_destruct;

@end
