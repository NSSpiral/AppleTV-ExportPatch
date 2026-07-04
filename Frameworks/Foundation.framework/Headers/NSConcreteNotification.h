/* Runtime dump - NSConcreteNotification
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteNotification : NSNotification
{
    NSString * name;
    id object;
    NSDictionary * userInfo;
    char dyingObject;
}

+ (NSString *)newTempNotificationWithName:(NSString *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;

- (void)recycle;
- (void)dealloc;
- (NSString *)name;
- (NSDictionary *)userInfo;
- (NSObject *)object;
- (NSConcreteNotification *)initWithName:(NSString *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;

@end
