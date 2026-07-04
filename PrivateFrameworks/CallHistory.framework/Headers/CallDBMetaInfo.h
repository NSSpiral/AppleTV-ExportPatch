/* Runtime dump - CallDBMetaInfo
 * Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallDBMetaInfo : NSObject

+ (void)writeDatabaseVersion:(int)arg0 isTemp:(char)arg1;
+ (int)readDatabaseVersion:(char)arg0;
+ (NSURL *)metInfoPlistURL;

@end
