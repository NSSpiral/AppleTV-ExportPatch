/* Runtime dump - GQDRGradientStop
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDRGradientStop : NSObject
{
    float mFraction;
    GQDColor * mColor;
}

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (float)fraction;
- (void)dealloc;
- (UIColor *)color;

@end
