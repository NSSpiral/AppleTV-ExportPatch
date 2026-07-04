/* Runtime dump - AVVCAudioBuffer
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVVCAudioBuffer : NSObject
{
    void * _impl;
}

@property (readonly) int channels;
@property (readonly) int bytesCapacity;
@property int bytesDataSize;
@property (readonly) void * data;
@property (readonly) int packetDescriptionCapacity;
@property (readonly) int packetDescriptionCount;
@property (readonly) struct AudioStreamPacketDescription * packetDescriptions;

- (AVVCAudioBuffer *)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer *)arg0 channels:(unsigned int)arg1;
- (int)bytesCapacity;
- (int)bytesDataSize;
- (void)setBytesDataSize:(int)arg0;
- (int)packetDescriptionCapacity;
- (int)packetDescriptionCount;
- (struct AudioStreamPacketDescription *)packetDescriptions;
- (void)setPacketDescriptions:(struct AudioStreamPacketDescription *)arg0 count:(struct AudioStreamPacketDescription)arg1;
- (int)channels;
- (void)dealloc;
- (void *)data;
- (void)finalize;

@end
