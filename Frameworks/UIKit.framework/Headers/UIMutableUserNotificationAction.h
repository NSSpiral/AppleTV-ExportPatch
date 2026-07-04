/* Runtime dump - UIMutableUserNotificationAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMutableUserNotificationAction : UIUserNotificationAction

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSString * title;
@property (nonatomic) unsigned int activationMode;
@property (nonatomic) char authenticationRequired;
@property (nonatomic) char destructive;

- (UIMutableUserNotificationAction *)copyWithZone:(struct _NSZone *)arg0;

@end
