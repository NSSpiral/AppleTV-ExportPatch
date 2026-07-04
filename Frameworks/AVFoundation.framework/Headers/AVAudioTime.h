/* Runtime dump - AVAudioTime
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioTime : NSObject
{
    struct AudioTimeStamp _ats;
    double _sampleRate;
    void * _reserved;
}

@property (readonly, nonatomic) char hostTimeValid;
@property (readonly, nonatomic) unsigned long long hostTime;
@property (readonly, nonatomic) char sampleTimeValid;
@property (readonly, nonatomic) long long sampleTime;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) struct AudioTimeStamp audioTimeStamp;

+ (NSDate *)timeWithAudioTimeStamp:(struct AudioTimeStamp *)arg0 sampleRate:(struct AudioTimeStamp)arg1;
+ (double)secondsForHostTime:(unsigned long long)arg0;
+ (AVAudioTime *)timeWithHostTime:(unsigned long long)arg0;
+ (AVAudioTime *)timeWithSampleTime:(long long)arg0 atRate:(double)arg1;
+ (AVAudioTime *)timeWithHostTime:(unsigned long long)arg0 sampleTime:(long long)arg1 atRate:(double)arg2;
+ (unsigned long long)hostTimeForSeconds:(double)arg0;

- (AVAudioTime *)initWithHostTime:(unsigned long long)arg0;
- (AVAudioTime *)initWithSampleTime:(long long)arg0 atRate:(double)arg1;
- (AVAudioTime *)initWithHostTime:(unsigned long long)arg0 sampleTime:(long long)arg1 atRate:(double)arg2;
- (struct AudioTimeStamp)audioTimeStamp;
- (AVAudioTime *)initWithAudioTimeStamp:(struct AudioTimeStamp *)arg0 sampleRate:(struct AudioTimeStamp)arg1;
- (char)isHostTimeValid;
- (char)isSampleTimeValid;
- (id)extrapolateTimeFromAnchor:(id)arg0;
- (AVAudioTime *)init;
- (NSString *)description;
- (void).cxx_construct;
- (unsigned long long)hostTime;
- (double)sampleRate;
- (long long)sampleTime;

@end
