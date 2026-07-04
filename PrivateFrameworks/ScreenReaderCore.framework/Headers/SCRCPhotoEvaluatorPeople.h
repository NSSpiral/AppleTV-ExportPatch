/* Runtime dump - SCRCPhotoEvaluatorPeople
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorPeople : SCRCPhotoEvaluatorMethod

+ (SCRCPhotoEvaluatorPeople *)detect:(id)arg0 inRect:(struct CGRect)arg1;
+ (SCRCPhotoEvaluatorPeople *)detect:(id)arg0;
+ (int)faceSizeForFace:(struct CGRect)arg0 inImageRect:(struct CGSize)arg1;
+ (int)faceLocationForFace:(struct CGRect)arg0 inImageRect:(struct CGSize)arg1;
+ (NSObject *)_shirtColorForFaceRect:(struct CGRect)arg0 inImage:(struct CGSize)arg1;

@end
