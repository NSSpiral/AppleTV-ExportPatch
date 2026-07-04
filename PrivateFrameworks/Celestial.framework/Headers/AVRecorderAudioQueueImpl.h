/* Runtime dump - AVRecorderAudioQueueImpl
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl>
{
    char _isActive;
    char _isRecording;
    char _isWriting;
    NSMutableDictionary * _attributes;
    unsigned long _fileType;
    unsigned long _audioCodec;
    long long _maxPCMFramesToRecord;
    char _haveRecordedMaxPCMFrames;
    struct AudioStreamBasicDescription _recordingFormat;
    struct OpaqueAudioFileID * _audioFile;
    struct OpaqueAudioQueue * _audioQueue;
    unsigned long _numDeviceChannels;
    struct AudioQueueLevelMeterState * _audioLevels;
    struct AudioQueueLevelMeterState * _audioLevelsDB;
    unsigned long _totalBytesRecorded;
    unsigned long _totalPacketsRecorded;
    unsigned long _totalFramesRecorded;
    id _buffers;
    id _bufferUsed;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)isRecording;
- (double)recordedDuration;
- (char)takePhoto;
- (void)dealloc;
- (AVRecorderAudioQueueImpl *)init;
- (char)isActive;
- (void)stop;
- (void)deactivate;
- (char)start;
- (void)setFilePath:(NSString *)arg0;
- (NSString *)filePath;
- (char)activate:(id *)arg0;
- (char)autoFocusAtPoint:(struct CGPoint)arg0;
- (float)micVolume;
- (void)setMicVolume:(float)arg0;
- (long long)recordedFileSizeInBytes;
- (unsigned int)audioNumDeviceChannels;
- (char)audioCurrentAverageVolumeLevels:(float *)arg0 andPeakVolumeLevels:(float *)arg1;
- (char)audioCurrentAverageDecibelLevels:(float *)arg0 andPeakDecibelLevels:(float *)arg1;
- (void)copyEncoderCookieToFile;
- (char)audioCurrentAverageVolumeLevels:(float *)arg0 andPeakVolumeLevels:(float *)arg1 useDB:(char)arg2;
- (void)haveABuffer:(struct AudioQueueBuffer *)arg0 withTimeStamp:(unsigned int)arg1 andNumPackets:(id)arg2 andPacketDescs:(struct AudioTimeStamp *)arg3;
- (void)setAttribute:(char *)arg0 forKey:(NSString *)arg1;
- (NSString *)attributeForKey:(NSString *)arg0;
- (AVRecorderAudioQueueImpl *)initWithAttributes:(NSMutableDictionary *)arg0;

@end
