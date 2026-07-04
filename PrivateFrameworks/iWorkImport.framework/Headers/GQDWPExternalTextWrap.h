/* Runtime dump - GQDWPExternalTextWrap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPExternalTextWrap : NSObject <GQDNameMappable>
{
    char mFloatingWrapEnabled;
    char mInlineWrapEnabled;
    float mMargin;
    float mAlphaThreshold;
    int mWrapStyle;
    int mWrapDirection;
    int mFloatingWrapType;
    int mAttachmentWrapType;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (int)floatingWrapType;
- (int)wrapDirection;
- (char)floatingWrapEnabled;
- (char)inlineWrapEnabled;
- (float)alphaThreshold;
- (int)wrapStyle;
- (int)attachmentWrapType;
- (float)margin;

@end
