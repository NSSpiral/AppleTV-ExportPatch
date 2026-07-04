/* Runtime dump - FFTMeter
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface FFTMeter : NSObject
{
    struct vDSP_DFT_SetupStruct * fftSetup;
    struct DSPSplitComplex dspSplitComplex;
    id sampleHistory;
    id magnitudeBuffer;
    id fftBuffer;
    id windowBuffer;
    id windowHistory;
    id octaveDbOld;
    id octaveDb;
    id octaveDbFilt;
    id lerpIdxs;
    float fftNormFactor;
    float adjust0DB;
}

- (void)dealloc;
- (FFTMeter *)init;
- (NSObject *)computeWithSampleBuffer:(char *)arg0 numSamples:(unsigned int)arg1 voiceActive:(char)arg2;

@end
