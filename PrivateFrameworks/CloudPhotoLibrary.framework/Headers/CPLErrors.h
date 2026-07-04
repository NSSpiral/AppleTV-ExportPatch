/* Runtime dump - CPLErrors
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLErrors : NSObject

+ (NSError *)unknownError;
+ (NSString *)incorrectMachineStateErrorWithReason:(NSString *)arg0;
+ (CPLErrors *)cplErrorWithCode:(int)arg0 underlyingError:(NSError *)arg1 description:(NSString *)arg2;
+ (NSURL *)posixErrorForURL:(NSURL *)arg0;
+ (NSError *)invalidClientCacheError;
+ (CPLErrors *)incorrectParametersErrorForParameter:(id)arg0;
+ (CPLErrors *)cplErrorWithCode:(int)arg0 description:(NSString *)arg1;
+ (CPLErrors *)cplErrorWithCode:(int)arg0 description:(NSString *)arg1 arguments:(void *)arg2;
+ (CPLErrors *)cplErrorWithCode:(int)arg0 underlyingError:(NSError *)arg1 userInfo:(NSDictionary *)arg2 description:(NSString *)arg3 arguments:(void *)arg4;
+ (NSString *)underlyingErrorWithReason:(NSString *)arg0;
+ (NSError *)versionMismatchError;
+ (NSError *)notImplementedError;
+ (NSError *)transportErrorFromTransportError:(NSError *)arg0;
+ (NSError *)libraryClosedError;
+ (NSError *)invalidCloudCacheError;
+ (NSError *)invalidDaemonErrorWithConnectionError:(NSError *)arg0;
+ (CPLErrors *)cplErrorWithCode:(int)arg0 underlyingError:(NSError *)arg1 description:(NSString *)arg2 arguments:(void *)arg3;
+ (CPLErrors *)cplErrorWithCode:(int)arg0 underlyingError:(NSError *)arg1 userInfo:(NSDictionary *)arg2 description:(NSString *)arg3;
+ (NSError *)missingError;
+ (NSError *)operationCancelledError;

@end
