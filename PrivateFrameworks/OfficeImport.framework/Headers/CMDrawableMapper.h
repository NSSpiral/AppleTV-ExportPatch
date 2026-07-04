/* Runtime dump - CMDrawableMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMDrawableMapper : CMMapper
{
    OADDrawable * mDrawable;
    CMDrawableStyle * mStyle;
    NSData * mImageBinaryData;
    NSString * mName;
    NSString * mExtension;
    int mResourceType;
    NSString * mSourcePath;
    struct CGRect mBox;
    float mRotation;
    char mIsSupported;
    char mIsCropped;
    struct CGRect mUncroppedBox;
    OADOrientedBounds * mOrientedBounds;
}

- (struct CGRect)box;
- (void)dealloc;
- (void)setRotation:(float)arg0;
- (float)rotation;
- (void).cxx_construct;
- (OADBlip *)blipAtIndex:(unsigned int)arg0;
- (CMDrawableMapper *)initWithOadDrawable:(id)arg0 parent:(NSObject *)arg1;
- (void)setBoundingBox;
- (void)setWithOadImage:(UIImage *)arg0;
- (void)mapTextBoxAt:(id)arg0 withState:(NSObject *)arg1;
- (void)calculateUncroppedBox:(id)arg0;
- (char)isCropped;
- (struct CGRect)uncroppedBox;
- (NSString *)saveResourceAndReturnPath:(NSString *)arg0 withType:(int)arg1;
- (void)mapShapeGraphicsAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGRect)shapeTextBoxRect;
- (void)mapDrawingContext:(NSObject *)arg0 at:(void *)arg1 relative:(char)arg2 withState:(NSObject *)arg3;
- (void)mapBounds;
- (id)convertMetafileToPdf;
- (void)mapImageBinaryData;
- (CMDrawableMapper *)initWithParent:(NSObject *)arg0;

@end
