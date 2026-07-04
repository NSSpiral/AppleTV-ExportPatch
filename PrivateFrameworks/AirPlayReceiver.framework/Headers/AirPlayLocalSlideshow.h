/* Runtime dump - AirPlayLocalSlideshow
 * Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayLocalSlideshow : NSObject <MPAssetKeyDelegate>
{
    NSLock * _lock;
    MediaControlServer * _server;
    unsigned int _serverSessionID;
    CALayer * _presentationLayer;
    MPDocument * _marimbaDocument;
    MRMarimbaLayer * _marimbaLayer;
    id _sessionUUID;
    NSDictionary * _settings;
    int _state;
    NSMutableDictionary * _assets;
    unsigned int _nextAssetIndex;
    char _hasMoreAssets;
    char _endPending;
    int _outstandingCount;
    double _startTime;
    double _lastRequestTime;
    double _lastRemoveTime;
    NSData * _firstImageData;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)slideshowFeaturesWithLanguage:(NSString *)arg0;

- (void)dealloc;
- (NSString *)absolutePathForAssetKey:(NSString *)arg0;
- (struct CGSize)resolutionForAssetKey:(NSString *)arg0;
- (NSString *)absolutePathForAssetKey:(NSString *)arg0 andSize:(struct CGSize)arg1;
- (NSString *)absolutePathForStillAssetAtPath:(NSString *)arg0 andSize:(struct CGSize)arg1;
- (NSString *)imageDataForAssetKey:(NSString *)arg0 andSize:(struct CGSize)arg1;
- (void)_playbackStart;
- (void)_playbackStop;
- (NSString *)_assetForAssetKey:(NSString *)arg0;
- (void)_playbackConsumedAssetKey:(NSString *)arg0;
- (NSString *)_copyImageForAssetKey:(NSString *)arg0 decode:(char)arg1;
- (void)_playbackEnded:(id)arg0;
- (void)_playbackSlideChanged:(NSNotification *)arg0;
- (void)_playbackUserPlayPause:(id)arg0;
- (void)_playbackUserStop:(id)arg0;
- (void)_playbackUserNext:(id)arg0;
- (void)_playbackUserPrevious:(id)arg0;
- (void)_postProgressEvent:(NSObject *)arg0;
- (void)_playbackRunStateMachine;
- (unsigned int)_bufferedAssetCount;
- (void)_playbackPrefetchDone;
- (void)_playbackPrefetch;
- (void)_playbackProducedAssetData:(NSData *)arg0 withAssetInfo:(NSDictionary *)arg1;
- (void)_pruneAssets;
- (NSSet *)_oldestAsset;
- (AirPlayLocalSlideshow *)initWithServer:(MediaControlServer *)arg0;
- (void)setPresentationLayer:(CALayer *)arg0;
- (void)setServerSessionID:(unsigned int)arg0;
- (NSDictionary *)slideshowInfo;
- (NSDictionary *)startSlideshowWithInfo:(NSDictionary *)arg0 error:(id *)arg1;
- (NSDictionary *)stopSlideshowWithInfo:(NSDictionary *)arg0 error:(id *)arg1;

@end
