/* Runtime dump - SSVContentLink
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVContentLink : NSObject
{
    NSString * _categoryName;
    int _contentKind;
    NSNumber * _itemIdentifier;
    NSString * _itemTitle;
    NSString * _providerName;
    NSString * _searchTerm;
    int _targetApplication;
}

@property (nonatomic) int contentKind;
@property (nonatomic) int targetApplication;
@property (readonly, nonatomic) NSURL * URL;
@property (copy, nonatomic) NSString * categoryName;
@property (copy, nonatomic) NSNumber * itemIdentifier;
@property (copy, nonatomic) NSString * itemTitle;
@property (copy, nonatomic) NSString * providerName;
@property (copy, nonatomic) NSString * searchTerm;

- (NSString *)searchTerm;
- (void)setSearchTerm:(NSString *)arg0;
- (void)setItemIdentifier:(NSNumber *)arg0;
- (NSURL *)URL;
- (NSString *)itemTitle;
- (void).cxx_destruct;
- (NSString *)providerName;
- (NSNumber *)itemIdentifier;
- (int)targetApplication;
- (int)contentKind;
- (int)_targetApplicationWithContentKind:(int)arg0;
- (id)_URLSchemeWithApplication:(int)arg0;
- (NSString *)_stringForContentKind:(int)arg0;
- (NSString *)categoryName;
- (void)setCategoryName:(NSString *)arg0;
- (void)setContentKind:(int)arg0;
- (void)setItemTitle:(NSString *)arg0;
- (void)setProviderName:(NSString *)arg0;
- (void)setTargetApplication:(int)arg0;

@end
