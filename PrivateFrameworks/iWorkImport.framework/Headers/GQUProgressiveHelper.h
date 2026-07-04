/* Runtime dump - GQUProgressiveHelper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQUProgressiveHelper : NSObject
{
    void * mClient;
    struct ? * mCallBacks;
    unsigned char started;
    struct __CFString * mNumbersSheetUri;
    float mPreviewHeight;
    float mPreviewWidth;
    char mStartedMainHTML;
}

- (void)closeAttachment:(struct __CFURL *)arg0;
- (void)appendDataToAttachment:(struct __CFURL *)arg0 chunk:(struct __CFData *)arg1;
- (void)setPreviewHeight:(float)arg0 andWidth:(float)arg1;
- (void)startDataWithOptions:(struct __CFDictionary *)arg0;
- (struct __CFURL *)createAttachment:(struct __CFString *)arg0 options:(struct __CFDictionary *)arg1;
- (void)setNumbersSheetUri:(struct __CFString *)arg0;
- (GQUProgressiveHelper *)initWithClient:(void *)arg0 andCallbacks:(void)arg1;
- (char)progressiveStreamStarted;
- (char)previewHasStreamedMainHTML;
- (struct __CFString *)getNumbersSheetUri;
- (float)getPreviewWidth;
- (float)getPreviewHeight;
- (void)displayGenericError:(struct __CFError *)arg0;
- (void)dealloc;

@end
