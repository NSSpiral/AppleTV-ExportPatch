/* Runtime dump - NSOutputStream
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSOutputStream : NSStream

@property (readonly) char hasSpaceAvailable;

+ (NSOutputStream *)outputStreamToMemory;
+ (NSOutputStream *)outputStreamToBuffer:(char *)arg0 capacity:(unsigned int)arg1;
+ (NSOutputStream *)allocWithZone:(struct _NSZone *)arg0;
+ (NSOutputStream *)outputStreamWithURL:(NSString *)arg0 append:(char)arg1;
+ (NSOutputStream *)outputStreamToFileAtPath:(NSString *)arg0 append:(char)arg1;

- (struct ?)_cfStreamError;
- (unsigned long)_cfTypeID;
- (char)hasSpaceAvailable;
- (int)write:(char *)arg0 maxLength:(unsigned int)arg1;

@end
