/* Runtime dump - INManagedDefaults
 * Image: /System/Library/PrivateFrameworks/iCloudNotification.framework/iCloudNotification
 */

@interface INManagedDefaults : NSObject

+ (INManagedDefaults *)sharedInstance;

- (id)_readManagedDefaults;
- (void)_writeManagedDefaults:(id)arg0;
- (void)setValue:(NSObject *)arg0 forManagedDefault:(id)arg1;
- (id)valueForManagedDefault:(id)arg0;

@end
