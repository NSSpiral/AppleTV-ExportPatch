/* Runtime dump - NSAKDeserializerStream
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAKDeserializerStream : NSObject <NSDeserializerStream>
{
    void * memory;
    char * current;
    unsigned int left;
    unsigned int max;
    char freeWhenDone;
}

- (NSAKDeserializerStream *)initFromMemoryNoCopy:(void *)arg0 length:(void)arg1 freeWhenDone:(unsigned int)arg2;
- (int)readInt;
- (unsigned int)readAlignedDataSize;
- (void)readData:(void *)arg0 length:(unsigned int)arg1;
- (NSAKDeserializerStream *)initFromPath:(NSString *)arg0;
- (void)dealloc;
- (void)finalize;

@end
