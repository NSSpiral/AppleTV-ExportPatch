/* Runtime dump - SBJsonUTF8Stream
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface SBJsonUTF8Stream : NSObject
{
    char * _bytes;
    NSMutableData * _data;
    unsigned int _length;
    unsigned int _index;
}

@property unsigned int index;

- (char)haveRemainingCharacters:(unsigned int)arg0;
- (char)skipCharacters:(char *)arg0 length:(unsigned int)arg1;
- (char)getNextUnichar:(unsigned short *)arg0;
- (char)getSimpleString:(id *)arg0;
- (char)getUnichar:(unsigned short *)arg0;
- (NSObject *)stringWithRange:(struct _NSRange)arg0;
- (SBJsonUTF8Stream *)init;
- (unsigned int)index;
- (void)appendData:(NSData *)arg0;
- (void).cxx_destruct;
- (void)setIndex:(unsigned int)arg0;
- (void)skipWhitespace;
- (void)skip;

@end
