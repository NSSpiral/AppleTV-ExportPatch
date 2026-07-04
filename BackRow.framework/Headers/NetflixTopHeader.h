/* Runtime dump - NetflixTopHeader
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface NetflixTopHeader : NSObject
{
    int startOffset;
    unsigned short version;
    unsigned short headerObjectPID;
    unsigned char drm;
    unsigned int crc;
}

- (NetflixTopHeader *)initWithData:(char *)arg0 length:(unsigned int)arg1;
- (int)getStartOffset;
- (unsigned short)getVersion;
- (unsigned short)getHeaderObjectPID;
- (unsigned char)getDrm;
- (unsigned int)getCrc;

@end
