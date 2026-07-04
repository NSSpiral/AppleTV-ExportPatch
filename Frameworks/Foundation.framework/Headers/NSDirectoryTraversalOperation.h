/* Runtime dump - NSDirectoryTraversalOperation
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDirectoryTraversalOperation : NSOperation
{
    id _delegate;
    NSString * _sourcePath;
    NSError * _error;
    void * _stream;
    int _optionsFlags;
    int _lastDeviceInode;
    char _shouldFilterUnderbars;
    char _stopped;
    NSMutableArray * _deviceEntryPoints;
    NSMutableArray * _deviceNumbers;
}

+ (char)_needsStatInfo;
+ (NSDirectoryTraversalOperation *)_errorWithErrno:(int)arg0 atPath:(NSString *)arg1;
+ (NSDirectoryTraversalOperation *)directoryTraversalOperationAtPath:(NSString *)arg0;

- (char)_shouldFilterEntry:(struct _ftsent *)arg0;
- (void)handlePathname:(id)arg0;
- (char)shouldProceedAfterError:(NSError *)arg0;
- (char)_validatePaths:(id *)arg0;
- (void)_handleFTSEntry:(struct _ftsent *)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (NSDirectoryTraversalOperation *)initWithPath:(NSString *)arg0;
- (void)main;
- (NSError *)error;
- (void)_setError:(NSError *)arg0;

@end
