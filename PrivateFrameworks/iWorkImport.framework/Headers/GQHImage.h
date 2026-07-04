/* Runtime dump - GQHImage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHImage : NSObject

+ (int)handleFloatingMedia:(NSObject *)arg0 state:(NSObject *)arg1;
+ (int)handleFloatingWebView:(NSObject *)arg0 state:(NSObject *)arg1;
+ (int)handleInlineMedia:(NSObject *)arg0 state:(NSObject *)arg1;
+ (int)handleInlineWebView:(NSObject *)arg0 state:(NSObject *)arg1;
+ (int)handleFloatingImageBinary:(id)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2 cropGeometry:(NSObject *)arg3 maskingShapePath:(NSString *)arg4 alphaMaskBezier:(struct CGPath *)arg5 state:(NSObject *)arg6;
+ (int)handleInlineImageBinary:(id)arg0 geometry:(TSDInfoGeometry *)arg1 cropGeometry:(NSObject *)arg2 maskingShapePath:(NSString *)arg3 alphaMaskBezier:(struct CGPath *)arg4 style:(NSObject *)arg5 state:(NSObject *)arg6;
+ (void)handleSimpleImageBinary:(id)arg0 geometry:(TSDInfoGeometry *)arg1 style:(NSObject *)arg2 state:(NSObject *)arg3;
+ (void)mapMaskedImage:(UIImage *)arg0 geometry:(TSDInfoGeometry *)arg1 cropGeometry:(NSObject *)arg2 maskingShapePath:(NSString *)arg3 alphaMaskBezier:(struct CGPath *)arg4 graphicStyle:(NSObject *)arg5 isFloating:(char)arg6 state:(NSObject *)arg7;
+ (void)mapCropGeometry:(NSObject *)arg0 bounds:(struct CGRect)arg1 style:(NSObject *)arg2;

@end
