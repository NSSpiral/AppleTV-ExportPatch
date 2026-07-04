/* Runtime dump - ATVFavoritesProvider
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRProvider;

@class ATVFavoritesControlFactory;
@interface ATVFavoritesProvider : NSObject <BRProvider>
{
    NSArray * _favorites;
    ATVFavoritesControlFactory * _factory;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)providerWithItemType:(int)arg0;
+ (ATVFavoritesProvider *)providerWithFavorites:(NSArray *)arg0;
+ (NSString *)provider;

- (long)dataCount;
- (id /* <BRControlFactory> */)controlFactory;
- (NSString *)hashForDataAtIndex:(long)arg0;
- (ATVFavoritesProvider *)initWithFavorites:(NSArray *)arg0;
- (void)_favoritesChanged:(NSNotification *)arg0;
- (void)dealloc;
- (NSObject *)dataAtIndex:(long)arg0;

@end
