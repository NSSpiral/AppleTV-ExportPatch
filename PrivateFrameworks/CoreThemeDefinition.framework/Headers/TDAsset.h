/* Runtime dump - TDAsset
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDAsset : NSManagedObject
{
    unsigned int _scaleFactor;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * category;
@property (retain, nonatomic) TDThemeBitSource * source;
@property (readonly, nonatomic) NSString * baseName;
@property (retain, nonatomic) TDTemplateRenderingMode * templateRenderingMode;

+ (TDAsset *)_filenameRegex;
+ (unsigned int)scaleFactorFromImageFilename:(NSString *)arg0;
+ (char)isTemplateFromImageFilename:(NSString *)arg0;
+ (int)idiomFromImageFilename:(NSString *)arg0;
+ (int)subtypeFromImageFilename:(NSString *)arg0;

- (void)setScaleFactor:(unsigned int)arg0;
- (unsigned int)scaleFactor;
- (NSObject *)fileURLWithDocument:(NSObject *)arg0;
- (char)hasProduction;
- (NSArray *)_sourceRelativePathComponents;
- (NSString *)sourceRelativePath;
- (void)setHasProduction:(TDNamedEffectProduction *)arg0;
- (NSString *)baseName;

@end
