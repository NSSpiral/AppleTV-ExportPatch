/* Runtime dump - SBUIPasscodeLockViewFactory
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewFactory : NSObject

+ (NSObject *)passcodeLockViewForStyle:(int)arg0;
+ (NSObject *)_passcodeLockViewForStyle:(int)arg0 withLightStyle:(char)arg1;
+ (NSObject *)lightPasscodeLockViewForStyle:(int)arg0;
+ (void)_warmupKBDIfNecessary;
+ (NSObject *)passcodeLockViewForUsersCurrentStyle;
+ (NSObject *)lightPasscodeLockViewForUsersCurrentStyle;

@end
