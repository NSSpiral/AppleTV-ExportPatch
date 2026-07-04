/* Runtime dump - SSItemArtworkImage
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying>
{
    NSMutableDictionary * _dictionary;
    NSString * _imageKind;
}

@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) int width;
@property (copy, nonatomic) NSString * imageKind;
@property (readonly, nonatomic) int imageOrientation;
@property (readonly, nonatomic) float imageScale;
@property (readonly, nonatomic) char prerendered;
@property (retain, nonatomic) NSURL * URL;
@property (readonly, nonatomic) struct CGSize imageSize;
@property (readonly, nonatomic) NSString * URLString;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSItemArtworkImage *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (SSItemArtworkImage *)copyWithZone:(struct _NSZone *)arg0;
- (int)imageOrientation;
- (struct CGSize)imageSize;
- (int)width;
- (int)height;
- (NSURL *)URL;
- (void)setURL:(NSURL *)arg0;
- (void *)valueForProperty:(NSString *)arg0;
- (NSString *)URLString;
- (void)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;
- (void)_setValue:(NSValue *)arg0 forKey:(NSString *)arg1;
- (char)isPrerendered;
- (void)setImageKind:(NSString *)arg0;
- (float)imageScale;
- (NSString *)imageKind;
- (SSItemArtworkImage *)initWithArtworkDictionary:(NSDictionary *)arg0;
- (void)setImageKindWithTypeName:(NSString *)arg0 variantName:(NSString *)arg1;

@end
