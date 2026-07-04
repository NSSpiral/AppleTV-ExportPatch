/* Runtime dump - AVAudioFile
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioFile : NSObject
{
    void * _impl;
}

@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) AVAudioFormat * fileFormat;
@property (readonly, nonatomic) AVAudioFormat * processingFormat;
@property (readonly, nonatomic) long long length;
@property (nonatomic) long long framePosition;

- (AVAudioFile *)initSecondaryReader:(NSObject *)arg0 format:(NSString *)arg1 error:(id *)arg2;
- (void)setFramePosition:(long long)arg0;
- (char)readIntoBuffer:(NSObject *)arg0 frameCount:(unsigned int)arg1 error:(id *)arg2;
- (long long)framePosition;
- (AVAudioFile *)initForReading:(id)arg0 commonFormat:(unsigned int)arg1 interleaved:(char)arg2 error:(id *)arg3;
- (AVAudioFile *)initForWriting:(AXSubsystemVOTHandwriting *)arg0 settings:(NSDictionary *)arg1 commonFormat:(unsigned int)arg2 interleaved:(char)arg3 error:(id *)arg4;
- (AVAudioFile *)initForReading:(id)arg0 error:(id *)arg1;
- (AVAudioFile *)initForWriting:(AXSubsystemVOTHandwriting *)arg0 settings:(NSDictionary *)arg1 error:(id *)arg2;
- (char)readIntoBuffer:(NSObject *)arg0 error:(id *)arg1;
- (char)writeFromBuffer:(NSObject *)arg0 error:(id *)arg1;
- (AVAudioFormat *)processingFormat;
- (AVAudioFormat *)fileFormat;
- (void)dealloc;
- (long long)length;
- (NSURL *)url;

@end
