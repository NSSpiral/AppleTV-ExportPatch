/* Runtime dump - CKDirectoryPurger
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDirectoryPurger : NSObject
{
    id _shouldSkipFileBlock;
    id _shouldRemoveFileBlock;
    NSArray * _paths;
}

@property (copy, nonatomic) id shouldSkipFileBlock;
@property (copy, nonatomic) id shouldRemoveFileBlock;
@property (retain, nonatomic) NSArray * paths;

+ (void)purgeDirectoryAtPath:(NSString *)arg0;

- (void)purge;
- (void).cxx_destruct;
- (CKDirectoryPurger *)initWithPaths:(NSArray *)arg0;
- (void)setShouldRemoveFileBlock:(id /* block */)arg0;
- (NSArray *)paths;
- (id /* block */)shouldSkipFileBlock;
- (id /* block */)shouldRemoveFileBlock;
- (void)setShouldSkipFileBlock:(id /* block */)arg0;
- (void)setPaths:(NSArray *)arg0;

@end
