/* Runtime dump - TSUDateFormatter_FormatterCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDateFormatter_FormatterCache : NSObject
{
    NSLock * _dateFormatterCacheLock;
    NSMutableDictionary * _dateFormatterCache;
}

+ (NSDate *)dateFormatterStringFromDate:(NSDate *)arg0 withFormat:(NSString *)arg1 locale:(NSObject *)arg2;

- (NSDate *)dateFormatterStringFromDate:(NSDate *)arg0 withFormat:(NSString *)arg1 locale:(NSObject *)arg2;
- (void)dealloc;
- (TSUDateFormatter_FormatterCache *)init;

@end
