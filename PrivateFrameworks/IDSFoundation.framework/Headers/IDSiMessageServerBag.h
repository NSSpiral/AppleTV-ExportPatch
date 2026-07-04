/* Runtime dump - IDSiMessageServerBag
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSiMessageServerBag : IDSServerBag

+ (IDSiMessageServerBag *)sharedInstance;
+ (IDSiMessageServerBag *)_bagCreationLock;
+ (NSObject *)_sharedInstanceForClass:(Class)arg0;

- (IDSiMessageServerBag *)init;
- (NSString *)_bagDefaultsDomain;

@end
