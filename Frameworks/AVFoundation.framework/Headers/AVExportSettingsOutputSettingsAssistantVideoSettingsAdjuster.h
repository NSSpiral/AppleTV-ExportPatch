/* Runtime dump - AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster : NSObject <AVOutputSettingsAssistantVideoSettingsAdjuster>
{
    NSString * _outputSettingsPresetIdentifier;
    NSDictionary * _exportSettings;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (int)averageBitRateForSourceDimensions:(struct CGSize)arg0 andTargetFrameRate:(float)arg1;
- (AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster *)initWithOutputSettingsPreset:(NSSet *)arg0;
- (void)dealloc;

@end
