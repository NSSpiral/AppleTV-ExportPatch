/* Runtime dump - FigCaptureRecordingSettings
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureRecordingSettings : NSObject <NSCoding>
{
    long long _settingsID;
    NSURL * _outputURL;
    NSString * _outputFileType;
    struct ? _maxDuration;
    long long _maxFileSize;
    long long _minFreeDiskSpaceLimit;
}

@property (nonatomic) long long settingsID;
@property (copy, nonatomic) NSURL * outputURL;
@property (copy, nonatomic) NSString * outputFileType;
@property (nonatomic) struct ? maxDuration;
@property (nonatomic) long long maxFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;

- (long long)minFreeDiskSpaceLimit;
- (void)setMinFreeDiskSpaceLimit:(long long)arg0;
- (NSURL *)outputURL;
- (NSString *)outputFileType;
- (struct ?)maxDuration;
- (long long)settingsID;
- (void)setSettingsID:(long long)arg0;
- (void)setMaxDuration:(struct ?)arg0;
- (void)setMaxFileSize:(long long)arg0;
- (void)dealloc;
- (FigCaptureRecordingSettings *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (FigCaptureRecordingSettings *)init;
- (long long)maxFileSize;
- (void)setOutputFileType:(NSString *)arg0;
- (void)setOutputURL:(NSURL *)arg0;

@end
