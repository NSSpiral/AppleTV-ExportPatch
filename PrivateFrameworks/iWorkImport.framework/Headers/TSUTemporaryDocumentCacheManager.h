/* Runtime dump - TSUTemporaryDocumentCacheManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUTemporaryDocumentCacheManager : TSUTemporaryDirectoryManager

+ (NSURL *)baseDirectoryURL;
+ (TSUTemporaryDocumentCacheManager *)sharedManager;

@end
