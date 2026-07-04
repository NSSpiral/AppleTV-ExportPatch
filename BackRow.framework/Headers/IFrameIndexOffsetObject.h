/* Runtime dump - IFrameIndexOffsetObject
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class Buffer;
@interface IFrameIndexOffsetObject : NSObject
{
    unsigned char flags_;
    unsigned short pid_;
    unsigned int indexSize_;
    unsigned long long startOffset_;
}

@property (nonatomic) unsigned char flags;
@property (nonatomic) unsigned short pid;
@property (nonatomic) unsigned long long startOffset;
@property (nonatomic) unsigned int indexSize;

- (IFrameIndexOffsetObject *)initWithBuffer:(Buffer *)arg0 length:(unsigned int)arg1;
- (unsigned int)indexSize;
- (void)setIndexSize:(unsigned int)arg0;
- (void)setFlags:(unsigned char)arg0;
- (NSString *)description;
- (unsigned long long)startOffset;
- (void)setStartOffset:(unsigned long long)arg0;
- (unsigned short)pid;
- (unsigned char)flags;
- (void)setPid:(unsigned short)arg0;

@end
