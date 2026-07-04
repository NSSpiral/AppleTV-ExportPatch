/* Runtime dump - SSVMediaContentTasteItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteItem : NSObject <SSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned int _contentType;
    NSString * _playlistGlobalID;
    long long _storeAdamID;
    unsigned int _tasteType;
}

@property (readonly, nonatomic) unsigned int contentType;
@property (readonly, copy, nonatomic) NSString * playlistGlobalID;
@property (readonly, nonatomic) long long storeAdamID;
@property (readonly, nonatomic) unsigned int tasteType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;

- (long long)storeAdamID;
- (unsigned int)tasteType;
- (NSDictionary *)copyXPCEncoding;
- (SSVMediaContentTasteItem *)initWithXPCEncoding:(NSString *)arg0;
- (NSString *)playlistGlobalID;
- (SSVMediaContentTasteItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (SSVMediaContentTasteItem *)copyWithZone:(struct _NSZone *)arg0;
- (SSVMediaContentTasteItem *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSObject *)_copyWithMediaContentTasteItemClass:(Class)arg0;
- (unsigned int)contentType;

@end
