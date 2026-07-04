/* Runtime dump - NSCheapMutableString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCheapMutableString : NSMutableString
{
    id contents;
    struct ? flags;
    unsigned int numCharacters;
    void * _reserved;
}

- (char *)cString;
- (unsigned int)cStringLength;
- (unsigned int)fastestEncoding;
- (char *)lossyCString;
- (void)setContentsNoCopy:(void *)arg0 length:(unsigned int)arg1 freeWhenDone:(char)arg2 isUnicode:(char)arg3;
- (void)dealloc;
- (unsigned int)length;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;
- (char)getBytes:(void *)arg0 maxLength:(unsigned int)arg1 usedLength:(unsigned int *)arg2 encoding:(unsigned int)arg3 options:(unsigned int)arg4 range:(struct _NSRange)arg5 remainingRange:(struct _NSRange *)arg6;
- (void)finalize;

@end
