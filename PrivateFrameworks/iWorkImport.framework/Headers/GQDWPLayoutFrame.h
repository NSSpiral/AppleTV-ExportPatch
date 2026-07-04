/* Runtime dump - GQDWPLayoutFrame
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPLayoutFrame : NSObject
{
    char * mStyleRef;
    GQDSStyle * mStyle;
    GQDWPLayoutStorage * mStorage;
    unsigned int mTextScale;
}

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (int)layoutStyle;
- (void)resolveStyleRef;
- (void)dealloc;
- (TSDCommentStorage *)storage;
- (unsigned int)textScale;
- (char)isBlank;

@end
