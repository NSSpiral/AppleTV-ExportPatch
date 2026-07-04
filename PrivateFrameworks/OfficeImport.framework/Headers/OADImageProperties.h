/* Runtime dump - OADImageProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADImageProperties : OADGraphicProperties
{
    OADImageFill * mImageFill;
}

+ (OADImageProperties *)defaultProperties;

- (void)dealloc;
- (struct __CFURL *)imageFill;
- (char)hasImageFill;
- (void)setImageFill:(OADImageFill *)arg0;

@end
