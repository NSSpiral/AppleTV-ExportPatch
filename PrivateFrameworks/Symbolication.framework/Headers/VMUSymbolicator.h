/* Runtime dump - VMUSymbolicator
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUSymbolicator : NSObject
{
    struct _CSTypeRef _symbolicator;
}

+ (NSURLSessionTask *)symbolicatorForTask:(unsigned int)arg0;
+ (VMUSymbolicator *)symbolicatorForPid:(int)arg0;

- (VMUSymbolicator *)initWithTask:(unsigned int)arg0;
- (void)dealloc;
- (NSString *)sourceInfoForAddress:(unsigned long long)arg0;
- (NSString *)symbolForAddress:(unsigned long long)arg0;

@end
