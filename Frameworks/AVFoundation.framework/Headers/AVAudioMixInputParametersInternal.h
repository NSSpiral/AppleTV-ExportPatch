/* Runtime dump - AVAudioMixInputParametersInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioMixInputParametersInternal : NSObject
{
    int trackID;
    AVMutableScheduledAudioParameters * scheduledAudioParameters;
    NSString * audioTimePitchAlgorithm;
    struct opaqueMTAudioProcessingTap * tap;
}

@end
