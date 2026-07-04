/* Runtime dump - SSVSAPSignatureComponent
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSAPSignatureComponent : NSObject <NSCopying>
{
    int _componentType;
    NSString * _key;
}

@property (readonly, nonatomic) int componentType;
@property (readonly, copy, nonatomic) NSString * key;

- (NSString *)key;
- (SSVSAPSignatureComponent *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (SSVSAPSignatureComponent *)initWithComponentType:(int)arg0 key:(NSString *)arg1;
- (NSURLResponse *)dataToSignWithURLResponse:(NSString *)arg0 responseData:(NSData *)arg1;
- (NSURLRequest *)dataToSignWithURLRequest:(NSString *)arg0;
- (NSObject *)_dataToSignWithDataSource:(NSObject *)arg0;
- (NSDictionary *)dataToSignWithRequestProperties:(NSDictionary *)arg0;
- (int)componentType;

@end
