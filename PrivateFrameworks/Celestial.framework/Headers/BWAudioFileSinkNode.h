/* Runtime dump - BWAudioFileSinkNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWAudioFileSinkNode : BWFileSinkNode
{
    FigStateMachine * _stateMachine;
    struct OpaqueFigFormatWriter * _formatWriter;
    struct OpaqueCMByteStream * _byteStream;
    int _trackID;
    char _didBeginFileWriterSession;
    char * _parentPath;
    FigCaptureAudioFileRecordingSettings * _settings;
    struct ? _curFileDuration;
    unsigned long long _curFileSize;
    unsigned long long _adjustedMinFreeDiskSpace;
    NSObject<OS_dispatch_queue> * _propertySyncQueue;
}

+ (void)initialize;

- (void)dealloc;
- (BWAudioFileSinkNode *)init;
- (void)_setupStateMachine;
- (void)_stopRecordingWithError:(long)arg0;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (long)_handleMarkerBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (long)_applyRecordingLimits;
- (void)_updateFilePropertiesForSbuf:(struct opaqueCMSampleBuffer *)arg0;
- (long)_setupFileWriter;
- (void)_setupMinFreeDiskSpace;
- (long)_teardownFileWriter;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (struct ?)lastFileDuration;
- (unsigned long long)lastFileSize;

@end
