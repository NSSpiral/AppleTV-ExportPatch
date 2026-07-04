/* Runtime dump - TTSVoiceAssetManager
 * Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSVoiceAssetManager : NSObject

+ (TTSVoiceAssetManager *)sharedInstance;

- (NSString *)_voiceAssetQueryForName:(NSString *)arg0 language:(NSString *)arg1 gender:(int)arg2 footprint:(int)arg3 version:(NSString *)arg4 localOnly:(char)arg5;
- (void)automaticallyDownloadVoiceAssetsIfNeeded;
- (NSArray *)_autoDownloadedAssets;
- (void)_automaticallyDownloadVoiceAssetsIfNeeded;
- (NSString *)resourcePathForLanguage:(NSString *)arg0 gender:(int)arg1 footprint:(int)arg2 name:(NSString *)arg3;
- (void)getVoiceAssetsLocalOnly:(char)arg0 reply:(id /* block */)arg1;
- (void)startDownloadingVoiceAsset:(NSSet *)arg0 progress:(NSProgress *)arg1 completion:(/* block */ id)arg2;
- (void)setAutoDownloadedVoiceAssets:(NSArray *)arg0;
- (void)getAutoDownloadedVoiceAssets:(NSArray *)arg0;

@end
