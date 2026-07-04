/* Runtime dump - SSLookupProperties
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding>
{
    CLLocation * _location;
    int _localizationStyle;
    NSMutableDictionary * _requestParameters;
    NSNumber * _timeoutInterval;
}

@property (copy, nonatomic) NSString * keyProfile;
@property (nonatomic) int localizationStyle;
@property (copy, nonatomic) CLLocation * location;
@property (copy, nonatomic) NSNumber * timeoutInterval;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setLocalizationStyle:(int)arg0;
- (id)valueForRequestParameter:(id)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSLookupProperties *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSLookupProperties *)copyWithZone:(struct _NSZone *)arg0;
- (CLLocation *)location;
- (void)setTimeoutInterval:(NSNumber *)arg0;
- (NSNumber *)timeoutInterval;
- (void)setKeyProfile:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 forRequestParameter:(id)arg1;
- (void)setLocation:(CLLocation *)arg0;
- (NSDictionary *)copyRequestParameters;
- (NSString *)keyProfile;
- (int)localizationStyle;

@end
