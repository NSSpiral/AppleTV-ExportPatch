/* Runtime dump - QLPathTree
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPathTree : NSObject
{
    NSString * _path;
    NSMutableDictionary * _directoryChildren;
    NSMutableArray * _packageChildren;
    QLPackageChecker * _packageChecker;
}

@property (readonly, copy) NSString * path;

- (QLPathTree *)initWithPath:(NSString *)arg0 isPackage:(char)arg1 packageChecker:(QLPackageChecker *)arg2;
- (void)addPathInsidePackage:(id)arg0;
- (void)addPathComponents:(NSArray *)arg0;
- (void)insertInItemsSource:(NSObject *)arg0 archiveController:(UIDocumentInteractionController *)arg1 atIndex:(unsigned int *)arg2 uiIndex:(unsigned int *)arg3 level:(int)arg4;
- (QLPathTree *)initWithPackageChecker:(QLPackageChecker *)arg0;
- (void)insertInItemsSource:(NSObject *)arg0 archiveController:(UIDocumentInteractionController *)arg1;
- (void)dealloc;
- (NSString *)description;
- (NSString *)path;
- (char)isPackage;
- (void)addPath:(NSString *)arg0;
- (char)isFolder;

@end
