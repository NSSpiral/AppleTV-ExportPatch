/* Runtime dump - VSCacheUpdateListener
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSCacheUpdateListener : NSObject
{
    NSLock * _lock;
    NSMutableArray * _updateRequestQueue;
    NSDictionary * _dataProviders;
    NSTimer * _flushTimer;
    char _isListening;
}

+ (VSCacheUpdateListener *)sharedListener;
+ (VSCacheUpdateListener *)sharedListenerIfExists;

- (VSCacheUpdateListener *)_initShared;
- (void)dealloc;
- (VSCacheUpdateListener *)init;
- (void)startListening;
- (void)stopListening;
- (void)_enqueueRequest:(NSURLRequest *)arg0;
- (void)_flush;
- (void)_spokenLanguageChanged:(NSNotification *)arg0;
- (void)performUpdateForModelIdentifier:(NSString *)arg0 classIdentifier:(NSString *)arg1;

@end
