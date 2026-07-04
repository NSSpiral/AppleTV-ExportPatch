/* Runtime dump - ISPersonalizeOffersRequest
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISPersonalizeOffersRequest : NSObject <NSCopying>
{
    NSNumber * _accountIdentifier;
    NSMutableDictionary * _itemIDsByType;
}

@property (retain, nonatomic) NSNumber * accountIdentifier;
@property (readonly, nonatomic) NSArray * allItemTypes;

- (void)setAccountIdentifier:(NSNumber *)arg0;
- (void)dealloc;
- (ISPersonalizeOffersRequest *)copyWithZone:(struct _NSZone *)arg0;
- (ISPersonalizeOffersRequest *)initWithItems:(NSArray *)arg0;
- (NSNumber *)accountIdentifier;
- (NSArray *)allItemTypes;
- (NSObject *)itemIdentifiersForItemType:(NSObject *)arg0;
- (void)addItemIdentifier:(NSString *)arg0 forItemType:(NSObject *)arg1;

@end
