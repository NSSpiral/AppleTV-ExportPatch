/* Runtime dump - NSFilesystemItemMoveOperation
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilesystemItemMoveOperation : NSOperation
{
    id _delegate;
    NSString * _sourcePath;
    NSString * _destinationPath;
    NSError * _error;
}

+ (NSFilesystemItemMoveOperation *)filesystemItemMoveOperationWithSourcePath:(NSString *)arg0 destinationPath:(NSString *)arg1;
+ (NSFilesystemItemMoveOperation *)_errorWithErrno:(int)arg0 sourcePath:(NSString *)arg1 destinationPath:(NSString *)arg2;

- (char)filesystemItemCopyOperation:(NSObject *)arg0 shouldProceedAfterError:(NSError *)arg1 copyingItemAtPath:(NSString *)arg2 toPath:(NSString *)arg3;
- (void)initWithSourcePath:(NSString *)arg0 destinationPath:(NSString *)arg1;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)main;
- (NSError *)error;
- (void)_setError:(NSError *)arg0;

@end
