/* Runtime dump - CKPackageManifest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKPackageManifest : NSObject

+ (char)readContentsOfFile:(NSString *)arg0 intoPackage:(id)arg1 error:(id *)arg2;
+ (char)writePackage:(id)arg0 toFile:(NSString *)arg1 error:(id *)arg2;
+ (NSString *)packageWithContentsOfFile:(NSString *)arg0 error:(id *)arg1;

@end
