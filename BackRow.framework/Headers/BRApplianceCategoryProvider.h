/* Runtime dump - BRApplianceCategoryProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;
@interface BRApplianceCategoryProvider : NSObject <BRProvider>
{
    NSArray * _categories;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (long)defaultCategoryIndex;
- (long)categoryIndexForIdentifier:(NSString *)arg0;
- (void)dealloc;
- (NSArray *)categories;
- (NSObject *)dataAtIndex:(long)arg0;
- (void)setCategories:(NSArray *)arg0;

@end
