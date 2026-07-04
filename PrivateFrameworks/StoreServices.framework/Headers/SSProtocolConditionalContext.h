/* Runtime dump - SSProtocolConditionalContext
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSProtocolConditionalContext : NSObject <NSCopying>
{
    id _itemLookupBlock;
    NSString * _platformName;
    NSString * _systemVersion;
}

@property (copy, nonatomic) id itemLookupBlock;
@property (copy, nonatomic) NSString * platformName;
@property (copy, nonatomic) NSString * systemVersion;

- (void)dealloc;
- (NSString *)systemVersion;
- (SSProtocolConditionalContext *)copyWithZone:(struct _NSZone *)arg0;
- (id /* block */)itemLookupBlock;
- (NSString *)platformName;
- (void)setItemLookupBlock:(id /* block */)arg0;
- (void)setPlatformName:(NSString *)arg0;
- (void)setSystemVersion:(NSString *)arg0;

@end
