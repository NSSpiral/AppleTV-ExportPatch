/* Runtime dump - NSInputStream
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSInputStream : NSStream

@property (readonly) char hasBytesAvailable;

+ (NSInputStream *)inputStreamWithData:(NSData *)arg0;
+ (NSInputStream *)allocWithZone:(struct _NSZone *)arg0;
+ (NSInputStream *)inputStreamWithURL:(NSString *)arg0;
+ (NSInputStream *)inputStreamWithFileAtPath:(NSString *)arg0;

- (struct ?)_cfStreamError;
- (unsigned long)_cfTypeID;
- (char)getBuffer:(char * *)arg0 length:(unsigned int *)arg1;
- (char)hasBytesAvailable;
- (int)read:(char *)arg0 maxLength:(unsigned int)arg1;

@end
