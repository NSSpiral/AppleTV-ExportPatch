/* Runtime dump - WMFReader
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMFReader : NSObject <MFReader>
{
    int m_recordsRead;
    WMFPlayer * m_player;
    unsigned int m_length;
    char * m_pBuffer;
    unsigned int m_cursor;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)release;
- (void)dealloc;
- (WMFReader *)initWithWMFPlayer:(WMFPlayer *)arg0;
- (int)playHeaders;
- (int)playRecord;
- (int)checkBytesAvailable:(unsigned int)arg0;
- (int)moveDataCursor:(unsigned int)arg0;
- (int)play:(NSData *)arg0;

@end
