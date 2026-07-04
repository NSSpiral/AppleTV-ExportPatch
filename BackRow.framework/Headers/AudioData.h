/* Runtime dump - AudioData
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class Buffer;
@interface AudioData : NSObject
{
    int flags;
    int pid;
    int audioFormat;
    int channelCount;
    int sampleCount;
    NSString * audioLanguageCode;
}

- (int)getFlags;
- (AudioData *)initWithBuffer:(Buffer *)arg0;
- (int)getPID;
- (int)getAudioFormat;
- (int)getChannelCount;
- (int)getSampleCount;
- (id)getAudioLanguageCode;
- (void).cxx_destruct;

@end
