/* Runtime dump - BWMotionSampleRingBuffer
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration>
{
    BWRingBuffer * _ringBuffer;
    double _maxDuration;
    int _maxCount;
}

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (unsigned int)count;
- (double)duration;
- (BWMotionSampleRingBuffer *)initWithMaxDuration:(double)arg0;
- (void)addMotionDataToRingBuffer:(struct ? *)arg0 withSampleCount:(int)arg1;
- (struct ? *)lastSample;

@end
