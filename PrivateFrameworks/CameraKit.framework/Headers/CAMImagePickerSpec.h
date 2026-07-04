/* Runtime dump - CAMImagePickerSpec
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMImagePickerSpec : CAMCameraSpec

+ (CAMImagePickerSpec *)specForPhone;
+ (CAMImagePickerSpec *)specForPad;

- (char)isCameraApp;

@end
