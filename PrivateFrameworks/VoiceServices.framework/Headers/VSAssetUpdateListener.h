/* Runtime dump - VSAssetUpdateListener
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSAssetUpdateListener : NSObject
{
    char _isListening;
    PCPersistentTimer * _assetCleanupTimer;
}

+ (VSAssetUpdateListener *)sharedListener;

- (VSAssetUpdateListener *)_initShared;
- (void)dealloc;
- (VSAssetUpdateListener *)init;
- (void)startListening;
- (void)stopListening;
- (void)_spokenLanguageChanged:(NSNotification *)arg0;
- (void)_cleanupAssets;
- (void)_scheduleNextCleanupForDate:(NSDate *)arg0;
- (void)_rescheduleAssetCleanup;
- (void)_flushLanguageChanges;
- (void)_cancelAssetCleanupTimer;
- (void)_updateNextCleanupDate;
- (void)downloadAssetForLanguage:(NSString *)arg0;
- (NSString *)downloadingAssetLanguage;
- (int)assetStatusForLanguage:(NSString *)arg0;
- (char)assetDownloadStatus:(id)arg0 progress:(float *)arg1 size:(long long *)arg2;
- (void)removeAssetForLanguage:(NSString *)arg0;

@end
