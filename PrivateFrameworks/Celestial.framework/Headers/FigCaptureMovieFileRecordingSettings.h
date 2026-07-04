/* Runtime dump - FigCaptureMovieFileRecordingSettings
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings <NSCoding>
{
    NSDictionary * _videoSettings;
    NSDictionary * _audioSettings;
    char _videoMirrored;
    int _videoOrientation;
    struct ? _movieFragmentInterval;
    NSDictionary * _movieLevelMetadata;
    char _sendThumbnailIOSurface;
}

@property (copy, nonatomic) NSDictionary * videoSettings;
@property (copy, nonatomic) NSDictionary * audioSettings;
@property (nonatomic) char videoMirrored;
@property (nonatomic) int videoOrientation;
@property (nonatomic) struct ? movieFragmentInterval;
@property (copy, nonatomic) NSDictionary * movieLevelMetadata;
@property (nonatomic) char sendThumbnailIOSurface;

- (int)videoOrientation;
- (NSDictionary *)audioSettings;
- (NSDictionary *)videoSettings;
- (struct ?)movieFragmentInterval;
- (void)setMovieFragmentInterval:(struct ?)arg0;
- (void)setVideoMirrored:(char)arg0;
- (void)setVideoOrientation:(int)arg0;
- (void)setAudioSettings:(NSDictionary *)arg0;
- (void)setMovieLevelMetadata:(NSDictionary *)arg0;
- (void)setSendThumbnailIOSurface:(char)arg0;
- (void)setVideoSettings:(NSDictionary *)arg0;
- (void)dealloc;
- (FigCaptureMovieFileRecordingSettings *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (FigCaptureMovieFileRecordingSettings *)init;
- (NSDictionary *)movieLevelMetadata;
- (char)sendThumbnailIOSurface;
- (char)videoMirrored;

@end
