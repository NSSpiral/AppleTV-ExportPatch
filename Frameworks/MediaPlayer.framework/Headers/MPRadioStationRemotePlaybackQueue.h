/* Runtime dump - MPRadioStationRemotePlaybackQueue
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue
{
    RURadioStationPlaybackMetadata * _stationMetadata;
}

@property (readonly, nonatomic) RURadioStationPlaybackMetadata * stationMetadata;

- (MPRadioStationRemotePlaybackQueue *)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg0;
- (char)verifyWithError:(id *)arg0;
- (RURadioStationPlaybackMetadata *)stationMetadata;
- (NSString *)description;
- (void).cxx_destruct;

@end
