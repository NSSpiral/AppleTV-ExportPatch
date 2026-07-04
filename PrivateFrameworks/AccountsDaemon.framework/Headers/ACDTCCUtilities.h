/* Runtime dump - ACDTCCUtilities
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDTCCUtilities : NSObject

+ (struct __CFString *)_TCCServiceForAccountTypeID:(NSObject *)arg0;
+ (int)TCCStateForClient:(NSObject *)arg0 accountTypeID:(NSObject *)arg1;
+ (char)TCCSupportedForAccountTypeID:(NSObject *)arg0;
+ (char)setTCCStateForClient:(NSObject *)arg0 accountTypeID:(NSObject *)arg1 toGranted:(char)arg2;
+ (char)clearTCCStateForClient:(NSObject *)arg0 accountTypeID:(NSObject *)arg1;
+ (NSObject *)allTCCStatesForAccountTypeID:(NSObject *)arg0;
+ (char)clearAllTCCStatesForAccountTypeID:(NSObject *)arg0;

@end
