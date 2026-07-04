/* Runtime dump - GQPProcessorFactory
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPProcessorFactory : NSObject

+ (struct __CFString *)createUtiForDocument:(struct __CFString *)arg0;
+ (int)applicationForDocumentUti:(struct __CFString *)arg0;
+ (char)isTangierTEFDocumentUti:(struct __CFString *)arg0;
+ (char)isTemplateUti:(struct __CFString *)arg0;
+ (struct __CFURL *)newEmbeddedSageUrlForTangierDocumentUrl:(struct __CFURL *)arg0 uti:(struct __CFString *)arg1 isBundle:(char *)arg2;
+ (NSObject *)retainedProcessorForDocument:(struct __CFURL *)arg0 zipArchive:(TSUZipFileArchive *)arg1 uti:(struct __CFString *)arg2 outputType:(int)arg3 outputPath:(struct __CFString *)arg4 previewRequest:(struct __QLPreviewRequest *)arg5 progressiveHelper:(NSObject *)arg6 cryptoKey:(SFUCryptoKey *)arg7;
+ (NSObject *)retainedProcessorForDocument:(struct __CFURL *)arg0 zipArchive:(TSUZipFileArchive *)arg1 uti:(struct __CFString *)arg2 outputType:(int)arg3 outputPath:(struct __CFString *)arg4 previewRequest:(struct __QLPreviewRequest *)arg5 progressiveHelper:(NSObject *)arg6;

@end
