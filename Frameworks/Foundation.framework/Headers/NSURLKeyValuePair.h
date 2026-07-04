/* Runtime dump - NSURLKeyValuePair
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLKeyValuePair : NSObject
{
    id key;
    id value;
    unsigned int hash;
}

+ (NSString *)pairWithKey:(NSString *)arg0 value:(NSObject *)arg1;
+ (NSURLKeyValuePair *)pair;

- (NSURLKeyValuePair *)initWithKey:(NSString *)arg0 value:(NSObject *)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)key;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void)setKey:(NSString *)arg0;

@end
