/* Runtime dump - SBKPullValueResponse
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKPullValueResponse : SBKResponse
{
    NSString * _itemKey;
    NSString * _itemVersion;
    NSData * _itemValuePayload;
    NSString * _domainVersion;
}

@property (readonly) NSString * itemKey;
@property (readonly) NSString * itemVersion;
@property (readonly) NSData * itemValuePayload;
@property (readonly) NSString * domainVersion;

+ (NSURLResponse *)responseWithResponse:(NSURLResponse *)arg0 transaction:(SBKTransaction *)arg1;

- (void).cxx_destruct;
- (NSString *)domainVersion;
- (NSData *)itemValuePayload;
- (NSString *)itemKey;
- (NSString *)itemVersion;
- (void)deserializeResponseBodyWithTransaction:(NSObject *)arg0;

@end
