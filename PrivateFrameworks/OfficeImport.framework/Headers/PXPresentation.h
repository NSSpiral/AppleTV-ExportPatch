/* Runtime dump - PXPresentation
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PXPresentation : NSObject

+ (struct CGSize)readSizeFromChildOfElement:(struct _xmlNode *)arg0 childName:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (void)readPresentationProperties:(NSDictionary *)arg0 to:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)readSlideIndicesWithPresentationPart:(id)arg0 presentationState:(NSObject *)arg1;
+ (PXPresentation *)readFromPackage:(id)arg0 fileName:(NSString *)arg1 reader:(NSObject *)arg2 cancel:(char)arg3 isThumbnail:(char)arg4 delegate:(NSObject *)arg5;

@end
