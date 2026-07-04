/* Runtime dump - GKRingBuffer
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface GKRingBuffer : NSObject
{
    void * ringBufRef;
    unsigned long endTime;
    unsigned long capacity;
    unsigned long bytesPerFrame;
}

- (void)dealloc;
- (GKRingBuffer *)init;
- (GKRingBuffer *)initWithCapacity:(unsigned long)arg0 bytesPerFrame:(unsigned long)arg1;
- (void)increaseCapacity:(unsigned long)arg0;
- (char)store:(char *)arg0 numSamples:(unsigned long)arg1 timestamp:(unsigned long)arg2;
- (long)needsNewNumSamples:(unsigned long)arg0 timestamp:(unsigned long)arg1;
- (long)fetch:(char *)arg0 numSamples:(unsigned long)arg1 timestamp:(unsigned long)arg2;

@end
