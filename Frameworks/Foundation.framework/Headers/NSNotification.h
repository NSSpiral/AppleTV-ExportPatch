/* Runtime dump - NSNotification
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNotification : NSObject <NSCopying, NSCoding>

@property (readonly, copy) NSString * name;
@property (readonly, retain) id object;
@property (readonly, copy) NSDictionary * userInfo;

+ (NSNotification *)notificationWithName:(NSString *)arg0 object:(NSObject *)arg1;
+ (NSNotification *)allocWithZone:(struct _NSZone *)arg0;
+ (NSNotification *)notificationWithName:(NSString *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;

- (NSCoder *)replacementObjectForPortCoder:(NSCoder *)arg0;
- (NSNotification *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSNotification *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (NSNotification *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (NSDictionary *)userInfo;
- (NSObject *)object;
- (NSNotification *)initWithName:(NSString *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;

@end
