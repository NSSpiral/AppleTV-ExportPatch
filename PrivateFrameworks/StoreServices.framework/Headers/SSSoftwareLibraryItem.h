/* Runtime dump - SSSoftwareLibraryItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareLibraryItem : NSObject <SSXPCCoding>
{
    char _beta;
    NSMutableDictionary * _etags;
    char _placeholder;
    char _profileValidated;
    NSMutableDictionary * _propertyValues;
}

@property (nonatomic) char beta;
@property (nonatomic) char placeholder;
@property (nonatomic) char profileValidated;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSSoftwareLibraryItem *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (void)setPlaceholder:(char)arg0;
- (void)_setValue:(NSValue *)arg0 forProperty:(NSString *)arg1;
- (void *)valueForProperty:(NSString *)arg0;
- (char)isPlaceholder;
- (NSObject *)ETagForAssetType:(NSObject *)arg0;
- (char)setETag:(NSString *)arg0 forAssetType:(NSObject *)arg1 error:(id *)arg2;
- (NSDictionary *)_initWithITunesMetadata:(NSData *)arg0;
- (char)isBeta;
- (void)setBeta:(char)arg0;
- (char)isProfileValidated;
- (void)setProfileValidated:(char)arg0;

@end
