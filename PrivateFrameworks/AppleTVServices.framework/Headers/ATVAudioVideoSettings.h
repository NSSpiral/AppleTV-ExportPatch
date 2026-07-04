/* Runtime dump - ATVAudioVideoSettings
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVAudioVideoSettings : NSObject
{
    id _domainObserver;
    int _preferredPlaybackResolution;
    NSString * _preferredAudioLanguageCode;
    NSString * _preferredSubtitleLanguageCode;
    int _subtitleDisplayType;
    char _preferSDHOverRegularSubtitles;
    char _preferVideoDescriptions;
}

@property (nonatomic) int preferredPlaybackResolution;
@property (copy, nonatomic) NSString * preferredAudioLanguageCode;
@property (nonatomic) char preferVideoDescriptions;
@property (copy, nonatomic) NSString * preferredSubtitleLanguageCode;
@property (nonatomic) int subtitleDisplayType;
@property (nonatomic) char preferSDHOverRegularSubtitles;

+ (ATVAudioVideoSettings *)sharedInstance;

- (void)dealloc;
- (ATVAudioVideoSettings *)init;
- (void).cxx_destruct;
- (int)preferredPlaybackResolution;
- (void)_refreshPropertiesWithPreferences;
- (void)_mediaAccessibilityCaptionsSettingsDidChange:(NSDictionary *)arg0;
- (int)_playbackResolutionFromString:(NSString *)arg0;
- (int)_subtitleDisplayTypeForMACaptionType:(long)arg0;
- (NSString *)_stringFromPlaybackResolution:(int)arg0;
- (long)_MACaptionTypeForSubtitleDisplayType:(int)arg0;
- (int)subtitleDisplayType;
- (void)setSubtitleDisplayType:(int)arg0;
- (void)setPreferredSubtitleLanguageCode:(NSString *)arg0;
- (void)setPreferredPlaybackResolution:(int)arg0;
- (NSString *)preferredAudioLanguageCode;
- (void)setPreferredAudioLanguageCode:(NSString *)arg0;
- (char)preferVideoDescriptions;
- (void)setPreferVideoDescriptions:(char)arg0;
- (NSString *)preferredSubtitleLanguageCode;
- (char)preferSDHOverRegularSubtitles;
- (void)setPreferSDHOverRegularSubtitles:(char)arg0;

@end
