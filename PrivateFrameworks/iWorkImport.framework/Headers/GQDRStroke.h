/* Runtime dump - GQDRStroke
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDRStroke : NSObject <GQDNameMappable>
{
    float mMiterLimit;
    float mWidth;
    int mCap;
    int mJoin;
    GQDColor * mColor;
    GQDRStrokePattern * mPattern;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (void)dealloc;
- (float)miterLimit;
- (float)width;
- (UIColor *)color;
- (int)cap;
- (int)join;
- (TSDStrokePattern *)pattern;

@end
