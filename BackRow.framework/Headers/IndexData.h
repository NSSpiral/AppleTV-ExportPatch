/* Runtime dump - IndexData
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class Buffer;
@interface IndexData : NSObject
{
    int flags;
    int ivSize;
    NSArray * chunkList;
}

- (IndexData *)initWithBuffer:(Buffer *)arg0 length:(unsigned int)arg1;
- (int)getFlags;
- (int)getIVSize;
- (id)getChunks;
- (void).cxx_destruct;

@end
