/* Runtime dump - NSMultiReadUniWriteLock
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMultiReadUniWriteLock : NSObject <NSLocking>
{
    void * _priv;
}

+ (NSMultiReadUniWriteLock *)allocWithZone:(struct _NSZone *)arg0;

- (void)lockForReading;
- (char)tryLockForReading;
- (char)lockForReadingBeforeDate:(NSDate *)arg0;
- (void)lockForWriting;
- (char)tryLockForWriting;
- (char)lockForWritingBeforeDate:(NSDate *)arg0;
- (void)dealloc;
- (NSMultiReadUniWriteLock *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)lock;
- (void)unlock;
- (void)finalize;

@end
