/* Runtime dump - SSVGratisRequestBody
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVGratisRequestBody : NSObject <NSCopying>
{
    NSNumber * _accountID;
    NSMutableDictionary * _additionalParameters;
    NSArray * _applications;
    char _backgroundRequest;
    NSArray * _bundleIdentifiers;
    NSArray * _itemIdentifiers;
    int _style;
}

@property (readonly, nonatomic) int requestStyle;
@property (copy, nonatomic) NSNumber * accountIdentifier;
@property (copy, nonatomic) NSArray * applications;
@property (nonatomic) char backgroundRequest;
@property (copy, nonatomic) NSArray * bundleIdentifiers;
@property (copy, nonatomic) NSArray * itemIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary * bodyDictionary;
@property (readonly, nonatomic) NSData * JSONBodyData;
@property (readonly, nonatomic) NSData * propertyListBodyData;

- (void)setAccountIdentifier:(NSNumber *)arg0;
- (NSString *)description;
- (SSVGratisRequestBody *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSArray *)bundleIdentifiers;
- (NSNumber *)accountIdentifier;
- (NSMutableDictionary *)bodyDictionary;
- (char)isBackgroundRequest;
- (void)setBackgroundRequest:(char)arg0;
- (NSArray *)itemIdentifiers;
- (void)setItemIdentifiers:(NSArray *)arg0;
- (SSVGratisRequestBody *)initWithRequestStyle:(int)arg0;
- (NSData *)JSONBodyData;
- (NSData *)propertyListBodyData;
- (void)setValue:(NSObject *)arg0 forBodyParameter:(id)arg1;
- (NSArray *)applications;
- (void)setApplications:(NSArray *)arg0;
- (void)setBundleIdentifiers:(NSArray *)arg0;
- (int)requestStyle;

@end
