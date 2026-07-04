/* Runtime dump - NSStringROMKeySet_Embedded
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSStringROMKeySet_Embedded : NSSharedKeySet

- (unsigned int)indexForCString:(char *)arg0 length:(unsigned int)arg1 key:(struct __CFString * *)arg2;
- (NSStringROMKeySet_Embedded *)initWithKeys:(id *)arg0 count:(unsigned int)arg1;
- (void)dealloc;
- (NSStringROMKeySet_Embedded *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSStringROMKeySet_Embedded *)init;
- (char)isEmpty;
- (void)finalize;

@end
