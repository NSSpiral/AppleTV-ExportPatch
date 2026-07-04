/* Runtime dump - GQDColor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDColor : NSObject <GQDNameMappable>
{
    float mRed;
    float mGreen;
    float mBlue;
    float mAlpha;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;
+ (GQDColor *)colorWithCalibratedRed:(float)arg0 green:(float)arg1 blue:(float)arg2;
+ (void)readColorFromProcessor:(id)arg0 reader:(struct _xmlTextReader *)arg1;
+ (NSObject *)rgbColorFromReader:(struct _xmlTextReader *)arg0 calibrated:(char)arg1;
+ (NSObject *)whiteColorFromReader:(struct _xmlTextReader *)arg0 calibrated:(char)arg1;
+ (NSObject *)cmykColorFromReader:(struct _xmlTextReader *)arg0;
+ (UIColor *)blackColor;

- (GQDColor *)initWithCalibratedRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
- (int)htmlRed;
- (int)htmlGreen;
- (int)htmlBlue;
- (NSString *)description;
- (void)getRed:(float *)arg0 green:(float *)arg1 blue:(float *)arg2 alpha:(float *)arg3;
- (float)alphaComponent;
- (float)redComponent;
- (float)greenComponent;
- (float)blueComponent;
- (NSObject *)blendedColorWithFraction:(float)arg0 ofColor:(UIColor *)arg1;

@end
