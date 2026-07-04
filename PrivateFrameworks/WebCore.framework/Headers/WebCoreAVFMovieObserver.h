/* Runtime dump - WebCoreAVFMovieObserver
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate>
{
    struct MediaPlayerPrivateAVFoundationObjC * m_callback;
    int m_delayCallbacks;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(int)arg3;
- (void)disconnect;
- (WebCoreAVFMovieObserver *)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC *)arg0;
- (void)didEnd:(char)arg0;
- (void)legibleOutput:(AVPlayerItemLegibleOutput *)arg0 didOutputAttributedStrings:(id)arg1 nativeSampleBuffers:(id)arg2 forItemTime:(struct ?)arg3;
- (void)outputSequenceWasFlushed:(id)arg0;
- (void)metadataLoaded;

@end
