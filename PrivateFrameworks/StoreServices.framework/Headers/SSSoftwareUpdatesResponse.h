/* Runtime dump - SSSoftwareUpdatesResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareUpdatesResponse : NSObject
{
    NSError * _error;
    char _failed;
    NSArray * _updateItems;
}

@property (readonly) NSError * error;
@property (readonly) char failed;
@property (readonly) NSArray * updateItems;

- (char)isFailed;
- (NSDictionary *)copyXPCEncoding;
- (SSSoftwareUpdatesResponse *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSArray *)updateItems;
- (NSError *)error;
- (id)copyUpdateItemDictionaries;
- (void)setUpdateItemsWithItemDictionaries:(id)arg0;
- (SSSoftwareUpdatesResponse *)initWithError:(NSError *)arg0;

@end
