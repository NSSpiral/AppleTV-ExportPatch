/* Runtime dump - CITile2Filter
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CITile2Filter : CITileFilter
{
    NSNumber * inputAcuteAngle;
}

@property (retain, nonatomic) NSNumber * inputAcuteAngle;

+ (NSArray *)customAttributes;

- (void)setInputAcuteAngle:(NSNumber *)arg0;
- (NSNumber *)inputAcuteAngle;
- (void)setDefaults;

@end
