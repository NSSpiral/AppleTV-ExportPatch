/* Runtime dump - SSWishlist
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSWishlist : NSObject
{
    long long _accountIdentifier;
    SSSQLiteDatabase * _database;
}

@property (readonly, nonatomic) long long accountIdentifier;
@property (copy, nonatomic) NSNumber * lastSyncTime;

+ (char)existsForAccountIdentifier:(long long)arg0;

- (SSWishlist *)initWithAccountIdentifier:(long long)arg0;
- (void)dealloc;
- (long long)accountIdentifier;
- (void)performTransactionWithBlock:(id /* block */)arg0;
- (char)deleteBackingStore;
- (NSNumber *)lastSyncTime;
- (void)setLastSyncTime:(NSNumber *)arg0;

@end
