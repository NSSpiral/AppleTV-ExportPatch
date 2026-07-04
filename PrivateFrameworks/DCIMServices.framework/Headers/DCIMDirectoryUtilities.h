/* Runtime dump - DCIMDirectoryUtilities
 * Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface DCIMDirectoryUtilities : NSObject

+ (NSURL *)photoDCIMDirectoryURL;
+ (DCIMDirectoryUtilities *)photoDataDirectory;
+ (NSURL *)photoDataDirectoryURL;
+ (DCIMDirectoryUtilities *)photoDataMiscDirectory;
+ (DCIMDirectoryUtilities *)photoDataCPLDirectory;
+ (DCIMDirectoryUtilities *)photoDCIMDirectory;

@end
