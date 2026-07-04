/* Runtime dump - NSDirectorySubpathsOperation
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation
{
    NSMutableArray * _subpaths;
}

+ (NSDirectorySubpathsOperation *)directorySubpathsOperationAtPath:(NSString *)arg0;
+ (NSDirectorySubpathsOperation *)_errorWithErrno:(int)arg0 atPath:(NSString *)arg1;

- (NSMutableArray *)subpaths;
- (void)handlePathname:(id)arg0;
- (void)dealloc;

@end
