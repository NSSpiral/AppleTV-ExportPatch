/* Runtime dump - NSFilesystemItemCopyOperation
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation
{
    NSString * _destinationPath;
    NSMutableSet * _skippedPaths;
}

+ (NSFilesystemItemCopyOperation *)filesystemItemCopyOperationWithSourcePath:(NSString *)arg0 destinationPath:(NSString *)arg1;
+ (NSFilesystemItemCopyOperation *)_errorWithErrno:(int)arg0 sourcePath:(NSString *)arg1 destinationPath:(NSString *)arg2;

- (char)_validatePaths:(id *)arg0;
- (void)_handleFTSEntry:(struct _ftsent *)arg0;
- (void)initWithSourcePath:(NSString *)arg0 destinationPath:(NSString *)arg1;
- (char)shouldCopyItemAtPath:(NSString *)arg0 toPath:(NSString *)arg1;
- (char)shouldProceedAfterError:(NSError *)arg0 copyingItemAtPath:(NSString *)arg1 toPath:(NSString *)arg2;
- (char)_shouldCopyItemAtPath:(char *)arg0 toPath:(char *)arg1;
- (char)_shouldProceedAfterErrno:(int)arg0 copyingItemAtPath:(char *)arg1 toPath:(char *)arg2;
- (void)dealloc;

@end
