/* Runtime dump - GQDWPListLabelGeometry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPListLabelGeometry : NSObject <GQDNameMappable>
{
    float mScale;
    float mBaselineOffset;
    char mScaleWithText;
    int mLabelAlignment;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (char)scaleWithText;
- (float)scale;
- (float)baselineOffset;
- (int)labelAlignment;

@end
