/* Runtime dump - SSVPlatformContext
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlatformContext : NSObject <NSCopying>
{
    NSString * _lookupURLString;
    <SSVSAPContext> * _sapContext;
    NSArray * _signedHeaders;
    NSArray * _signedQueryParameters;
    NSString * _unpersonalizedLookupURLString;
}

@property (readonly, nonatomic) NSDictionary * bagDictionary;
@property (readonly, nonatomic) NSString * lookupURLString;
@property (readonly, nonatomic) NSString * unpersonalizedLookupURLString;
@property (readonly, nonatomic) NSArray * signedHeaders;
@property (readonly, nonatomic) NSArray * signedQueryParameters;
@property (retain, nonatomic) <SSVSAPContext> * SAPContext;

- (SSVPlatformContext *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (SSVPlatformContext *)initWithBagDictionary:(NSDictionary *)arg0;
- (NSDictionary *)bagDictionary;
- (NSString *)lookupURLString;
- (<SSVSAPContext> *)SAPContext;
- (void)setSAPContext:(NSObject *)arg0;
- (NSArray *)signedHeaders;
- (NSArray *)signedQueryParameters;
- (NSString *)unpersonalizedLookupURLString;

@end
