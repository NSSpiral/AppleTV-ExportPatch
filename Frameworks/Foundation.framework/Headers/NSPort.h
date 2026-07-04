/* Runtime dump - NSPort
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPort : NSObject <NSCopying, NSCoding>

@property (readonly) char valid;
@property (readonly) unsigned int reservedSpaceLength;

+ (NSPort *)portWithMachPort:(unsigned int)arg0;
+ (NSPort *)allocWithZone:(struct _NSZone *)arg0;
+ (NSPort *)port;

- (NSCoder *)replacementObjectForCoder:(NSCoder *)arg0;
- (unsigned int)machPort;
- (NSPort *)initWithMachPort:(unsigned int)arg0;
- (char)sendBeforeDate:(NSDate *)arg0 components:(NSArray *)arg1 from:(NSObject *)arg2 reserved:(unsigned int)arg3;
- (unsigned int)reservedSpaceLength;
- (Class)classForPortCoder;
- (char)sendBeforeDate:(NSDate *)arg0 msgid:(unsigned int)arg1 components:(NSArray *)arg2 from:(NSObject *)arg3 reserved:(unsigned int)arg4;
- (NSPort *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)invalidate;
- (char)isValid;
- (NSPort *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (void)scheduleInRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;
- (void)removeFromRunLoop:(NSObject *)arg0 forMode:(struct __CFString *)arg1;

@end
