/* Runtime dump - NSCachedURLResponse
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSCachedURLResponseInternal * _internal;
}

@property (readonly, copy) NSURLResponse * response;
@property (readonly, copy) NSData * data;
@property (readonly, copy) NSDictionary * userInfo;
@property (readonly) unsigned int storagePolicy;

+ (void)initialize;
+ (char)supportsSecureCoding;

- (NSNumber *)_cacheTime;
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse *)arg0;
- (unsigned int)storagePolicy;
- (NSCoder *)_private_initWithCoder:(NSCoder *)arg0;
- (void)_private_encodeWithCoder:(NSCoder *)arg0;
- (NSCachedURLResponse *)initWithResponse:(NSURLResponse *)arg0 data:(NSData *)arg1;
- (NSCachedURLResponse *)initWithResponse:(NSURLResponse *)arg0 dataArray:(NSArray *)arg1 userInfo:(NSDictionary *)arg2 storagePolicy:(unsigned int)arg3;
- (NSArray *)dataArray;
- (void)_deallocInternalCFCachedURLResponse;
- (NSCachedURLResponse *)initWithResponse:(NSURLResponse *)arg0 data:(NSData *)arg1 userInfo:(NSDictionary *)arg2 storagePolicy:(unsigned int)arg3;
- (void)dealloc;
- (NSCachedURLResponse *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSCachedURLResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (NSDictionary *)userInfo;
- (NSURLResponse *)response;
- (NSURLResponse *)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse *)arg0;
- (struct _CFCachedURLResponse *)_CFCachedURLResponse;

@end
