/* Runtime dump - PLChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLChangeNotification : NSNotification

@property (readonly, retain, nonatomic) PLChangeNotificationCenter * changeNotificationCenter;

+ (NSString *)notificationWithName:(NSString *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;

- (PLChangeNotificationCenter *)changeNotificationCenter;
- (void)_calculateDiffs;

@end
