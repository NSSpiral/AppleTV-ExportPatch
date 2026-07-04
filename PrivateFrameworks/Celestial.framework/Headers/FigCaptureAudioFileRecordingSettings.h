/* Runtime dump - FigCaptureAudioFileRecordingSettings
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings <NSCoding>
{
    NSDictionary * _audioSettings;
    NSDictionary * _metadata;
}

@property (copy, nonatomic) NSDictionary * audioSettings;
@property (copy, nonatomic) NSDictionary * metadata;

- (NSDictionary *)audioSettings;
- (void)setAudioSettings:(NSDictionary *)arg0;
- (void)dealloc;
- (FigCaptureAudioFileRecordingSettings *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (FigCaptureAudioFileRecordingSettings *)init;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;

@end
