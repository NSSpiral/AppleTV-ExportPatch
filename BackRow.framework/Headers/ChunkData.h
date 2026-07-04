/* Runtime dump - ChunkData
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class Buffer;
@interface ChunkData : NSObject
{
    int reserved;
    long long pts;
    long long startOffset;
    int chunkSize;
    NSData * iv;
}

- (ChunkData *)initWithBuffer:(Buffer *)arg0 ivSize:(unsigned int)arg1;
- (int)getReserved;
- (long long)getPTSInNS;
- (long long)getPTS;
- (long long)getStartOffset;
- (int)getChunkSize;
- (id)getIV;
- (void).cxx_destruct;

@end
