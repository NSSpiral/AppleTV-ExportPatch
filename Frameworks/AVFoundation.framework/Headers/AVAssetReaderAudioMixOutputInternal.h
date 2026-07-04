/* Runtime dump - AVAssetReaderAudioMixOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderAudioMixOutputInternal : NSObject
{
    NSArray * audioTracks;
    AVAudioMix * audioMix;
    NSMutableDictionary * audioVolumeCurvesForTracks;
    NSMutableDictionary * audioTimePitchAlgorithmsForTracks;
    NSMutableDictionary * audioTapProcessorsForTracks;
    AVAudioOutputSettings * audioOutputSettings;
    NSString * audioTimePitchAlgorithm;
}

@end
