/* Runtime dump - NSAKSerializerStream
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAKSerializerStream : NSObject <NSSerializerStream>
{
    void * memory;
    unsigned int current;
    unsigned int max;
    struct __CFDictionary * roomForIntLocations;
}

- (void)copySerializationInto:(void *)arg0;
- (unsigned int)writeInt:(unsigned int)arg0;
- (unsigned int)writeAlignedDataSize:(unsigned int)arg0;
- (unsigned int)writeData:(void *)arg0 length:(void)arg1;
- (unsigned int)writeRoomForInt:(int *)arg0;
- (void)writeDelayedInt:(unsigned int)arg0 for:(int)arg1;
- (char)writeToPath:(NSString *)arg0 safely:(char)arg1;
- (void)dealloc;
- (void)finalize;

@end
