/* Runtime dump - PSSearchEntry
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchEntry : NSObject
{
    PSSearchEntry * _parentEntry;
    NSMutableSet * _childEntries;
    PSSpecifier * _specifier;
    NSString * _plistName;
    NSString * _bundleName;
    NSString * _manifestBundleName;
    PSSpecifier * _groupSpecifier;
    NSMutableArray * _keywords;
    PSSpecifierAction * _action;
}

@property (nonatomic) PSSearchEntry * parentEntry;
@property (readonly, retain, nonatomic) NSMutableSet * childEntries;
@property (readonly, retain, nonatomic) PSSpecifier * specifier;
@property (readonly, copy, nonatomic) NSString * identifier;
@property (readonly, copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * plistName;
@property (copy, nonatomic) NSString * bundleName;
@property (copy, nonatomic) NSString * manifestBundleName;
@property (retain, nonatomic) PSSpecifier * groupSpecifier;
@property (readonly, retain, nonatomic) NSMutableArray * keywords;
@property (retain, nonatomic) PSSpecifierAction * action;

- (PSSpecifier *)specifier;
- (void)dealloc;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)name;
- (NSString *)identifier;
- (PSSpecifierAction *)action;
- (void)setAction:(PSSpecifierAction *)arg0;
- (NSMutableArray *)keywords;
- (void)setBundleName:(NSString *)arg0;
- (PSSpecifier *)groupSpecifier;
- (NSMutableSet *)childEntries;
- (char)hasListController;
- (id)rootEntry;
- (char)isSectionEntry;
- (id)sectionEntry;
- (char)treeContainsPropertyForKey:(NSString *)arg0;
- (NSString *)manifestBundleName;
- (PSSearchEntry *)parentEntry;
- (NSArray *)ancestorEntries;
- (NSString *)plistName;
- (PSSearchEntry *)initWithSpecifier:(PSSpecifier *)arg0 parent:(NSObject *)arg1;
- (void)setPlistName:(NSString *)arg0;
- (void)setGroupSpecifier:(PSSpecifier *)arg0;
- (void)setManifestBundleName:(NSString *)arg0;
- (char)hasDetailController;
- (char)isRootEntry;
- (char)_hasDetailController:(char)arg0;
- (NSString *)hierarchyDescription;
- (void)setParentEntry:(PSSearchEntry *)arg0;
- (NSString *)bundleName;

@end
