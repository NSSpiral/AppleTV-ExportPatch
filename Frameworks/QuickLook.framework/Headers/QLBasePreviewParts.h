/* Runtime dump - QLBasePreviewParts
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLBasePreviewParts : QLPreviewParts

+ (char)canConvertDocumentType:(NSObject *)arg0;
+ (/* block */ id *)dataCallbackForUTI:(id)arg0 andSize:(unsigned int)arg1;
+ (char)isBundleURL:(NSURL *)arg0;
+ (/* block */ id *)urlCallbackForUTI:(id)arg0;

- (void)computePreview;

@end
