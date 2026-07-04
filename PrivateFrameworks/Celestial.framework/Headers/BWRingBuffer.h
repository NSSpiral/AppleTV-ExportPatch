/* Runtime dump - BWRingBuffer
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRingBuffer : NSObject <NSFastEnumeration>
{
    void * _ringBuffer;
    int _outputIndex;
    int _inputIndex;
    int _length;
    unsigned long _typeSize;
}

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (int)count;
- (void)incrementRingIndex:(int *)arg0;
- (void)incrementRingIndex:(int *)arg0 withCount:(int)arg1;
- (int)lastElementIndex;
- (int)firstElementIndex;
- (int)lastElementIndexPlusOne;
- (BWRingBuffer *)initWithLength:(int)arg0 dataTypeSize:(unsigned long)arg1;
- (void)appendElement:(void *)arg0;
- (void)removeFirstElements:(int)arg0;
- (void *)firstElement;
- (void *)lastElement;
- (void *)elementAtIndex:(int)arg0;

@end
