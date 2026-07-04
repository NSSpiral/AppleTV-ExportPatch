/* Runtime dump - NSFilesystemItemRemoveOperation
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilesystemItemRemoveOperation : NSOperation
{
    id _delegate;
    NSString * _removePath;
    NSError * _error;
    void * _state;
    char _filterUnderbars;
}

+ (NSFilesystemItemRemoveOperation *)filesystemItemRemoveOperationWithPath:(NSString *)arg0;
+ (NSFilesystemItemRemoveOperation *)_errorWithErrno:(int)arg0 atPath:(NSString *)arg1;

- (char)_filtersUnderbars;
- (void)_setFilterUnderbars:(char)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (NSFilesystemItemRemoveOperation *)initWithPath:(NSString *)arg0;
- (void)main;
- (NSError *)error;
- (void)_setError:(NSError *)arg0;

@end
