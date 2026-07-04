/* Runtime dump - CMFileManager
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMFileManager : NSObject

+ (NSString *)uniqueFileName:(NSString *)arg0;
+ (CMFileManager *)getTmpDirectory;
+ (int)getFileTypeFromPath:(NSString *)arg0;
+ (int)getFileTypeFromUTI:(id)arg0;
+ (NSString *)canonicalUrlPrefix:(NSString *)arg0;
+ (NSObject *)getUrlProtocol:(NSObject *)arg0;

@end
