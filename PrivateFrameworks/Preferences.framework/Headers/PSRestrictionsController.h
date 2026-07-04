/* Runtime dump - PSRestrictionsController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSRestrictionsController : NSObject

+ (NSArray *)restrictionSpecifiers;
+ (void)setSpringBoardCapability:(NSObject *)arg0 enabled:(char)arg1;
+ (PSRestrictionsController *)TCCServices;
+ (void)resetRestrictions;
+ (void)resetRestrictionsPassword;

@end
