/* Runtime dump - IFrameData
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class Buffer;
@interface IFrameData : NSObject
{
    unsigned char flags_;
    unsigned short entryCount_;
    NSMutableArray * iFrameIndexObjects_;
}

@property (nonatomic) unsigned char flags;
@property (nonatomic) unsigned short entryCount;
@property (retain, nonatomic) NSMutableArray * iFrameIndexObjects;

- (IFrameData *)initWithBuffer:(Buffer *)arg0 length:(unsigned int)arg1;
- (void)setEntryCount:(unsigned short)arg0;
- (NSMutableArray *)iFrameIndexObjects;
- (void)setIFrameIndexObjects:(NSMutableArray *)arg0;
- (void)setFlags:(unsigned char)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned char)flags;
- (unsigned short)entryCount;

@end
