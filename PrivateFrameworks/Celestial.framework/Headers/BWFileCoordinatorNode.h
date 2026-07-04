/* Runtime dump - BWFileCoordinatorNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFileCoordinatorNode : BWNode
{
    NSArray * _stagingQueues;
    FigCaptureRecordingSettings * _settings;
    long long _currSettingsID;
    int _recordingState;
    BWNodeInput * _masterInput;
    struct ? _inputOffset;
    struct ? _lastMasterPTS;
    struct ? _lastMasterDuration;
    struct ? _lastMasterEndingPTS;
    struct ? _masterStartingPTS;
    struct ? _largestStagedSupportingAudioVideoStagedPTS;
    struct ? _largestMetadataPTS;
    struct ? _masterStoppingPTS;
    char _haveSeenAudioWhenStarting;
    char _lowLatencyCanTransitionEarlyToRecording;
    char _lowLatencyCanTossExtraVideoWhenStopping;
    char _firstAudioHasBeenProcessed;
    struct OpaqueCMBlockBuffer * _emptyMetadataSampleData;
    struct opaqueCMFormatDescription * * _formatDescriptionsForInputs;
    struct OpaqueFigSimpleMutex * _stateMutex;
    unsigned int _numInputs;
    unsigned int _numOutputs;
    unsigned int _numVideoInputs;
    unsigned int _numAudioInputs;
    unsigned int _numMetadataInputs;
    unsigned int _numActionOnlyOutputs;
    unsigned int _masterInputIndex;
    char _lowLatencyModeEnabled;
}

+ (void)initialize;

- (void)dealloc;
- (BWFileCoordinatorNode *)init;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)recordingTerminated:(unsigned long long)arg0;
- (void)resumeRecording:(id *)arg0;
- (void)pauseRecording:(id *)arg0;
- (void)stopRecording:(id *)arg0;
- (void)startRecordingWithSettings:(FigCaptureRecordingSettings *)arg0 error:(id *)arg1;
- (BWFileCoordinatorNode *)initWithNumberOfVideoInputs:(unsigned int)arg0 numberOfAudioInputs:(unsigned int)arg1 numberOfMetadataInputs:(unsigned int)arg2 numberOfActionOnlyOutputs:(unsigned int)arg3 allowLowLatencyWhenPossible:(char)arg4;
- (void)_doStartingToRecordWithSBuf:(struct opaqueCMSampleBuffer *)arg0 inputIndex:(unsigned int)arg1 sbufPTS:(struct ?)arg2;
- (void)_emitSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1 toOutput:(NSObject *)arg2;
- (struct opaqueCMSampleBuffer *)_copyFirstValidLowLatencyAudioBuffer:(struct opaqueCMSampleBuffer *)arg0 inputIndex:(unsigned int)arg1 sbufPTS:(struct ?)arg2;
- (void)_doStoppingOrPausingWithSBuf:(struct opaqueCMSampleBuffer *)arg0 inputIndex:(unsigned int)arg1 sbufPTS:(struct ?)arg2;
- (void)_prepareToStartRecordingWithSettings:(FigCaptureRecordingSettings *)arg0;
- (void)_finishStoppingOrPausing:(char)arg0;
- (void)_emitMarkerBufferForFileWriterAction:(struct __CFString *)arg0 withPTS:(struct ?)arg1 actionOutputsOnly:(char)arg2;
- (void)_prepareToPauseOrStopRecording;
- (void)_prepareToResumeRecording;
- (struct opaqueCMSampleBuffer *)_createEmptyMetadataSBufWithPTS:(struct ?)arg0 forInputIndex:(unsigned int)arg1;
- (void)_emitStagedBufferForIndex:(unsigned int)arg0;
- (void)handleDroppedSample:(NSObject *)arg0 forInput:(NSObject *)arg1;
- (void)_printStagingEvent:(struct opaqueCMSampleBuffer *)arg0 forNodeInputIndex:(unsigned int)arg1;

@end
