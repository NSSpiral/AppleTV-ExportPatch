/* Runtime dump - NSStream
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSStream : NSObject

@property <NSStreamDelegate> * delegate;
@property (readonly) unsigned int streamStatus;
@property (readonly, copy) NSError * streamError;

+ (void)createBoundInputStream:(id *)arg0 outputStream:(id *)arg1 bufferSize:(unsigned int)arg2;
+ (void)getBoundStreamsWithBufferSize:(unsigned int)arg0 inputStream:(id *)arg1 outputStream:(id *)arg2;
+ (void)getStreamsToHostWithName:(NSString *)arg0 port:(int)arg1 inputStream:(id *)arg2 outputStream:(id *)arg3;
+ (void)getStreamsToHost:(NSString *)arg0 port:(int)arg1 inputStream:(id *)arg2 outputStream:(id *)arg3;

- (unsigned int)streamStatus;
- (void)setDelegate:(<NSStreamDelegate> *)arg0;
- (<NSStreamDelegate> *)delegate;
- (void)close;
- (void)open;
- (NSError *)streamError;
- (NSString *)propertyForKey:(NSString *)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;

@end
