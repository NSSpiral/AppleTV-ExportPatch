/* Runtime dump - ID3Header
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ID3Header : NSObject
{
    int dataOffset;
    int headerSize;
}

@property (nonatomic) int dataOffset;
@property (nonatomic) int headerSize;

- (void)buildWithByteData:(char *)arg0 withLength:(int)arg1 success:(char *)arg2;
- (ID3Header *)initWithByteData:(char *)arg0 withLength:(int)arg1;
- (int)headerSize;
- (void)setHeaderSize:(int)arg0;
- (void)setDataOffset:(int)arg0;
- (int)dataOffset;
- (ID3Header *)initWithData:(NSData *)arg0;

@end
