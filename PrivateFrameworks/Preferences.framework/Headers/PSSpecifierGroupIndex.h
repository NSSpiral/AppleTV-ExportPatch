/* Runtime dump - PSSpecifierGroupIndex
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierGroupIndex : NSObject <NSCopying>
{
    NSMutableArray * _specifiers;
    NSMutableArray * _groupSections;
    NSMutableArray * _groupSpecifiers;
    NSMutableArray * _ungroupedPrefixSpecifiers;
    char _wantsDebugCallbacks;
}

@property (readonly, copy, nonatomic) NSArray * specifiers;
@property (readonly, copy, nonatomic) NSArray * groupSpecifiers;

+ (char)_wantsDebuggingCallbacks;
+ (NSArray *)groupIndexWithSpecifiers:(NSArray *)arg0;

- (unsigned int)indexOfGroup:(NSObject *)arg0;
- (void)dealloc;
- (PSSpecifierGroupIndex *)init;
- (NSString *)description;
- (PSSpecifierGroupIndex *)_init;
- (PSSpecifierGroupIndex *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)specifiers;
- (char)getGroup:(unsigned int *)arg0 row:(unsigned int)arg1 ofSpecifierAtIndex:(unsigned int *)arg2;
- (NSObject *)specifiersInGroup:(NSObject *)arg0;
- (char)getGroup:(unsigned int *)arg0 row:(unsigned int)arg1 ofSpecifier:(unsigned int *)arg2;
- (NSIndexPath *)indexPathForSpecifier:(id)arg0;
- (void)performSpecifierUpdates:(id)arg0;
- (unsigned int)numberOfGroups;
- (PSSpecifierGroupIndex *)initWithSpecifiers:(NSArray *)arg0;
- (void)performUpdateOperation:(NSObject *)arg0;
- (unsigned int)indexOfSpecifierAtIndexPath:(NSIndexPath *)arg0 forInsertion:(char)arg1;
- (struct _NSRange)rangeOfSpecifiersInGroupAtGroupIndex:(unsigned int)arg0;
- (NSArray *)groupSpecifiers;
- (unsigned int)indexOfSpecifierAtIndexPath:(NSIndexPath *)arg0;
- (unsigned int)groupIndexOfGroup:(NSObject *)arg0;
- (unsigned int)groupIndexOfGroupWithID:(int)arg0;
- (void)performSpecifierUpdatesUsingBlock:(id /* block */)arg0;
- (void)_createGroupIndex;
- (NSObject *)_initForCopyWithGroupIndex:(PSSpecifierGroupIndex *)arg0;
- (NSArray *)_ungroupedPrefixSpecifiers;
- (void)reloadWithSpecifiers:(NSArray *)arg0;
- (void)performUpdateOperation:(NSObject *)arg0 forSpecifierUpdates:(PSSpecifierUpdates *)arg1;
- (void)_willPerformOperation:(NSObject *)arg0 forSpecifierUpdates:(PSSpecifierUpdates *)arg1;
- (void)_getSection:(unsigned int *)arg0 row:(unsigned int)arg1 forSpecifierAtIndex:(unsigned int *)arg2 forInsertion:(unsigned int)arg3;
- (void)_didPerformOperation:(NSObject *)arg0 forSpecifierUpdates:(PSSpecifierUpdates *)arg1;
- (void)_getSection:(unsigned int *)arg0 row:(unsigned int)arg1 forSpecifierAtIndex:(unsigned int *)arg2 forInsertion:(unsigned int)arg3 allowGroupSpecifiers:(unsigned int)arg4;
- (unsigned int)_indexOfSpecifierInSection:(unsigned int)arg0 row:(unsigned int)arg1 forInsertion:(char)arg2;
- (NSObject *)indexPathForSpecifierAtIndex:(unsigned int)arg0 forInsertion:(char)arg1;
- (NSObject *)indexPathForSpecifierAtIndex:(unsigned int)arg0;
- (NSObject *)specifiersInGroupAtGroupIndex:(unsigned int)arg0;
- (unsigned int)indexOfGroupAtGroupIndex:(unsigned int)arg0;
- (id)_tabStringOfDepth:(unsigned int)arg0;
- (void)_appendDescriptionOfArray:(NSArray *)arg0 toString:(NSString *)arg1 withTabLevel:(unsigned int)arg2;
- (unsigned int)numberOfRowsInGroupAtIndex:(unsigned int)arg0;
- (void)_manuallyFindSection:(unsigned int *)arg0 row:(unsigned int)arg1 forSpecifierAtIndex:(unsigned int *)arg2;
- (NSString *)specifierAtIndexPath:(NSIndexPath *)arg0;
- (NSObject *)indexPathForSpecifierWithID:(int)arg0;
- (char)getGroup:(unsigned int *)arg0 row:(unsigned int)arg1 ofSpecifierWithID:(unsigned int *)arg2;
- (struct _NSRange)rangeOfSpecifiersInGroup:(NSObject *)arg0;
- (struct _NSRange)rangeOfSpecifiersInGroupWithID:(int)arg0;
- (NSObject *)specifiersInGroupWithID:(int)arg0;
- (unsigned int)indexOfGroupWithID:(int)arg0;
- (NSArray *)_groupSections;
- (NSObject *)_synthesizedSpecifiersFromGroupIndex;

@end
