/* Runtime dump - NSFilesystemItemLinkOperation
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation

+ (NSFilesystemItemLinkOperation *)filesystemItemLinkOperationWithSourcePath:(NSString *)arg0 destinationPath:(NSString *)arg1;
+ (char)_needsStatInfo;
+ (NSFilesystemItemLinkOperation *)_errorWithErrno:(int)arg0 sourcePath:(NSString *)arg1 destinationPath:(NSString *)arg2;

- (char)_validatePaths:(id *)arg0;
- (void)_handleFTSEntry:(struct _ftsent *)arg0;
- (char)shouldProceedAfterError:(NSError *)arg0 linkingItemAtPath:(NSString *)arg1 toPath:(NSString *)arg2;
- (char)shouldLinkItemAtPath:(NSString *)arg0 toPath:(NSString *)arg1;
- (char)_shouldLinkItemAtPath:(char *)arg0 toPath:(char *)arg1;
- (char)_shouldProceedAfterErrno:(int)arg0 linkingItemAtPath:(char *)arg1 toPath:(char *)arg2;

@end
