/* Runtime dump - TSUASLLogCategoryController
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUASLLogCategoryController : NSObject
{
    NSMutableDictionary * _dictionary;
    NSObject<OS_dispatch_queue> * _queue;
    char _allCategoriesEnabledOverride;
}

@property (nonatomic) char allCategoriesEnabledOverride;

+ (TSUASLLogCategoryController *)sharedController;

- (void)readFromDefaults;
- (void)setAllCategoriesEnabledOverride:(char)arg0;
- (char)allCategoriesEnabledOverride;
- (char)isCategoryEnabled:(id)arg0;
- (void)setEnabled:(char)arg0 forCategory:(NSString *)arg1;
- (char)isCategoryDefined:(id)arg0;
- (void)removeCategory:(NSString *)arg0;
- (TSUASLLogCategoryController *)init;
- (NSArray *)categories;
- (void).cxx_destruct;

@end
