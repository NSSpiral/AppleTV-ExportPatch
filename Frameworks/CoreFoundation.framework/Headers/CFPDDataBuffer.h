/* Runtime dump - CFPDDataBuffer
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDDataBuffer : NSObject

+ (NSString *)newBufferFromFile:(int)arg0 allowMappingIfSafe:(char)arg1;
+ (NSArray *)newBufferFromPropertyList:(void *)arg0;
+ (NSData *)newBufferFromCFData:(struct __CFData *)arg0;

- (char)beginAccessing;
- (void)endAccessing;
- (char)validatePlist;
- (void *)copyPropertyListWithMutability:(unsigned long)arg0;
- (NSData *)copyXPCData;
- (struct __CFData *)copyCFData;
- (unsigned long)length;
- (void *)bytes;

@end
