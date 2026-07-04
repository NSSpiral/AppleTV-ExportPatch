/* Runtime dump - UIMutableUserNotificationCategory
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMutableUserNotificationCategory : UIUserNotificationCategory
{
    NSString * identifier;
}

@property (copy, nonatomic) NSString * identifier;

- (NSString *)identifier;
- (UIMutableUserNotificationCategory *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void)setActions:(TSTLayoutProcessChangesActions *)arg0 forContext:(unsigned int)arg1;

@end
