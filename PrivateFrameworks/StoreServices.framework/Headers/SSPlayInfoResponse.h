/* Runtime dump - SSPlayInfoResponse
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPlayInfoResponse : NSObject <SSXPCCoding, NSCopying>
{
    NSError * _error;
    NSData * _playInfoData;
}

@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) NSData * playInfoData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSPlayInfoResponse *)initWithXPCEncoding:(NSString *)arg0;
- (NSData *)playInfoData;
- (void)dealloc;
- (NSString *)description;
- (SSPlayInfoResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSError *)error;
- (SSPlayInfoResponse *)initWithPlayInfoData:(NSData *)arg0 error:(NSError *)arg1;

@end
