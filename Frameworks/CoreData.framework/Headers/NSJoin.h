/* Runtime dump - NSJoin
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSJoin : NSObject <NSCoding, NSCopying>
{
    NSString * _sourceAttributeName;
    NSString * _destinationAttributeName;
}

+ (NSJoin *)joinWithSourceAttributeName:(NSString *)arg0 destinationAttributeName:(NSString *)arg1;

- (NSJoin *)initWithSourceAttributeName:(NSString *)arg0 destinationAttributeName:(NSString *)arg1;
- (NSString *)sourceAttributeName;
- (NSString *)destinationAttributeName;
- (void)dealloc;
- (NSJoin *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSJoin *)copyWithZone:(struct _NSZone *)arg0;

@end
