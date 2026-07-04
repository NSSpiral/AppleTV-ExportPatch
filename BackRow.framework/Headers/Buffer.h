/* Runtime dump - Buffer
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface Buffer : NSObject
{
    char * buf;
    int index;
    int bitMask;
    int length;
}

- (int)getInt:(char *)arg0;
- (Buffer *)initWithData:(char *)arg0 length:(unsigned int)arg1;
- (int)getLength;
- (int)getIndex;
- (int)getUnreadLength;
- (char *)getUnreadData;
- (int)getBits:(unsigned int)arg0 success:(char *)arg1;
- (int)getShort:(char *)arg0;
- (int)getByte:(char *)arg0;
- (long long)getLong:(char *)arg0;
- (NSString *)getString:(unsigned int)arg0 success:(char *)arg1;
- (NSString *)getNullTerminatedString:(char *)arg0;
- (NSData *)getBytes:(unsigned int)arg0 success:(char *)arg1;
- (Buffer *)initWithData:(char *)arg0 offset:(unsigned int)arg1 length:(unsigned int)arg2;

@end
