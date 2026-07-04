/* Runtime dump - SSPurchaseHistoryItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseHistoryItem : NSObject <SSXPCCoding, NSCopying>
{
    NSMutableDictionary * _properties;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSPurchaseHistoryItem *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (SSPurchaseHistoryItem *)copyWithZone:(struct _NSZone *)arg0;
- (void *)valueForProperty:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;

@end
