/* Runtime dump - BRApplianceCategoryListProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl, BRListControl, BRMenuItem;
@interface BRApplianceCategoryListProvider : NSObject
{
    NSArray * _categories;
    NSDictionary * _attributes;
}

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (long)defaultCategoryIndex;
- (long)categoryIndexForIdentifier:(NSString *)arg0;
- (void)dealloc;
- (NSDictionary *)textAttributes;
- (void)setTextAttributes:(NSDictionary *)arg0;
- (NSArray *)categories;
- (void)setCategories:(NSArray *)arg0;

@end
