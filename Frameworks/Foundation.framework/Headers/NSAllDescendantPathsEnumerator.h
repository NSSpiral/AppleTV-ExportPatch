/* Runtime dump - NSAllDescendantPathsEnumerator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator
{
    NSString * path;
    NSArray * contents;
    unsigned int idx;
    NSString * prepend;
    NSAllDescendantPathsEnumerator * under;
    NSFileAttributes * directoryAttributes;
    NSString * pathToLastReportedItem;
    unsigned int depth;
    char cross;
    id _padding;
}

+ (NSString *)newWithPath:(NSString *)arg0 prepend:(NSString *)arg1 attributes:(NSDictionary *)arg2 cross:(char)arg3 depth:(unsigned int)arg4;

- (void)skipDescendents;
- (NSAllDescendantPathsEnumerator *)_under;
- (NSDictionary *)currentSubdirectoryAttributes;
- (void)dealloc;
- (NSObject *)nextObject;
- (unsigned int)level;
- (void)skipDescendants;
- (NSDictionary *)fileAttributes;
- (NSFileAttributes *)directoryAttributes;

@end
