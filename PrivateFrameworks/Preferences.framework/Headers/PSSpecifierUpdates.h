/* Runtime dump - PSSpecifierUpdates
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierUpdates : NSObject <NSCopying>
{
    NSMutableArray * _currentSpecifiers;
    NSMutableArray * _updates;
    PSSpecifierGroupIndex * _groupIndex;
    char _wantsDebugCallbacks;
    NSArray * _originalSpecifiers;
    PSSpecifierUpdateContext * _context;
}

@property (readonly, copy, nonatomic) NSArray * originalSpecifiers;
@property (readonly, copy, nonatomic) NSArray * currentSpecifiers;
@property (readonly, copy, nonatomic) NSArray * updates;
@property (copy, nonatomic) PSSpecifierUpdateContext * context;
@property (readonly, copy, nonatomic) PSSpecifierGroupIndex * groupIndex;

+ (char)_wantsDebugCallbacks;
+ (Class)_groupIndexClass;
+ (NSArray *)updatesWithSpecifiers:(id)arg0;
+ (void)_assertSpecifierIDsAreUnique:(id)arg0;
+ (NSArray *)updatesByDiffingSpecifiers:(id)arg0 withSpecifiers:(NSArray *)arg1 changedBlock:(id /* block */)arg2;

- (void)dealloc;
- (PSSpecifierUpdates *)init;
- (NSString *)description;
- (PSSpecifierUpdates *)_init;
- (PSSpecifierUpdates *)copyWithZone:(struct _NSZone *)arg0;
- (PSSpecifierUpdateContext *)context;
- (void)setContext:(PSSpecifierUpdateContext *)arg0;
- (char)reloadSpecifier:(id)arg0;
- (unsigned int)indexOfSpecifier:(id)arg0;
- (NSObject *)specifierForID:(NSObject *)arg0;
- (NSArray *)originalSpecifiers;
- (NSArray *)currentSpecifiers;
- (void)enumerateUpdatesUsingBlock:(id /* block */)arg0;
- (char)reloadSpecifierAtIndex:(unsigned int)arg0;
- (char)insertSpecifier:(id)arg0 atIndex:(unsigned int)arg1;
- (char)insertSpecifier:(id)arg0 afterSpecifier:(id)arg1;
- (char)insertContiguousSpecifiers:(id)arg0 atIndex:(unsigned int)arg1;
- (char)insertContiguousSpecifiers:(id)arg0 afterSpecifier:(id)arg1;
- (char)removeSpecifier:(PSPhoneNumberSpecifier *)arg0;
- (char)removeSpecifierAtIndex:(unsigned int)arg0;
- (PSSpecifierUpdates *)initWithSpecifiers:(id)arg0;
- (PSSpecifierUpdates *)initWithSpecifiers:(id)arg0 applyUpdates:(id)arg1;
- (char)_addAndApplyOperation:(NSObject *)arg0;
- (NSArray *)_initForCopyWithOriginalSpecifiers:(NSArray *)arg0 currentSpecifiers:(NSArray *)arg1 updates:(NSArray *)arg2;
- (id)_groupIndexCreatingIfNecessary;
- (unsigned int)indexOfSpecifierWithID:(int)arg0;
- (void)_didApplyOperation:(NSObject *)arg0;
- (void)_operationFailed:(id)arg0 reason:(NSString *)arg1;
- (char)_enumerateArrayWithConjuctionalResult:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (char)appendSpecifier:(id)arg0;
- (char)appendSpecifiers:(id)arg0 toGroupAtGroupIndex:(unsigned int)arg1;
- (char)appendSpecifiers:(id)arg0 toGroup:(NSObject *)arg1;
- (char)appendSpecifiers:(id)arg0 toGroupWithID:(int)arg1;
- (char)removeSpecifierWithID:(int)arg0;
- (char)removeSpecifiersInRange:(struct _NSRange)arg0;
- (char)removeSpecifiersInGroupAtGroupIndex:(unsigned int)arg0;
- (char)reloadSpecifiersInRange:(struct _NSRange)arg0;
- (char)reloadSpecifiersInGroupAtGroupIndex:(unsigned int)arg0;
- (char)reloadSpecifierWithID:(int)arg0;
- (char)moveSpecifierAtIndex:(unsigned int)arg0 toIndex:(unsigned int)arg1;
- (char)swapSpecifierAtIndex:(unsigned int)arg0 withSpecifierAtIndex:(unsigned int)arg1;
- (PSSpecifierGroupIndex *)groupIndex;
- (NSArray *)updates;
- (char)insertSpecifier:(id)arg0 atIndexPath:(NSIndexPath *)arg1;
- (char)insertSpecifier:(id)arg0 afterSpecifierWithID:(int)arg1;
- (char)insertContiguousSpecifiers:(id)arg0 afterSpecifierWithID:(int)arg1;
- (char)appendSpecifiers:(id)arg0;
- (char)appendSpecifier:(id)arg0 toGroupAtGroupIndex:(unsigned int)arg1;
- (char)appendSpecifier:(id)arg0 toGroup:(NSObject *)arg1;
- (char)appendSpecifier:(id)arg0 toGroupWithID:(int)arg1;
- (char)removeSpecifiers:(id)arg0;
- (char)removeSpecifiersWithIDs:(int)arg0;
- (char)removeSpecifierAtIndexPath:(NSIndexPath *)arg0;
- (char)removeSpecifiersInGroup:(NSObject *)arg0;
- (char)removeSpecifiersInGroupWithID:(int)arg0;
- (char)reloadSpecifiers:(id)arg0;
- (char)reloadSpecifiersInGroup:(NSObject *)arg0;
- (char)reloadSpecifiersInGroupWithID:(int)arg0;
- (char)reloadSpecifiersWithIDs:(int)arg0;
- (char)reloadSpecifierAtIndexPath:(NSIndexPath *)arg0;
- (char)moveSpecifierAtIndexPath:(NSIndexPath *)arg0 toIndexPath:(NSIndexPath *)arg1;
- (char)moveSpecifier:(id)arg0 toIndex:(unsigned int)arg1;
- (char)swapSpecifier:(id)arg0 withSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (NSString *)stepByStepDescription;
- (NSObject *)specifiersAfterApplyingUpdatesToIndex:(unsigned int)arg0;

@end
