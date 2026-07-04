/* Runtime dump - TDPNGAsset
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDPNGAsset : TDAsset
{
    int _exifOrientation;
    unsigned int _fileScaleFactor;
}

@property (retain, nonatomic) NSSet * renditions;

- (int)exifOrientation;
- (void)_logError:(NSError *)arg0;
- (struct CGSize)sourceImageSizeWithDocument:(NSObject *)arg0;
- (NSObject *)sourceImageWithDocument:(NSObject *)arg0;
- (void)setFileScaleFactor:(unsigned int)arg0;
- (unsigned int)fileScaleFactor;
- (char)hasCursorProduction;
- (char)hasProduction;

@end
