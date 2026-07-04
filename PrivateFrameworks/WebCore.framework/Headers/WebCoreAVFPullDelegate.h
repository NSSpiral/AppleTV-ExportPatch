/* Runtime dump - WebCoreAVFPullDelegate
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate>
{
    struct MediaPlayerPrivateAVFoundationObjC * m_callback;
    NSObject<OS_dispatch_semaphore> * m_semaphore;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (WebCoreAVFPullDelegate *)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC *)arg0;
- (void)setCallback:(struct MediaPlayerPrivateAVFoundationObjC *)arg0;
- (void)outputSequenceWasFlushed:(id)arg0;
- (void)outputMediaDataWillChange:(NSDictionary *)arg0;

@end
