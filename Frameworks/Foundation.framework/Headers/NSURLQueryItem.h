/* Runtime dump - NSURLQueryItem
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLQueryItem : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _name;
    NSString * _value;
}

@property (readonly) NSString * name;
@property (readonly) NSString * value;

+ (char)supportsSecureCoding;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;
+ (NSString *)queryItemWithName:(NSString *)arg0 value:(NSString *)arg1;

- (NSURLQueryItem *)initWithName:(NSString *)arg0 value:(NSString *)arg1;
- (void)dealloc;
- (NSURLQueryItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSURLQueryItem *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (NSString *)value;
- (NSURLQueryItem *)copyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
