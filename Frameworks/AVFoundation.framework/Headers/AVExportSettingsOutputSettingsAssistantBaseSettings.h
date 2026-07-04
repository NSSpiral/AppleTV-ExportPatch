/* Runtime dump - AVExportSettingsOutputSettingsAssistantBaseSettings
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExportSettingsOutputSettingsAssistantBaseSettings : NSObject <AVOutputSettingsAssistantBaseSettingsProvider>
{
    NSDictionary * _exportSettings;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) NSDictionary * baseAudioSettings;
@property (readonly, nonatomic) NSDictionary * baseVideoSettings;

- (NSDictionary *)baseAudioSettings;
- (NSDictionary *)baseVideoSettings;
- (AVExportSettingsOutputSettingsAssistantBaseSettings *)initWithOutputSettingsPreset:(NSSet *)arg0;
- (void)dealloc;
- (AVExportSettingsOutputSettingsAssistantBaseSettings *)init;

@end
