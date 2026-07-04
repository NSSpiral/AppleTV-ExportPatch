/* Runtime dump - MFByteSet
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFByteSet : NSObject <NSCopying, NSMutableCopying>
{
    id mySet;
}

+ (NSSet *)ASCIIByteSet;
+ (NSSet *)asciiWhitespaceSet;
+ (NSSet *)nonASCIIByteSet;
+ (NSSet *)suspiciousCodepage1252ByteSet;

- (MFByteSet *)copyWithZone:(struct _NSZone *)arg0;
- (MFByteSet *)initWithBytes:(void *)arg0 length:(void)arg1;
- (MFByteSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSSet *)_initWithSet:(char *)arg0;
- (char)byteIsMember:(char)arg0;
- (MFByteSet *)initWithCString:(char *)arg0;
- (MFByteSet *)initWithRange:(struct _NSRange)arg0;
- (NSCharacterSet *)invertedSet;

@end
