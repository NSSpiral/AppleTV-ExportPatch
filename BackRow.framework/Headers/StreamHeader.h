/* Runtime dump - StreamHeader
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class AudioData, Buffer, DRMData, IFrameData, IFrameIndexOffsetObject, IndexData, StreamData, VideoData;
@interface StreamHeader : NSObject
{
    StreamData * streamData;
    VideoData * videoData;
    AudioData * audioData;
    IndexData * indexData;
    IFrameIndexOffsetObject * iFrameIndexOffset;
    IFrameData * iFrameData;
    DRMData * playReady_;
    DRMData * netflixKeyEnvelope_;
}

@property (retain, nonatomic) DRMData * playReady;
@property (retain, nonatomic) DRMData * netflixKeyEnvelope;

- (StreamHeader *)initWithBuffer:(Buffer *)arg0;
- (void)setPlayReady:(DRMData *)arg0;
- (void)setNetflixKeyEnvelope:(DRMData *)arg0;
- (NSData *)getStreamData;
- (NSData *)getVideoData;
- (NSData *)getAudioData;
- (id)getPlayReady;
- (id)getNetflixKeyEnvelope;
- (NSData *)getIndexData;
- (NSData *)getIFrameData;
- (NSSet *)getIFrameIndexOffset;
- (DRMData *)playReady;
- (DRMData *)netflixKeyEnvelope;
- (void).cxx_destruct;

@end
