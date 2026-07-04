/* Runtime dump - GQHTextBox
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTextBox : GQHParagraphStyle

+ (int)handleLayoutStorage:(id)arg0 state:(NSObject *)arg1;
+ (void)mapStyle:(NSObject *)arg0 style:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)createExternalWrapSandbagStyles:(id)arg0;
+ (char)outputWrapSandbagsForFrame:(struct CGRect)arg0 columnCount:(struct CGSize)arg1 drawable:(TSDDrawableInfo *)arg2 state:(int)arg3 isPageFrame:(NSObject *)arg4;
+ (void)mapLayout:(NSObject *)arg0 style:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)mapScaledImageFill:(id)arg0 style:(NSObject *)arg1 size:(struct CGSize)arg2;
+ (char)styleNeedsImageFillMapping:(id)arg0;
+ (int)outputInnerSandbagsForShape:(id)arg0 layoutStyle:(int)arg1 state:(NSObject *)arg2;
+ (int)outputWrapSandbagsForShape:(id)arg0 layoutStyle:(int)arg1 state:(NSObject *)arg2;
+ (void)outputSandbag:(id)arg0 state:(NSObject *)arg1;
+ (int)handleShapeText:(NSString *)arg0 boundsRect:(struct CGRect)arg1 floating:(struct CGSize)arg2 state:(NSObject *)arg3;
+ (int)outputWrapSandbagsForFrame:(struct CGRect)arg0 columnCount:(struct CGSize)arg1 drawable:(TSDDrawableInfo *)arg2 state:(int)arg3;
+ (int)outputInnerSandbagsForFrame:(struct CGRect)arg0 drawable:(struct CGSize)arg1 state:(NSObject *)arg2;
+ (char *)name;

@end
