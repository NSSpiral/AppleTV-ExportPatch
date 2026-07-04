/* Runtime dump - ABMemberNameViewCache
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMemberNameViewCache : NSObject
{
    NSCache * _styleProvidersCache;
}

+ (ABMemberNameViewCache *)sharedInstance;

- (void)contentSizeCategoryDidChange:(NSDictionary *)arg0;
- (NSObject *)memberNameRegularFontForStyleProvider:(NSObject *)arg0;
- (NSObject *)regularTextAttributesForStyleProvider:(NSObject *)arg0;
- (NSObject *)boldTextAttributesForStyleProvider:(NSObject *)arg0;
- (NSObject *)placeholderTextAttributesForStyleProvider:(NSObject *)arg0;
- (NSObject *)_cacheForStyleProvider:(NSObject *)arg0;
- (NSObject *)memberNameBoldFontForStyleProvider:(NSObject *)arg0;
- (NSObject *)memberNamePlaceholderFontForStyleProvider:(NSObject *)arg0;
- (void)dealloc;
- (ABMemberNameViewCache *)init;

@end
