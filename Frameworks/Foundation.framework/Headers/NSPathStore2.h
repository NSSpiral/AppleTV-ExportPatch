/* Runtime dump - NSPathStore2
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPathStore2 : NSString
{
    unsigned int _lengthAndRefCount;
    id _characters;
}

+ (NSPathStore2 *)pathStoreWithCharacters:(unsigned short *)arg0 length:(unsigned short)arg1;
+ (NSArray *)pathWithComponents:(NSArray *)arg0;

- (NSCache *)_stringByResolvingSymlinksInPathUsingCache:(char)arg0;
- (NSCache *)_stringByStandardizingPathUsingCache:(char)arg0;
- (char)isEqualToString:(NSString *)arg0;
- (unsigned int)hash;
- (NSString *)stringByAppendingPathComponent:(id)arg0;
- (unsigned int)length;
- (NSString *)stringByResolvingSymlinksInPath;
- (NSArray *)pathComponents;
- (char)isAbsolutePath;
- (NSString *)stringByStandardizingPath;
- (NSString *)lastPathComponent;
- (NSPathStore2 *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)pathExtension;
- (NSString *)stringByDeletingPathExtension;
- (NSString *)stringByAppendingPathExtension:(id)arg0;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (NSString *)stringByDeletingLastPathComponent;
- (void)getCharacters:(unsigned short *)arg0 range:(struct _NSRange)arg1;
- (NSString *)stringByAbbreviatingWithTildeInPath;
- (NSString *)stringByExpandingTildeInPath;

@end
