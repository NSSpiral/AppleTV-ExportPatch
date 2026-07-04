/* Runtime dump - NSJSONSerialization
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSJSONSerialization : NSObject
{
    id reserved;
}

+ (int)writeJSONObject:(NSObject *)arg0 toStream:(NSObject *)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (NSObject *)JSONObjectWithStream:(NSObject *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
+ (NSJSONSerialization *)allocWithZone:(struct _NSZone *)arg0;
+ (char)isValidJSONObject:(NSObject *)arg0;
+ (NSObject *)dataWithJSONObject:(NSObject *)arg0 options:(unsigned int)arg1 error:(id *)arg2;
+ (NSData *)JSONObjectWithData:(NSData *)arg0 options:(unsigned int)arg1 error:(id *)arg2;

- (NSJSONSerialization *)init;

@end
