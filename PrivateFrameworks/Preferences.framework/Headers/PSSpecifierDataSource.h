/* Runtime dump - PSSpecifierDataSource
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierDataSource : NSObject <PSSpecifierDataSource>
{
    NSMutableSet * _observerRefs;
    char _specifiersLoaded;
    NSMutableArray * _specifiers;
}

@property (readonly, nonatomic) NSMutableArray * specifiers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PSSpecifierDataSource *)sharedInstance;
+ (NSDictionary *)loadSpecifiersFromPlist:(id)arg0 inBundle:(NSObject *)arg1 target:(NSObject *)arg2 stringsTable:(NSDictionary *)arg3;

- (void)dealloc;
- (PSSpecifierDataSource *)init;
- (void)removeObserver:(NSObject *)arg0;
- (NSHashTable *)observers;
- (void)addObserver:(NSObject *)arg0;
- (NSMutableArray *)specifiers;
- (void)reloadSpecifiers;
- (id)specifiersForSpecifier:(id)arg0 observer:(NSObject *)arg1;
- (NSObject *)specifierForID:(NSObject *)arg0;
- (void)setPreferenceValue:(id)arg0 specifier:(PSSpecifier *)arg1;
- (id)readPreferenceValue:(id)arg0;
- (NSObject *)observersOfClass:(Class)arg0;
- (void)enumerateObserversOfClass:(Class)arg0 usingBlock:(id /* block */)arg1;
- (void)enumerateObserversUsingBlock:(id /* block */)arg0;
- (char)areSpecifiersLoaded;
- (void)loadSpecifiers;
- (void)_clearAllSpecifiers;
- (void)_invalidateSpecifiersForObservers;
- (void)performUpdates:(id)arg0;
- (void)performUpdatesAnimated:(char)arg0 usingBlock:(id /* block */)arg1;

@end
