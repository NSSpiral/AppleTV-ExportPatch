/* Runtime dump - NSCondition
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCondition : NSObject <NSLocking>
{
    void * _priv;
}

@property (copy) NSString * name;

+ (NSCondition *)allocWithZone:(struct _NSZone *)arg0;

- (void)dealloc;
- (NSCondition *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)lock;
- (void)unlock;
- (void)signal;
- (char)waitUntilDate:(NSDate *)arg0;
- (void)broadcast;
- (void)wait;
- (void)finalize;

@end
