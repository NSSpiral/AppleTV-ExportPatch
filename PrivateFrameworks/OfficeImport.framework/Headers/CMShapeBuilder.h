/* Runtime dump - CMShapeBuilder
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMShapeBuilder : NSObject
{
    int _type;
    OADOrientedBounds * _orientedBounds;
    int _format;
    NSDictionary * _adjustValues;
}

+ (struct CGRect)canonicalBounds;

- (void)setFileFormat:(int)arg0;
- (void)dealloc;
- (struct CGAffineTransform)affineTransform;
- (char)isOffice12;
- (void)setOrientedBounds:(OADOrientedBounds *)arg0;
- (struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform)arg0;
- (void)setShapeType:(int)arg0;
- (void)setAdjustValues:(NSDictionary *)arg0;
- (float)maxAdjustedValue;

@end
