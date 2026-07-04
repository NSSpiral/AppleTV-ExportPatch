/* Runtime dump - GEONetworkDataReader
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONetworkDataReader : NSObject
{
    NSMutableData * _data;
    unsigned int _dataLength;
    void * _bytes;
    unsigned int _bookmarkOffset;
    unsigned int _offset;
}

- (void)dealloc;
- (GEONetworkDataReader *)initWithData:(NSMutableData *)arg0;
- (char)readUnsignedShort:(unsigned short *)arg0;
- (NSData *)allData;
- (void)appendNetworkData:(NSData *)arg0;
- (NSString *)readString;
- (char)readUnsignedInt:(unsigned int *)arg0;
- (NSData *)readData:(unsigned int)arg0;
- (void)markOffset;
- (void)seekToMarkedOffset;
- (char)hasUnreadData;

@end
